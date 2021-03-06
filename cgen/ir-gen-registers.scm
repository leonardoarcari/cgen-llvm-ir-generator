; Print registers.h include directives

(define (-gen-reg-includes)
	(string-append
	 "\
#include \"llvm/IR/LLVMContext.h\"
#include \"llvm/IR/Module.h\"
#include \"llvm/IR/Constants.h\"
\n"	
	)
)

; Debug routine to log useful information about hw elements

(define (-log-hw-info hw)
	(logit 3 
		"\nDEBUGGING INFO of " (obj:name hw) "\n"
		"  <sem-name>:\t" (hw-sem-name hw) "\n"
		"  <Comment>:\t"(obj:comment hw) "\n"
		"  <Mode>:\t[<Class>: " (mode:class (hw-mode hw)) 
		"  <Bytes>: " (mode:bytes (hw-mode hw)) "]" "\n"
		"  <Length>:\t" (hw-num-elms hw)"\n"
		; FIX Debug info for hw indices. Works for lm32 but crashes for cris.cpu
		; (if (hw-indices hw)
		;  (string-list "Name:\t" 
		;  	(kw-print-name (hw-indices hw)) 
		;  	"\nPrefix:\t" (kw-prefix (hw-indices hw))
		;  	"\nValues:\t" (kw-values (hw-indices hw)))
		;  "")
		"\n"
	)
)

; Return a boolean indicating if hardware element HW needs storage allocated
; for it in a global variable within LLVM Module.

(define (hw-need-storage? hw)
  (and (register? hw) (not (obj-has-attr? hw 'VIRTUAL)))
)

; Extract register index given its name
(define (reg-index hw reg-name)
  (if (not (hw-indices hw)) ; Are we a set of registers?
    #f ; If not return #f
    ; Otherwise look for a register whose name equals? 
    ; reg-name and return its index
    (let ((values (kw-values (hw-indices hw))))
      ; Car is required here because find returns a list
      ; containing a single pair, which contains name and
      ; index of the found register
      (list-ref (car (find
        (lambda (v)
          (equal? (list-ref v 0) reg-name)
        )
        values)) 1)
    )
  )
)

; Add llvm::GlobalVariable* to corresponding register table for an
; easier runtime lookup
(define (-gen-store-reg-table gv-name hw) 
  #f
)

; Coroutine of -gen-new-global to generate the llvm::Type* of the global 
; variable to be allocated

(define (-gen-reg-type hw)
	(logit 3 "\tGenerating GlobalVariable Type\n")
	(let ((class (mode:class (hw-mode hw)))
		(ty "Int32")
		(size (mode:bits (hw-mode hw))))
		(cond 
			((mode-class-integral? class) (set! ty (string-append "Int" (number->string size))))
			((mode-class-float? class) (set! ty "Float"))
			(else (set! ty "Int32"))
		)
		(string-append "llvm::Type::get" ty "Ty(llvm::getGlobalContext())")
	)
)

; Coroutine of -gen-new-global to generate the llvm::Constant* of the global
; variable to be allocated

(define (-gen-reg-initializer hw)
  ; Prefer get(IntegerType..., uint64)
	(logit 3 "\tGenerating GlobalVariable initializer\n")
	(let ((class (mode:class (hw-mode hw)))
		(size (mode:bits (hw-mode hw))))
		(cond
			((mode-class-signed? class) 
				(string-append "llvm::ConstantInt::get(llvm::getGlobalContext(), "
					"llvm::APInt(" (number->string size) ", 0, true))")
			)
			((mode-class-unsigned? class)
				(string-append "llvm::ConstantInt::get(llvm::getGlobalContext(), "
					"llvm::APInt(" (number->string size) ", 0, false))")
			)
			((mode-class-float? class) 
				(string-append "llvm::ConstantFP::get(llvm::getGlobalContext(), "
									"llvm::APFloat(0.0))")
			)
		)
	)
)

; Subroutine of -gen-global-vars to generate the allocation of new global var
; E.g.:
; new llvm::GlobalVariable(Module, 
;                          llvm::Type::getInt32Ty(llvm::getGlobalContext()),
;                          false,
;                          llvm::GlobalValue::LinkageTypes::ExternalLinkage,
;                          llvm::ConstantInt::get(llvm::getGlobalContext(),
;                                                 llvm::APInt(32, 0, true)),
;                          "r0");

(define (-gen-new-global hw name)
	(logit 3 "Generating \"new llvm::GlobalVariable\" statement for " name "\n")
	(string-append "auto *" 
				(if
					(string? name)
					(string-downcase name)
					(string-downcase (symbol->string name)) 
				) 
				" = "
        "new llvm::GlobalVariable(M,\n"
				(-gen-reg-type hw) ",\n"; Type
				"false,\n" ; isConstant
				"llvm::GlobalValue::LinkageTypes::ExternalLinkage,\n" ; Linkage
				(-gen-reg-initializer hw) ",\n" ; Initializer
				"\"" 
				(if
					(string? name)
					(string-downcase name)
					(string-downcase (symbol->string name)) 
				)
				"\""; Name
				");\n"
	)
)

; Subroutine of -gen-global-vars to generate a set of allocations of new
; global variables for hardware elements whose mode is <array> (like general
; purpose registers). We need to cycle over the number of elements
; and allocate a single global variable for each of them.

(define (-gen-array-vars hw)
	(logit 3 "Generating new GlobalVariable statements for register " 
    (obj:name hw) " in array type\n")
	(let ((i 0)
		(str "") ; Final set of "new llvm::GlobalVariable" statements
		(reg-name "") ; Iteration register name
		(history '()) ; List of already allocated registers' indices
		(values (kw-values (hw-indices hw)))) ; list of <reg-name, index> pairs
			(while (< i (length values)) ; Cycle over the number of declared registers
				(logit 4 "history: " history "\n")
				(if (hw-indices hw) ; Check if we have a list of values (??? Probabily already checked)
					(set! reg-name 
						(string-append
							(sanitize-elm-name (hw-sem-name hw))
							"_" 
							(if (string? (list-ref (list-ref values i) 0))
								(list-ref (list-ref values i) 0)
								(symbol->string (list-ref (list-ref values i) 0))
							)
						)
					) ; Set i-th register name
					(set! reg-name 'pc) ; Temporary value. Must check if it's really a PC
				)
				(logit 4 "Checking index: " (list-ref (list-ref values i) 1) "\n")

				; In many .cpu hardware descriptions the same register (identified by
				; an decimal index) is named multiple times (e.g. it has some special
				; semantic meaning). Though, we need to allocate it only once, so we keep
				; an history of already allocated register indexes for the current set of
				; registers and we check every time if the i-th index has already been 
				; allocated.
				(if (not (member (list-ref (list-ref values i) 1) history))
					(begin
						; Add it to history
						(set! history (append history (list (list-ref (list-ref values i) 1))))
						; Append to the return str the "new llvm::GlobalVariable" statement
						(set! str (string-append str (-gen-new-global hw reg-name)))
					)
				)
				(set! i (+ i 1))
			)
			str ; Return built register allocation
	)
)

; Subroutine of registers.h to generate the list of hardware elements
; of one isa

(define (-gen-global-vars hw-list)
	(if (null? hw-list)
		"" ; If empty
		(string-list-map 
			(lambda (hw)
				(-log-hw-info hw)
				(string-list
					(if (> (hw-num-elms hw) 1) ; Test if single or array
						(-gen-array-vars hw) ; Array of registers
						(-gen-new-global hw 
              (string->symbol (sanitize-elm-name (hw-sem-name hw)))) ; Single register declaration
          ) 
				)
			)
			(find hw-need-storage? hw-list))
	)
)

; Generate register creation

(define (-gen-registers-creation)
	(string-list
		"// Test generating some register information\n\n"
    ; Add using namespace and remove llvm:: 
    ; Try to afctorize type variable
		"void createRegisters(llvm::Module &M) {"
		; Let's restrict ourselves only to single ISA architectures
		(-gen-global-vars 
			(find (lambda (hw)
				(or (not (with-multiple-isa?))
						(>= (count-common
						    (current-keep-isa-name-list)
						    (bitset-attr->list (obj-attr-value hw 'ISA)))
								1)))
			(current-hw-list))
		)
		"}"
	)
)

; Generate registers.h

(define (registers.h)
	(logit 1 "Generating register creation\n")
	(logit 2 "Current Arch Name: " (current-arch-name) "\n")

  (ir-gen-analyze-insns!)

	(string-write
		(-gen-reg-includes)
		(-gen-registers-creation)
	)
)
