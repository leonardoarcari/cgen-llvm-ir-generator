; TODO: Comment

(define (-gen-decode-default-entry indent invalid-insn fn?)
  (string-append
    indent "insn = std::make_unique<"
      (gen-insn-class-name invalid-insn) ">{opcode};\n"
  )    
)

; Return the code for one insn entry.
; REST is the remaining entries.

(define (-gen-decode-insn-entry entry rest indent invalid-insn fn?)
  (assert (eq? 'insn (dtable-entry-type entry)))
  (logit 3 "Generating decode insn entry for " (obj:name (dtable-entry-value entry)) " ...\n")

  (let* ((insn (dtable-entry-value entry))
    (fmt-name (obj:name (insn-sfmt insn)))) 

    (cond

      ; Leave invalids to the default case.
      ((eq? (obj:name insn) 'x-invalid)
        "")

      ; If same contents as next case, fall through.
      ((and (not (null? rest))
        ; Ensure both insns.
        (eq? 'insn (dtable-entry-type (car rest)))
        ; Ensure same insn.
        (eq? (obj:name insn) 
          (obj:name (dtable-entry-value (car rest))))) ; End of AND
        (string-append indent "  case "
          (number->string (dtable-entry-index entry))
          " : /* fall through */\n"
        ))

      ; We are actually creating a new instruction
      (else
        (string-append indent "  case "
          (number->string (dtable-entry-index entry)) " :\n"
          ; Generate code to check that all of the opcode bits for this insn match
          indent "    if (("
          ; We are missing to check adata-integral-insn? CURRENT-ARRCH
          ; Don't know if we need it in our IR gen application
          "code"
          " & 0x" (number->hex (insn-base-mask insn)) ") == 0x" (number->hex (insn-value insn)) ") {\n"
          indent "      insn = std::make_unique<" 
            (gen-insn-class-name insn) ">{opcode};\n"
          indent "    } else {\n"
          (-gen-decode-default-entry (string-append "  " indent indent) 
            invalid-insn fn?)
          indent "    }\n"  
        )
      )
    )
  )
)

; Generate code to decode the expression table in ENTRY.
; INVALID-INSN is the <insn> object of the pseudo insn to handle invalid ones.

(define (-gen-decode-expr-entry entry indent invalid-insn fn?)
  ""
)

; TODO: Comment
(define (-gen-decode-table-entry table rest switch-num startbit decode-bitsize indent lsb0? invalid-insn fn?)
  (assert (eq? 'table (dtable-entry-type table)))
  (logit 3 "Generating decode table entry for case " (dtable-entry-index table) " ...\n")

  (string-list
    indent "  case "
    (number->string (dtable-entry-index table)) " :"
    ; If table is same as next, just emit a "fall through" to cut down on
    ; generated code.
    (if (and (not (null? rest))
          ; Ensure both tables.
          (eq? 'table (dtable-entry-type (car rest)))
          ; Ensure same table.
          (eqv? (subdtable-key (dtable-entry-value table))
              subdtable-key (dtable-entry-value (car rest)))
        )
      " /* fall through */\n"
      (string-list "\n"
        (-gen-decoder-switch switch-num
                startbit
                decode-bitsize
                (subdtable-table (dtable-entry-value table))
                (string-append indent "    ")
                lsb0?
                invalid-insn
                fn?
        )
      )
    )
  )
)

; Subroutine of -decode-sort-entries.
; Return a boolean indicating if A,B are equivalent entries.

(define (-decode-equiv-entries? a b)
  (let ((a-type (dtable-entry-type a))
  (b-type (dtable-entry-type b)))
    (if (eq? a-type b-type)
  (case a-type
    ((insn)
     (let ((a-name (obj:name (dtable-entry-value a)))
     (b-name (obj:name (dtable-entry-value b))))
      (eq? a-name b-name)))
    ((expr)
     ; Ignore expr entries for now.
     #f)
    ((table)
     (let ((a-name (subdtable-key (dtable-entry-value a)))
     (b-name (subdtable-key (dtable-entry-value b))))
       (eq? a-name b-name))))
  ; A and B are not the same type.
  #f))
)

; Subroutine of -gen-decoder-switch, sort ENTRIES according to desired
; print order (maximizes amount of fall-throughs, but maintains numerical
; order as much as possible).
; ??? This is an O(n^2) algorithm.  An O(n Log(n)) algorithm can be done
; but it seemed more complicated than necessary for now.

(define (-decode-sort-entries entries)
  (let ((find-equiv!
   ; Return list of entries in non-empty list L that have the same decode
   ; entry as the first entry.  Entries found are marked with #f so
   ; they're not processed again.
   (lambda (l)
     ; Start off the result with the first entry, then see if the
     ; remaining ones match it.
     (let ((first (car l)))
       (let loop ((l (cdr l)) (result (cons first nil)))
         (if (null? l)
       (reverse! result)
       (if (and (car l) (-decode-equiv-entries? first (car l)))
           (let ((lval (car l)))
       (set-car! l #f)
       (loop (cdr l) (cons lval result)))
           (loop (cdr l) result)))))))
  )
    (let loop ((entries (list-copy entries)) (result nil))
      (if (null? entries)
    (apply append (reverse! result))
    (if (car entries)
        (loop (cdr entries)
        (cons (find-equiv! entries)
        result))
        (loop (cdr entries) result)))))
)

; TODO: Comment
(define (-gen-decoder-switch switch-num startbit decode-bitsize table-guts
           indent lsb0? invalid-insn fn?)
  ; For entries that are a single insn, we are done, otherwise recurse.

  (string-list
    indent "switch (opcode) {\n"
    
    (let loop ((entries (-decode-sort-entries (dtable-guts-entries table-guts)))
          (result nil))
      (if (null? entries)
        (reverse! result)
        (loop
          (cdr entries)
          (cons (case (dtable-entry-type (car entries))
            ((insn)
              (-gen-decode-insn-entry (car entries) (cdr entries) indent invalid-insn fn?))
            ((expr)
              (-gen-decode-expr-entry (car entries) indent invalid-insn fn?))
            ((table)
              (-gen-decode-table-entry (car entries) (cdr entries)
                switch-num startbit decode-bitsize
                indent lsb0? invalid-insn fn?))
            )
          result)
        )
      )
    )

    indent "  default :\n"
    (-gen-decode-default-entry (string-append "    " indent) invalid-insn fn?)
    indent "}\n"
  )
)

; TODO: Comment

(define (gen-decoder insn-list bitnums decode-bitsize indent lsb0? invalid-insn fn?)
  (logit 3 "Building decode tree.\n"
   "bitnums = " (stringize bitnums " ") "\n"
   "decode-bitsize = " (number->string decode-bitsize) "\n"
   "lsb0? = " (if lsb0? "#t" "#f") "\n"
   "fn? = " (if fn? "#t" "#f") "\n"
   )

  ; First build a table that decodes the instruction set.

  (let ((table-guts (decode-build-table insn-list bitnums
          decode-bitsize lsb0?
          invalid-insn)))

    ; Now print it out.
    (-gen-decoder-switch "0" 0 decode-bitsize table-guts indent lsb0?
       invalid-insn fn?)
  )
)

; ============ FROM CGEN / utils-gen.scm ============
; Subroutine of gen-extract-ifields to compute arguments for -extract-chunk
; to extract values beyond the base insn.
; This is also used by gen-define-ifields to know how many vars are needed.
;
; The result is a list of (offset . length) pairs.
;
; ??? Here's a case where explicitly defined instruction formats can
; help - without them we can only use heuristics (which must evolve).
; At least all the details are tucked away here.

(define (-extract-chunk-specs base-length total-length alignment)
  (let ((chunk-length
   (case alignment
     ; For the aligned and forced case split the insn up into base-insn
     ; sized chunks.  For the unaligned case, use a chunk-length of 32.
     ; 32 was chosen because the values are extracted into portable ints.
     ((aligned forced) (min base-length 32))
     ((unaligned) 32)
     (else (error "unknown alignment" alignment)))))
    (let loop ((start base-length)
         (remaining (- total-length base-length))
         (result nil))
      (if (<= remaining 0)
    (reverse! result)
    (loop (+ start chunk-length)
    (- remaining chunk-length)
    ; Always fetch full CHUNK-LENGTH-sized chunks here,
    ; even if we don't actually need that many bytes.
    ; gen-ifetch only handles "normal" fetch sizes,
    ; and -gen-extract-word already knows how to find what
    ; it needs if we give it too much.
    (cons (cons start chunk-length)
          result)))))
)

; Returns C++ code to declare Instruction class member to hold ifield F

(define (gen-insn-class-ifld f indent)
  (string-list
    indent (gen-ifld-cpp-type f) " " (sanitize-elm-name (obj:name f)) ";\n"
  )
)

; Return C++ code to declare Instruction members to hold IFIELDS.
; All insns using the result have the same TOTAL-LENGTH (in bits).
; INDENT is a string prepended to each line.

(define (gen-insn-class-ifields ifields total-length indent)
  (let* ((base-length (if (adata-integral-insn? CURRENT-ARCH)
            32
            (state-base-insn-bitsize)))
    (chunk-specs (-extract-chunk-specs base-length total-length
              (current-arch-default-alignment))))
      (string-list
        (string-list-map (lambda (f)
          (gen-insn-class-ifld f indent))
          ifields)
      )
  )
)

; TODO: Comment

(define (-gen-parseSfmt sfmt)
  (logit 2 "Generating parseSfmt implementation for \"" (obj:name sfmt) "\" ...\n" 
    "\t<Key>: \"" (sfmt-key sfmt) "\"\n")
  (string-list
    ; Temporary generation of derived instruction class
    ; declaration / definition
    "class " (gen-sfmt-class-name sfmt) " {\n"
    "public:\n"
    "  void parseSfmt(uint32_t code) {\n"
    "" ; Fields extraction
    "  }\n"
    "private:\n"
    "" ; Fields
    (gen-insn-class-ifields (sfmt-iflds sfmt) (sfmt-length sfmt) "  ") "\n"
    "};\n\n"
  )
)

; TODO: Comment

(define (-gen-all-parseSfmt)
  (logit 2 "Generating parseSfmt implementations...\n")
  (string-list-map -gen-parseSfmt (current-sfmt-list))
)

; TODO: Comment

(define (-gen-decode-fn insn-list initial-bitnums lsb0?)
  (logit 3 "Insn-list: \n")
  (for-each (lambda (insn) 
    (logit 3 "\t" (insn-syntax insn) " " (ifmt-length (insn-ifmt insn)) "\n"))
    insn-list)
  (logit 3 "\ninitial-bitnums: "initial-bitnums "\n"
    "lsb0?: " lsb0? "\n")

  ; Compute the initial DECODE-BITSIZE as the minimum of all insn lengths.
  ; The caller of @arch@_decode function must fetch and pass exactly this
  ; number of bits of the instruction.
  ; For completeness, the base-mask-length is the length of the bit mask to
  ; extract the instruction-base from insn. The instruction-base is the 
  ; part of insn necessary to be fetched in order to unambiguously decode it.
  (let ((decode-bitsize (apply min (map insn-base-mask-length insn-list))))

    ; Compute INITIAL-BITNUMS if not supplied.
    ; 0 is passed for the start bit (it is independed of lsb0?)
    (if (null? initial-bitnums)
      (set! initial-bitnums (decode-get-best-bits insn-list nil
                      0 ; startbit
                      8 ; max
                      decode-bitsize
                      lsb0?)))

    ; All set. gen-decoder does the hard part, we just print out
    ; the result.
    (let ((decode-code (gen-decoder insn-list initial-bitnums
            decode-bitsize
            "    " lsb0?
            (current-insn-lookup 'x-invalid)
            #f)))
      (string-write
      "\
class Instruction {
public:
  static std::unique_ptr<Instruction> make(unsigned int opcode, uint32_t code) {
   
    auto insn = std::make_unique<Instruction>{};

"
    decode-code
"\
    
    // Demand extracting fields to derived class strategy method
    insn->parseSfmt(code); 
    return insn;
  }

  virtual voide parseSfmt(uint32_t code) = 0;
private:
  Instruction(unsigned int opcode)
    : _opcode{opcode} { }
protected:
  unsigned int _opcode;
};

/* Derived Instruction classes */
"
-gen-all-parseSfmt  
      )
    )
  )
)

; Generate decoder.h

(define (decoder.h)
  (logit 1 "Generating instruction decoder\n")

  (ir-gen-analyze-insns!)

  (string-write
    (lambda () (-gen-decode-fn (non-multi-insns (real-insns (current-insn-list)))
            (state-decode-assist)
            (current-arch-insn-lsb0?)))
  )
)