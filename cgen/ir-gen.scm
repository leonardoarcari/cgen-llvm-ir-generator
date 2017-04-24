; LLVM IR generator support routines.

; #t if multiple isa support is enabled
(define -with-multiple-isa? #f)
(define (with-multiple-isa?) -with-multiple-isa?)

; Specify which application.
(set! APPLICATION 'IR-GEN)

; Sanitize an element name to be a valid C++ variable name.
; @param name must be a valid string or a symbol
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
    (string->symbol str)
  )
) 

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
	; Placeholder
	*UNSPECIFIED*
)

(define (ir-gen-analyze!)
	; Placeholder
	*UNSPECIFIED*
)