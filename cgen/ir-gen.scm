; LLVM IR generator support routines.

; Specify which application.
(set! APPLICATION 'IR-GEN)

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