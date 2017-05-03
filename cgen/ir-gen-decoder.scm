; Returns C++ prototype of 'parseSfmt()' method
; of Instruction class.
; NAMESPACE is the string representation of parseSfmt()
;   method to be prepended to the method name, #f if no namespace
;   (e.g.: eq? NAMESPACE "AddInstruction" -> AddInstruction::parseSfmt()) 

(define (-gen-parse-sfmt-proto namespace)
  (string-append
    "void "
    (if namespace
      (string-append namespace "::")
      ""
    )
    "parseSfmt(uint8_t *code)" 
  )
) 

; Returns the C++ code to perform header includes

(define (-gen-decoder-cpp-includes)
  (string-append
    "#include <cstdint>\n"
    "#include <memory>\n"
    "\n"
  )
)

; Returns the C++ code to assign to 'insn' variable a 
; newly allocated std::unique_ptr<EmptyInstruction> 

(define (-gen-decode-default-entry indent invalid-insn fn?)
  (string-append
    indent "insn = std::make_unique<"
      (gen-insn-class-name invalid-insn) ">{opcode};\n"
  )    
)

; Return the code for one insn entry.
;
; ENTRY is the entry to decode.
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
; WARNING: At current date we have no clue about what an expression entry
; in the table-guts is. This is not required by lm32 or cris either. More
; investigation is required here.

(define (-gen-decode-expr-entry entry indent invalid-insn fn?)
  ""
)

; Returns the C++ code of the case when TABLE entry is itself a table
; (i.e. we are moving down in the tree implemented by 'table-guts').
; We emit the case for TABLE 'index' and recursevely call -gen-decoder-switch
; on TABLE, nesting a switch/case block within the current one.
;
; TABLE is the entry to decode.
; REST is the remaining entries.
; SWITCH-NUM, STARTBIT, DECODE-BITSIZE, INDENT, LSB0?, INVALID-INSN are same
; as for -gen-decoder-switch.

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

; ============ FROM CGEN / utils-sim.scm ============
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

; Generates switch statement to decode TABLE-GUTS.
; SWITCH-NUM is for compatibility with the computed goto decoder and
; isn't used. (??? So can be removed for LLVM IR purposes?)
; STARTBIT is the bit offset of the instruction value that C variable `insn'
; holds (note that this is independent of LSB0?).
; DECODE-BITSIZE is the number of bits of the insn that `insn' holds.
; LSB0? is non-#f if bit number 0 is the least significant bit.
; INVALID-INSN is the <insn> object of the pseudo insn to handle invalid ones.

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

; Entry point for decoder generation.
; Generates the C++ code to decode INSN-LIST.
; BITNUMS is the set of bits to initially key off of.
; DECODE-BITSIZE is the number of bits of the instruction that `insn' holds.
; LSB0? is non-#f if bit number 0 is the least significant bit.
; INVALID-INSN is the <insn> object of the pseudo insn to handle invalid ones.
; FN? is non-#f if the extractors are functions rather than inline code

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

; TODO: Comment to deeply explain how decoder works for us
; To mention:
;   - Instruction factory.
;   - Virtual strategy method to be overridden by derived class
;     implementing the strategy to decode an instruction word.

(define (-gen-insn-class-make insn-list initial-bitnums lsb0?)
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
            "  " lsb0?
            (current-insn-lookup 'x-invalid)
            #f)))
      (string-write
(-gen-decoder-cpp-includes)
      "\
std::unique_ptr<Instruction> Instruction::make(unsigned int opcode, uint8_t *code) {

  auto *insn = std::make_unique<Instruction>{};

"
  decode-code
"\
    
  // Demand extracting fields to derived class strategy method
  insn->parseSfmt(code); 
  return insn;
}
"
      )
    )
  )
)

; Subroutine of gen-extract-ifields to fetch one value into VAR-NAME.

(define (-extract-chunk offset bits var-name)
  (string-append
    var-name " = "
    (gen-ir-ifetch "pc" offset bits)
    ";"
  )
)

(define (-gen-ir-ifld-extract-base f total-length base-value)
  (logit 4 "    Entering gen-ir-ifld-extract-base for " (obj:name f) " ...\n")
  (let ((extraction
          (string-append "extract"
            (if (current-arch-insn-lsb0?) "LSB0" "MSB0")
            (case (mode:class (ifld-mode f))
              ((INT) "<int>")
              ((UINT) "<unsigned int>")
              (else (error "unsupported mode class"
                (mode:class (ifld-mode f)))))
            " ("
            base-value ", "
            (number->string total-length) ", "
            ; ??? Is passing total-length right here?
            (number->string (+ (ifld-start f total-length)
              (ifld-word-offset f))) ", "
            (number->string (ifld-length f))
              ")"))
        (decode (ifld-decode f)))
    ; If the field doesn't have a special decode expression,
    ; just return the raw extracted value.  Otherwise, emit
    ; the expression.
    ; TODO: expression handling not yet implemented
    (logit 4 "    Exiting gen-ir-ifld-extract-base for " (obj:name f) " ...\n")
    (if (not decode)
      extraction
      ; cadr: fetches expression to be evaluated
      ; caar: fetches symbol in arglist
      ; cadar: fetches `pc' symbol in arglist
      (rtl-cpp VOID (cadr decode)
        (list (list (caar decode) 'UINT extraction)
          (list (cadar decode) 'IAI "pc"))
            #:ifield-var? #t)
    )
  )
)

; Subroutine of -gen-ir-ifld-extract-beyond to extract the relevant value
; from WORD-NAME and move it into place.

(define (-gen-ir-extract-word word-name word-start word-length
         field-start field-length
         unsigned? lsb0?)
  (let* ((word-end (+ word-start word-length))
      (start (if lsb0? (+ 1 (- field-start field-length)) field-start))
      (end (+ start field-length))
      (base (if (< start word-start) word-start start)))

    (string-append "extract"
      (if lsb0? "LSB0" "MSB0")
      (if (and (not unsigned?)
            ; Only want sign extension for word with sign bit.
            (bitrange-overlap? field-start 1
              word-start word-length
              lsb0?
            )
          )
        "<int> ("
        "<unsigned int> (")
      ; What to extract from.
      word-name
      ", "
      ; Size of this chunk.
      (number->string word-length)
      ", "
      ; MSB of this chunk.
      (number->string
        (if lsb0?
          (if (> end word-end)
            (- word-end 1)
            (- end word-start 1)
          )
          (if (< start word-start)
            0
            (- start word-start)
          )
        )
      )
      ", "
      ; Length of field within this chunk.
      (number->string 
        (if (< end word-end)
          (- end base)
          (- word-end base)
        )
      )
      ") << "
      ; Adjustment for this chunk within a full field.
      (number->string 
        (if (> end word-end)
          (- end word-end)
          0
        )
      )
    )
  )
)

; Return C++ code to extract a field that extends beyond the base insn.
;
; ============ FROM CGEN / utils-gen.scm ============
; Things get tricky in the non-integral-insn case (no kidding).
; This case includes every architecture with at least one insn larger
; than 32 bits, and all architectures where insns smaller than 32 bits
; can't be interpreted as an int.
; ??? And maybe other architectures not considered yet.
; We want to handle these reasonably fast as this includes architectures like
; the ARC and I960 where 99% of the insns are 32 bits, with a few insns that
; take a 32 bit immediate.  It would be a real shame to unnecessarily slow down
; handling of 99% of the instruction set just for a few insns.  Fortunately
; for these chips base-insn includes these insns, so things fall out naturally.
;
; BASE-LENGTH is base-insn-bitsize.
; TOTAL-LENGTH is the total length of the insn.
; VAR-LIST is a list of variables containing the insn.
; Each element in VAR-LIST is (name start length).
; The contents of the insn are in several variables: insn, word_[123...],
; where `insn' contains the "base insn" and `word_N' is a set of variables
; recording the rest of the insn, 32 bits at a time (with the last one
; containing whatever is left over).

(define (-gen-ir-ifld-extract-beyond f base-length total-length var-list)
  ; First compute the list of variables that contains pieces of the
  ; desired value.
  (let ((start (+ (ifld-start f total-length) (ifld-word-offset f)))
      (length (ifld-length f))
      (extraction #f)
      ; extra processing to perform on extracted value
      (decode (ifld-decode f))
      (lsb0? (current-arch-insn-lsb0?)))

    ; Find which vars are needed and move the value into place.
    (let loop ((var-list var-list) (result (list ")")))
      (if (null? var-list)
        (set! extraction (apply string-append (cons "(0" result)))
        (let ((var-name (caar var-list))
            (var-start (cadar var-list))
            (var-length (caddar var-list)))
          
          (if (bitrange-overlap? start length
                var-start var-length
                lsb0?)
            (loop (cdr var-list)
              (cons "|"
                (cons 
                  (-gen-ir-extract-word var-name
                    var-start
                    var-length
                    start length
                    (eq? (mode:class (ifld-mode f)) 'UINT)
                    lsb0?
                  )
                  result
                )
              )
            )
            (loop (cdr var-list) result)
          )
        )
      )
    )
    ; If the field doesn't have a special decode expression, just return the
    ; raw extracted value.  Otherwise, emit the expression.
    (if (not decode)
      extraction
      ; cadr: fetches expression to be evaluated
      ; caar: fetches symbol in arglist
      ; cadar: fetches `pc' symbol in arglist
      (rtl-cpp VOID (cadr decode)
        (list 
          (list (caar decode) 'UINT extraction)
          (list (cadar decode) 'IAI "pc")
        ) #:ifield-var? #t
      )
    )
  )
)

; Return C++ code to extract <ifield> F.

(define (gen-ir-ifld-extract f indent base-length total-length base-value var-list)
  (string-append
    indent "sfmt."
    (sanitize-elm-name (obj:name f)) " = "
    (if (adata-integral-insn? CURRENT-ARCH)
      (-gen-ir-ifld-extract-base f total-length base-value)
      (if (ifld-beyond-base? f base-length total-length)
        (-gen-ir-ifld-extract-beyond f base-length total-length var-list)
        (-gen-ir-ifld-extract-base f base-length base-value)
      )
    )
    ";\n"
  )
)

; Return C++ code to extract a <multi-ifield> from an insn.
; This must have the same signature as gen-ifld-extract as both can be
; made methods in application code.

(define (gen-ir-multi-ifld-extract f indent base-length total-length base-value var-list)
  ; The subfields must have already been extracted.
  (let* ((decode-proc (ifld-decode f))
      (varname (gen-sym f))
      (decode 
        (string-list
          ;; First, the block that extract the multi-ifield into the ifld variable
          (rtl-cpp VOID (multi-ifld-extract f) nil
            #:ifield-var? #t
          )
          ;; Next, the decode routine that modifies it
          (if decode-proc
            (string-append
              "  " varname " = "
              (rtl-cpp VOID (cadr decode-proc)
                (list 
                  (list (caar decode-proc) 'UINT varname)
                  (list (cadar decode-proc) 'IAI "pc")
                )
                #:ifield-var? #t
              )
              ";\n"
            )
            "")
        )
      ))
    
    decode ; Return it
  )
)

; Returns C++ code to extract IFIELDS
; All insn using the result have the same TOTAL-LENGTH (in bits)
;
; Here is where we handle integral-insn vs non-integeral-insn architectures.
;
; Examples of architectures that can be handled as integral-insns are:
; sparc, m32r, mips, etc.
;
; Examples of architectures that can't be handled as integral insns are:
; arc, i960, fr30, i386, m68k.
; [i386,m68k are only mentioned for completeness.  cgen ports of these
; would be great, but more thought is needed first]

(define (gen-parse-sfmt-extract-ifields ifields total-length indent)
  (let* ((base-length (if (adata-integral-insn? CURRENT-ARCH)
              32
              (state-base-insn-bitsize)))
        (chunk-specs (-extract-chunk-specs base-length total-length
              (current-arch-default-alignment))))
    (string-list
      ; If the insn has a trailing part, fetch it.
      (if (> total-length base-length)
        (let ()
          (string-list-map (lambda (chunk-spec chunk-num)
            (-extract-chunk (car chunk-spec)
                (cdr chunk-spec)
                (string-append
                 "word_"
                 (number->string chunk-num))
            ))
            chunk-specs
            (iota (length chunk-specs) 1)
          )
        )
        "" ; Else
      )
      (string-list-map
        (lambda (f)
          (logit 3 "  Extracting field " (obj:name f) " ...\n")
          ; Dispatching on a method works better, as would a generic fn.
          (if (multi-ifield? f)
            (gen-ir-multi-ifld-extract
              f indent base-length total-length "insn"
              (-gen-extract-beyond-var-list base-length "word_"
                chunk-specs
                (current-arch-insn-lsb0?)
              )
            )
            (gen-ir-ifld-extract
              f indent base-length total-length "insn"
              (-gen-extract-beyond-var-list base-length "word_"
                chunk-specs
                (current-arch-insn-lsb0?)
              )
            )
          )
        )
        ifields
      )
    )
  )
)

; Returns C++ code to implement the "void parseSfmt()" method
; of the C++ class representing <insn> INSN

(define (-gen-insn-parse-sfmt insn)
  (logit 2 "Generating parseSfmt() method for \"" (obj:name insn) "\"\n")
  (let ((sfmt (insn-sfmt insn)))
    (string-list
      (-gen-parse-sfmt-proto (gen-insn-class-name insn)) " {\n"
      (gen-parse-sfmt-extract-ifields (sfmt-iflds sfmt) (sfmt-length sfmt) "  ")
      "}\n\n"
    )
  )
)

; For each instruction, implement the strategy method 'parseSfmt()' 
; for parsing an instruction 

(define (-gen-all-insn-parse-sfmt)
  (logit 2 "Generating parseSfmt() methods\n")
  (string-list-map -gen-insn-parse-sfmt 
    (non-multi-insns (real-insns (current-insn-list)))
  )
)

; Generates decoder.cpp

(define (decoder.cpp)
  (logit 1 "Generating instruction decoder implementation\n")

  (ir-gen-analyze-insns!)

  (string-write
    (lambda () (-gen-insn-class-make (non-multi-insns (real-insns (current-insn-list)))
            (state-decode-assist)
            (current-arch-insn-lsb0?)))
    (lambda () (-gen-all-insn-parse-sfmt))
  )
)

; Returns the C++ code to perform header includes

(define (-gen-decoder-h-includes)
  (string-append
    "#include <cstdint>\n"
    "#include <memory>\n"
    "\n"
  )
)

; TODO: Comment

(define (-gen-base-class-insn) 
  (logit 2 "Generating Instruction abstract base class ...\n")
  (string-write
    "\
class Instruction {
public:
  static std::unique_ptr<Instruction> make(unsigned int opcode, uint8_t *code);
  virtual " (-gen-parse-sfmt-proto #f) " = 0;\

private:
  Instruction(unsigned int opcode)
    : _opcode{opcode} { }

protected:
  unsigned int _opcode;
};

"
  )
)

; =========== TEMPORARY ===========
; Returns C++ code declaring a struct to represent <sformat> SFMT.
; The main purpose is to store the fields of an instruction
; with such format.

(define (-gen-class-sfmt sfmt)
  (logit 2 "\tGenerating SFormat class declaration for \"" (obj:name sfmt) "\" ...\n"
    "\t\t<Key>: \"" (sfmt-key sfmt) "\"\n")
  (string-list
    ; Temporary generation of derived instruction class
    ; declaration / definition
    "struct " (gen-sfmt-class-name sfmt) " {\n"
    "" ; Fields
    (gen-insn-class-ifields (sfmt-iflds sfmt) (sfmt-length sfmt) "  ")
    "};\n\n"
  )
)

; =========== TEMPORARY ===========
; Generate structs to represent instructions <sformat> sformats

(define (-gen-all-class-sfmts)
  (logit 2 "Generating SFormat classes declaration\n")
  (string-list-map -gen-class-sfmt (current-sfmt-list))
)

; Returns C++ code declaring EmptyInstruction class, as it's not
; taken into account by -gen-all-class-insns (because it requires
; real insn and the 'x-invalid' one is not)

(define (-gen-class-empty-insn)
  (let ((empty (current-insn-lookup 'x-invalid)))
    ; "class " (gen-insn-class-name empty) " : public Instruction {\n"
    ; "public:\n"
    (-gen-class-insn empty)
  )
)

; =========== TEMPORARY ===========
; Returns C++ code declaring and defining a derived Instruction
; class. The generated class has a *Sfmt memeber to hold instruction fields.
; It also implements the strategy to decode a word containing the
; INSN instruction.

(define (-gen-class-insn insn)
  (logit 2 "Generating instruction implementation for \"" (obj:name insn) "\" ...\n")
  (string-list
    ; Temporary generation of derived instruction class
    ; declaration / definition
    "class " (gen-insn-class-name insn) " : public Instruction {\n"
    "public:\n"
    "  " (-gen-parse-sfmt-proto #f) ";\n"
    "private:\n"
    ; Fields
    "  " (gen-sfmt-class-name (insn-sfmt insn)) " sfmt;\n"
    "};\n\n"
  )
)

; =========== TEMPORARY ===========
; Entry point of derived Instruction classes generation.

(define (-gen-all-class-insns)
  (logit 2 "Generating instructions implementations...\n")
  (string-list
    (-gen-class-empty-insn) 
    (string-list-map -gen-class-insn (non-multi-insns (real-insns (current-insn-list))))
  )
)

; Generate decoder.h

(define (decoder.h)
  (logit 1 "Generating instruction decoder header\n")

  (ir-gen-analyze-insns!)

  (string-write
    (lambda () (-gen-decoder-h-includes))
    (lambda () (-gen-all-class-sfmts))
    (lambda () (-gen-base-class-insn))
    (lambda () (-gen-all-class-insns))
  )
)
