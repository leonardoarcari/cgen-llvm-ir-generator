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

; Operands support code.
; The following methods are strictly required by operands (e.g. registers
; mem...) in order to support code generation by other modules like
; rtl-cpp.scm. More precisely, the following are a must:
;
; - get-mode      - return mode of operand
; - cppxmake-get    - return <cpp-expr> object containing operand's value
; - gen-cpp-set-quiet - return string of C++ code to set operand's value (no tracing)
; - gen-set-trace - return string of C++ code to set operand's value
;
; In addition,
; Instruction ifields must have these methods:
; - get-mode
; - cppxmake-get

(define (-cppxmake-ifld-val mode f)
  (cppx:make mode (sanitize-elm-name f))
)

; Default cppxmake-get method.
; Return a <cpp-expr> object of the value of SELF.
; ESTATE is the current rtl evaluator state.
; INDEX is a <hw-index> object.  It must be an ifield.
; SELECTOR is a hardware selector RTX.

(method-make!
  <hardware-base> 'cppxmake-get
  (lambda (self estate mode index selector)
    (if (not (eq? 'ifield (hw-index:type index)))
      (error "not an ifield hw-idnex" index)
      (-cppxmake-ifld-val mode (hw-index:value index))
    )
  )
)

; 'gen-cpp-set-quiet helper for PC values.
; NEWVAL is a <cpp-expr> object of the value to be assigned.
; If OPTIONS contains #:direct, set the PC directly, bypassing semantic
; code considerations.
; ??? OPTIONS support wip.  Probably want a new form (or extend existing form)
; of rtx: that takes a variable number of named arguments.
; ??? Another way to get #:direct might be (raw-reg h-pc).

(define (-hw-gen-cpp-set-quiet-pc self estate mode index selector newval . options)
  (if (not (send self 'pc?)) (error "Not a PC:" self))
  (cppx:make mode ";") ; Empty statement. NOT YET IMPLEMENTED.
)

(method-make! <hw-pc> 'gen-cpp-set-quiet -hw-gen-cpp-set-quiet-pc)

(method-make!
  <hw-pc> 'cppxmake-skip
  (lambda (self estate yes?)
    (cppx:make VOID ";")) ; Empty statement. NOT YET IMPLEMENTED.
)

; Utility to build a <cpp-expr> object to fetch the value of a register.

(define (-hw-cppxmake-get hw estate mode index selector)
  (let ((mode (if (mode:eq? 'DFLT mode)
          (send hw 'get-mode) 
          mode))
      (getter (hw-getter hw)))
    
    ; If the register is accessed via a cover function/macro, do it.
    ; Otherwise fetch the value from the cached address or from the CPU struct.
    (cppx:make mode
      ";" ; Empty statement. NOT YET IMPLEMENTED.
    )
  )
)

(method-make! <hw-register> 'cppxmake-get -hw-cppxmake-get)

; Utilities to generate C++ code to assign a variable to a register.

(define (-hw-gen-cpp-set-quiet hw estate mode index selector newval)
  "Feature not yet implemented."
)

(method-make! <hw-register> 'gen-cpp-set-quiet -hw-gen-cpp-set-quiet)

; Memory support.

(method-make!
  <hw-memory> 'cppxmake-get
    (lambda (self estate mode index selector)
      cppx:make mode ";") ; Empty statement. NOT YET IMPLEMENTED.
)

(method-make!
  <hw-memory> 'gen-cpp-set-quiet
    (lambda (self estate mode index selector)
      "Feature not yet implemented.") ; Empty statement. NOT YET IMPLEMENTED.
)

; Address

; Return a <c-expr> object of the value of SELF.
; ESTATE is the current rtl evaluator state.
; INDEX is a hw-index object.  It must be an ifield.
; Needed because we record our own copy of the ifield in ARGBUF.
; SELECTOR is a hardware selector RTX.

(method-make!
  <hw-address> 'cppxmake-get
  (lambda (self estate mode index selector)
    (if (not (eq? 'ifield (hw-index:type index)))
      (error "not an ifield hw-index" index))
    (cppx:make mode ";") ; Empty statement. NOT YET IMPLEMENTED.
   )
)

(method-make!
  <hw-iaddress> 'cppxmake-get
  (lambda (self estate mode index selector)
    (if (not (eq? 'ifield (hw-index:type index)))
      (error "not an ifield hw-index" index))
    (cppx:make mode ";") ; Empty statement. NOT YET IMPLEMENTED.
   )
)

(method-make!
  <hw-index> 'cppxmake-get
  (lambda (self estate mode index selector)
    (cppx:make mode ";") ; Empty statement. NOT YET IMPLEMENTED.
   )
)

; Extra pc operand methods.

(method-make!
  <pc> 'cppxmake-get
  (lambda (self estate mode index selector)
    (let ((mode 
          (if (mode:eq? 'DFLT mode)
            (send self 'get-mode)
            mode)))

      ; The enclosing function must set `pc' to the correct value.
      (cppx:make mode "pc")
    )
  )
)

(method-make!
  <pc> 'cppxmake-skip
  (lambda (self estate yes?)
    (send (op:type self) 'cppxmake-skip estate
      (rtl-cpp INT yes? nil)))
)

; Return <cpp-expr> object to get the value of an operand.
; ESTATE is the current rtl evaluator state.
; If INDEX is non-#f use it, otherwise use (op:index self).
; This special handling of #f for INDEX is *only* supported for operands
; in cppxmake-get, gen-set-quiet, and gen-set-trace.
; Ditto for SELECTOR.

(method-make!
  <operand> 'cppxmake-get
  (lambda (self estate mode index selector)
    (cppx:make mode ";") ; Empty statement. NOT YET IMPLEMENTED.
  )
)

; Return C++ code to set the value of an operand.
; NEWVAL is a <cpp-expr> object of the value to store.
; If INDEX is non-#f use it, otherwise use (op:index self).
; This special handling of #f for INDEX is *only* supported for operands
; in cxmake-get, gen-set-quiet, and gen-set-trace.
; Ditto for SELECTOR.

(method-make!
  <operand> 'gen-cpp-set-quiet
    (lambda (self estate mode index selector)
      "Feature not yet implemented.") ; Empty statement. NOT YET IMPLEMENTED.
)

; Return C++ code to set the value of an operand and print TRACE_RESULT message.
; NEWVAL is a <cpp-expr> object of the value to store.
; If INDEX is non-#f use it, otherwise use (op:index self).
; This special handling of #f for INDEX is *only* supported for operands
; in cxmake-get, gen-set-quiet, and gen-set-trace.
; Ditto for SELECTOR.

(method-make!
  <operand> 'gen-cpp-set-trace
    (lambda (self estate mode index selector)
      "Feature not yet implemented.") ; Empty statement. NOT YET IMPLEMENTED.
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

  (rtl-cpp-init!) ; Support for C++/LLVM code generation
	
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