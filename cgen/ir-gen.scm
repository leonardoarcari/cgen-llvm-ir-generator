; LLVM IR generator support routines.

; #t if multiple isa support is enabled
(define -with-multiple-isa? #f)
(define (with-multiple-isa?) -with-multiple-isa?)

; Specify which application.
(set! APPLICATION 'IR-GEN)

; Sanitize an element name to be a valid C++ variable name.
; NAME must be a valid string or a symbol

(define (sanitize-elm-name name)
  (let ((str ""))
    (if (string? name)
      (set! str name)
      (set! str (symbol->string name))
    )
    (string-for-each-index
      (lambda (i)
        (if (equal? #\- (string-ref str i))
          (string-set! str i #\_)
        )
      )
      str
    )
    str
  )
)

; Returns the class name of INSN in the generated C++ translator.
; E.g.: 
; INSN is a "addi" -> AddiInstruction
; INSN is a "x-invalid" -> EmptyInstruction

(define (gen-insn-class-name insn)
  (assert (insn? insn))

  (if (eq? (obj:name insn) 'x-invalid)
    "EmptyInstruction"
    (string-append 
      (string-capitalize (symbol->string (obj:name insn)))
      "Instruction"
    )
  )
)

; Returns the class name of SFMT in the generated C++ translator.
; E.g.: 
; SFMT is a "sfmt-addi" -> AddiSFormat
; SFMT is a "sfmt-empty" -> EmptySFormat

(define (gen-sfmt-class-name sfmt)
  (assert (class-instance? <sformat> sfmt))

  (let ((name (symbol->string (obj:name sfmt))))
    (string-append
      (string-capitalize (substring name (string-length "sfmt-")))
      "SFormat"
    )
  )
)

; Returns the C++ var type representing the class of <mode> MODE

(define (gen-mode-cpp-type mode)
  (let* ((class (mode:class mode))
    (ptr-to (elm-xget mode 'ptr-to)))
      (if ptr-to
        (string-append (gen-mode-cpp-type ptr-to) " *")
        (cond 
          ((eq? class 'INT) "int")
          ((eq? class 'UINT) "unsigned int")
          ((eq? class 'FLOAT) "float")
          (else "int")
        )
      )
  )
)

; Returns the C++ var type to contain <ifield> ifld

(define (gen-ifld-cpp-type ifld)
  (assert (ifield? ifld))

  (gen-mode-cpp-type (ifld-decode-mode ifld))
)

; Return C++ code to fetch a value from instruction memory.
; PC-VAR is the C++ expression containing the address of the start of the
; instruction

(define (gen-ir-ifetch pc-var bitoffset bitsize)
  (string-append "getInstruction<"
    (case bitsize
      ((8) "uint8_t")
      ((16) "uint16_t")
      ((32) "uint32_t")
      (else (error "bad bitsize argument to gen-ir-ifetch" bitsize))
    )
    ">(" pc-var " + " (number->string (quotient bitoffset 8))
    ")"
  )
)

(define (gen-sem-mode-cpp-type mode)
  (cond
    ((mode:eq? mode (mode:lookup 'VOID)) "void")
    ((mode:eq? mode (mode:lookup 'BI)) "unsigned char")
    ((mode:eq? mode (mode:lookup 'QI)) "int8_t")
    ((mode:eq? mode (mode:lookup 'HI)) "int16_t")
    ((mode:eq? mode (mode:lookup 'SI)) "int32_t")
    ((mode:eq? mode (mode:lookup 'UQI)) "uint8_t")
    ((mode:eq? mode (mode:lookup 'UHI)) "uint16_t")
    ((mode:eq? mode (mode:lookup 'USI)) "uint32_t")
    ((mode:eq? mode (mode:lookup 'DI)) "int64_t")
    ((mode:eq? mode (mode:lookup 'UDI)) "uint64_t")
  )
)

; Scan insns, analyzing semantics and computing instruction formats.
; 'twould be nice to do this in sim-analyze! but it doesn't know whether this
; needs to be done or not (which is determined by what files are being
; generated).  Since this is an expensive operation, we defer doing this
; to the files that need it.

; Only run sim-analyze-insns! once.
(define -ir-gen-insns-analyzed? #f)

; Requested to be provided by "set-cgen-options!"
(define (option-init!)
	*UNSPECIFIED*
)

(define (option-set! name value)
	*UNSPECIFIED*
)

; Called before/after the .cpu file has been read in.
(define (ir-gen-init!)
	; Placeholder
	*UNSPECIFIED*
)

(define (ir-gen-finish!)
  ; Define invalid handler if not provided. For the moment, 'x-invalid
  ; does nothing, the only purpose to have it, until semantic generation
  ; is provided, is for decoding, where we should have a handler for possible
  ; invalid instructions

  (let ((all (stringize (current-arch-isa-name-list) ",")))
    (logit 3 "Defining 'x-invalid insn\n")
    (define-full-insn 'x-invalid "invalid insn handler"
        `(VIRTUAL (ISA ,all))
        "--invalid--" '() '() (list 'c-code 'VOID (string-append "\
    { }"
    )) nil)
    )

	*UNSPECIFIED*
)

(define (ir-gen-analyze!)
	; Placeholder
	*UNSPECIFIED*
)

(define (ir-gen-analyze-insns!)
  ; This can only be done if one isa and one cpu family is being kept.
  (assert-keep-one)

  (if (not -ir-gen-insns-analyzed?)

      (begin
  (arch-analyze-insns! CURRENT-ARCH
           #f ; don't include aliases
           #t) ; do analyze the semantics

  ; Compute the set of sformat argument buffers.
  ; --- Removed for now. One thing at the time
  ;(set! -ir-gen-sformat-abuf-list (compute-sformat-argbufs! (current-sfmt-list)))

  (set! -ir-gen-insns-analyzed? #t)))

  ; Do our own error checking.
  ; --- Perform more research when implementing sem generation
  ;(assert (current-insn-lookup 'x-invalid))

  *UNSPECIFIED*
)