; TODO: File description 

; The <cpp-expr> object.
; This is a fully translated expression (i.e. C code).

(define <cpp-expr>
  (class-make '<cpp-expr> nil
        '(
    ; The mode of C-CODE.
    mode
    ; The translated C code.
    cpp-code
    ; The source expression, for debugging.
    expr
    ; Attributes of the expression.
    atlist
    ; List of temporaries required to compute the expression.
    ; ??? wip.  These would be combined as the expression is
    ; built up.  Then in sets and other statements, the temporaries
    ; would be declared.
    ;(tmps . nil)
    )
        nil)
)

(method-make!
 <cpp-expr> 'make!
 (lambda (self mode cpp-code atlist)
   ; FIXME: Extend COS to allow specifying member predicates.
   (assert (mode? mode))
   (assert (string? cpp-code))
   ;(assert (atlist? atlist)) ; FIXME: What should this be?
   (elm-set! self 'mode mode)
   (elm-set! self 'cpp-code cpp-code)
   (elm-set! self 'atlist atlist)
   self)
)

; Accessor fns

(define cx:mode (elm-make-getter <cpp-expr> 'mode))
(define cx:cpp-code (elm-make-getter <cpp-expr> 'cpp-code))
(define cx:expr (elm-make-getter <cpp-expr> 'expr))
(define cx:atlist (elm-make-getter <cpp-expr> 'atlist))

; Any object with attributes requires the get-atlist method.

(method-make! <cpp-expr> 'get-atlist (lambda (self) (elm-get self 'atlist)))

; Respond to 'get-mode messages.

(method-make! <cpp-expr> 'get-mode (lambda (self) (elm-get self 'mode)))

; Respond to 'get-name messages for rtx-dump.

(method-make!
 <cpp-expr> 'get-name
 (lambda (self)
   (string-append "(" (obj:str-name (elm-get self 'mode)) ") "
      (cx:cpp self)))
)

; Return C code to perform an assignment.
; NEWVAL is a <cpp-expr> object of the value to be assigned to SELF.

(method-make! <cpp-expr> 'gen-set-quiet
        (lambda (self estate mode indx selector newval)
    (string-append "  " (cx:cpp self) " = " (cx:cpp newval) ";\n"))
)

(method-make! <cpp-expr> 'gen-set-trace
        (lambda (self estate mode indx selector newval)
    (string-append "  " (cx:cpp self) " = " (cx:cpp newval) ";\n"))
)

; Return the C code of CX.
; ??? This used to handle lazy evaluation of the expression.
; Maybe it will again, so it's left in, as a cover fn to cx:c-code.

(define (cx:cpp cx)
  (cx:cpp-code cx)
)

; Main routine to create a <cpp-expr> node object.
; MODE is either the mode's symbol (e.g. 'QI) or a mode object.
; CODE is a string of C code.

(define (cx:make mode code)
  (make <cpp-expr> (mode:lookup mode) code nil)
)

; Make copy of CX in new mode MODE.
; MODE must be a <mode> object.

(define (cx-new-mode mode cx)
  (make <cpp-expr> mode (cx:cpp cx) (cx:atlist cx))
)

; Same as cx:make except with attributes.

(define (cx:make-with-atlist mode code atlist)
  (make <cpp-expr> (mode:lookup mode) code atlist)
)

; Return a boolean indicated if X is a <cpp-expr> object.

(define (cpp-expr? x) (class-instance? <cpp-expr> x))

; RTX environment support.

(method-make!
 <rtx-temp> 'cxmake-get
 (lambda (self estate mode indx selector)
   (cx:make mode (rtx-temp-value self)))
)

(method-make!
 <rtx-temp> 'gen-set-quiet
 (lambda (self estate mode indx selector src)
   (string-append "  " (rtx-temp-value self) " = " (cx:cpp src) ";\n"))
)

(method-make!
 <rtx-temp> 'gen-set-trace
 (lambda (self estate mode indx selector src)
   (string-append "  " (rtx-temp-value self) " = " (cx:cpp src) ";\n"))
)

(define (gen-temp-defs estate env)
  (string-map (lambda (temp)
    (let ((temp-obj (cdr temp)))
      (string-append "  " (gen-mode-cpp-type (rtx-temp-mode temp-obj))
         " " (rtx-temp-value temp-obj) ";\n")))
        env)
)

; Top level routines to handle rtl->cpp translation.

; Subclass of <eval-state> to record additional things needed for rtl->c.

(define <rtl-cpp-eval-state>
  (class-make '<rtl-cpp-eval-state> '(<eval-state>)
        '(
    ; specifies the semantic type of code to generate.
    ; "cpp" -> emits cpp code that evaluates the expression
    ; "llvm" -> emits cpp code that performs LLVM IR code 
    ;           generation semantically equivalent to the expression
    (semantic-type . "cpp")

    ; ===== LEFT TEMPORARLY. WE'LL SEE IF WE NEED IT =====
    ; #f -> reference ifield values using FLD macro.
    ; #t -> use C variables.
    ; ??? This is only needed to get correct ifield references
    ; in opcodes, decoder, and semantics.  Maybe a better way to
    ; go would be to specify the caller's name so there'd be just
    ; one of these, rather than an increasing number.  However,
    ; for now either way is the same.
    ; An alternative is to specify a callback to try first.
    (ifield-var? . #f)
    )
        nil)
)

; FIXME: involves upcasting.
(define-getters <rtl-cpp-eval-state> estate
  (semantic-type ifield-var?)
)

; Return booleans indicating if semantic type is "cpp" or "llvm"

(define (estate-semantic-type-cpp? estate)
  (string=? (estate-semantic-type estate) "cpp")
)
(define (estate-semantic-type-llvm? estate)
  (string=? (estate-semantic-type estate) "llvm")
)

(method-make!
 <rtl-cpp-eval-state> 'vmake!
 (lambda (self args)
   ; Initialize parent class first.
   (let loop ((args (send-next self 'vmake! args)) (unrecognized nil))
     (if (null? args)
   (reverse! unrecognized) ; ??? Could invoke method to initialize here.
   (begin
     (case (car args)
       ((#:semantic-type)
        (elm-set! self 'semantic-type (cadr args)))
       ((#:ifield-var?)
        (elm-set! self 'ifield-var? (cadr args)))
       (else
        ; Build in reverse order, as we reverse it back when we're done.
        (set! unrecognized
        (cons (cadr args) (cons (car args) unrecognized)))))
     (loop (cddr args) unrecognized)))))
)

; Build an estate for use in generating CPP.
; CONTEXT is a <context> object or #f if there is none.
; OWNER is the owner of the expression or #f if there is none.
; EXTRA-VARS-ALIST is an association list of (symbol <mode> value)
;   elements to be used during value lookup.
; OVERRIDES is a #:keyword/value list of parameters to apply last.

(define (estate-make-for-rtl-cpp context owner extra-vars-alist
          semantic-type overrides)
  (let ((generator (cond 
          ((estate-semantic-type-cpp? semantic-type) 'rtl-cpp-generator)
          ((estate-semantic-type-llvm? semantic-type) 'rtl-llvm-generator)
          (else 'rtl-cpp-generator))))
    (apply vmake
      (append!
        (list
         <rtl-c-eval-state>
         #:context context
         #:owner owner
         #:expr-fn (lambda (rtx-obj expr mode estate)
               (generator rtx-obj))
         #:env (rtx-env-init-stack1 extra-vars-alist)
        )
      overrides)
    )
  )

)

; ============ SEMANTIC-TYPE: CPP ============

(define (estate-make-for-normal-rtl-cpp extra-vars-alist overrides)
  (estate-make-for-rtl-c
   #f ; FIXME: context
   #f ; FIXME: owner
   extra-vars-alist
   "cpp" ; Semantic-type
   overrides)
)

; Translate RTL expression EXPR to CPP.
; ESTATE is the current rtx evaluation state.

(define (rtl-cpp-with-estate estate mode expr)
  (cx:cpp (rtl-cpp-get estate mode (rtx-eval-with-estate expr mode estate)))
)

; Translate parsed RTL expression X to a string of CPP code.
; X must have already been fed through rtx-parse/rtx-compile.
; MODE is the desired mode of the value or DFLT for "natural mode".
; EXTRA-VARS-ALIST is an association list of extra (symbol <mode> value)
; elements to be used during value lookup.
; OVERRIDES is a #:keyword/value list of arguments to build the eval state
; with.

(define (rtl-cpp-parsed mode x extra-vars-alist . overrides)
  (let ((estate (estate-make-for-normal-rtl-cpp extra-vars-alist overrides)))
    (rtl-cpp-with-estate estate mode x))
)

; Same as rtl-cpp-parsed but X is unparsed.

(define (rtl-cpp mode x extra-vars-alist . overrides)
  ; ??? rtx-compile could return a closure, then we wouldn't have to
  ; pass EXTRA-VARS-ALIST to two routines here.
  (let ((estate (estate-make-for-normal-rtl-cpp extra-vars-alist overrides)))
    (rtl-cpp-with-estate estate mode (rtx-compile #f x extra-vars-alist)))
)

; Same as rtl-cpp-with-estate except return a <cpp-expr> object.

(define (rtl-cpp-expr-with-estate estate mode expr)
  (rtl-cpp-get estate mode (rtx-eval-with-estate expr mode estate))
)

; Same as rtl-cpp-parsed except return a <cpp-expr> object.

(define (rtl-cpp-expr-parsed mode x extra-vars-alist . overrides)
  (let ((estate (estate-make-for-normal-rtl-cpp extra-vars-alist overrides)))
    (rtl-cpp-expr-with-estate estate mode x))
)

; Same as rtl-cpp-expr-parsed but X is unparsed.

(define (rtl-cpp-expr mode x extra-vars-alist . overrides)
  ; ??? rtx-compile could return a closure, then we wouldn't have to
  ; pass EXTRA-VARS-ALIST to two routines here.
  (let ((estate (estate-make-for-normal-rtl-cpp extra-vars-alist overrides)))
    (rtl-cpp-expr-with-estate estate mode (rtx-compile #f x extra-vars-alist)))
)

; ============ SEMANTIC-TYPE: LLVM ============
; LLVM IR versions of rtl-cpp routines 

; Build an estate for use in generating LLVM IR.
; EXTRA-VARS-ALIST is an association list of (symbol <mode> value)
; elements to be used during value lookup.
; OVERRIDES is a #:keyword/value list of parameters to apply last.

(define (estate-make-for-normal-rtl-llvm extra-vars-alist overrides)
  (estate-make-for-rtl-cpp
   #f ; FIXME: context
   #f ; FIXME: owner
   extra-vars-alist
   "llvm"
   overrides)
)

; Translate parsed RTL expression X to a string of C++ code emitting LLVM IR
; X must have already been fed through rtx-parse/rtx-compile.
; MODE is the desired mode of the value or DFLT for "natural mode".
; EXTRA-VARS-ALIST is an association list of extra (symbol <mode> value)
; elements to be used during value lookup.
; OVERRIDES is a #:keyword/value list of arguments to build the eval state
; with.
; ??? Maybe EXTRA-VARS-ALIST should be handled this way.

(define (rtl-llvm-parsed mode x extra-vars-alist . overrides)
  (let ((estate (estate-make-for-normal-rtl-llvm extra-vars-alist overrides)))
    (rtl-cpp-with-estate estate mode x))
)

; Same as rtl-llvm-parsed but X is unparsed.

(define (rtl-llvm mode x extra-vars-alist . overrides)
  ; ??? rtx-compile could return a closure, then we wouldn't have to
  ; pass EXTRA-VARS-ALIST to two routines here.
  (let ((estate (estate-make-for-normal-rtl-llvm extra-vars-alist overrides)))
    (rtl-cpp-with-estate estate mode (rtx-compile #f x extra-vars-alist)))
)

; Top level routines for getting/setting values.

; Return a <cpp-expr> node to get the value of SRC in mode MODE.
; ESTATE is the current rtl evaluation state.
; SRC is one of:
; - <cpp-expr> node
; - rtl expression (e.g. '(add WI dr sr))
; - sequence's local variable name
; - sequence's local variable object
; - operand name
; - operand object
; - a string of CPP code
; FIXME: Reduce acceptable values of SRC.
; The result has mode MODE, unless MODE is the "default mode indicator"
; (DFLT) in which case the mode of the result is derived from SRC.
; If SRC is a string, MODE can't be VOID or DFLT.
;
; ??? mode compatibility checks are wip

(define (-rtl-cpp-get estate mode src)
  (let ((mode (mode:lookup mode)))

    (cond ((cpp-expr? src)
      (cond ((or  (mode:eq? 'VOID mode)
                  (mode:eq? 'DFLT mode)
                  (mode:eq? (cx:mode src) mode))
              src)
            ((-rtx-mode-compatible? mode (cx:mode src))
              (cx-new-mode mode src))
            (else
              (error (string-append "incompatible mode for "
                        "(" (obj:name (cx:mode src)) " vs " (obj:name mode) ") in "
                        "\"" (cx:c src) "\""
                        ": ")
                      (obj:name mode)
              )
            )
      ))

      ; The recursive call to -rtl-cpp-get is in case the result of rtx-eval
      ; is a hardware object, rtx-func object, or another rtl expression.
      ((rtx? src)
        (let ((evald-src (rtx-eval-with-estate src mode estate)))
          ; There must have been some change, otherwise we'll loop forever.
          (assert (not (eq? src evald-src)))
          (-rtl-cpp-get estate mode evald-src))
      )

      ((or (and (symbol? src) (current-op-lookup src))
           (operand? src))
        (begin
          (if (symbol? src)
            (set! src (current-op-lookup src))
          )
          (cond 
            ((mode:eq? 'DFLT mode)
            ; FIXME: If we fetch the mode here, operands can assume
            ; they never get called with "default mode".
              (send src 'cxmake-get estate mode #f #f)
            )
            ((-rtx-mode-compatible? mode (op:mode src))
              (let ((mode (-rtx-lazy-sem-mode mode)))
                (send src 'cxmake-get estate mode #f #f))
            )
            (else
              (error (string-append "operand " (obj:str-name src)
                  " referenced in incompatible mode: ")
                (obj:name mode))
            )
          )
        )
      )

      ((or (and (symbol? src) (rtx-temp-lookup (estate-env estate) src))
           (rtx-temp? src))
        (begin
          (if (symbol? src)
            (set! src (rtx-temp-lookup (estate-env estate) src))
          )
          (cond 
            ((mode:eq? 'DFLT mode)
              (send src 'cxmake-get estate (rtx-temp-mode src) #f #f)
            )
            ((-rtx-mode-compatible? mode (rtx-temp-mode src))
              (let ((mode (-rtx-lazy-sem-mode mode)))
                (send src 'cxmake-get estate mode #f #f))
            )
            (else 
              (error (string-append "sequence temp " (rtx-temp-name src)
                       " referenced in incompatible mode: ")
                (obj:name mode))
            )
          )
        )
      )

      ((integer? src)
        ; Default mode of string argument is INT.
        (if (or (mode:eq? 'DFLT mode) (mode:eq? 'VOID mode))
          (cx:make INT (number->string src))
          (cx:make mode (number->string src)))
      )

      ((string? src)
        ; Default mode of string argument is INT.
        (if (or (mode:eq? 'DFLT mode) (mode:eq? 'VOID mode))
          (cx:make INT src)
          (cx:make mode src))
      )

      (else (error "-rtl-cpp-get: invalid argument:" src))))
)

(define (rtl-cpp-get estate mode src)
  (logit 4 (spaces (estate-depth estate))
   "(rtl-cpp-get " (mode-real-name mode) " " (rtx-strdump src) ")\n")
  (let ((result (-rtl-cpp-get estate mode src)))
    (logit 4 (spaces (estate-depth estate))
     "(rtl-cpp-get " (mode-real-name mode) " " (rtx-strdump src) ") => "
     (cx:cpp result) "\n")
    result)
)

; Return a <cpp-expr> object to set the value of DEST to SRC.
; ESTATE is the current rtl evaluation state.
; DEST is one of:
; - <cpp-expr> node
; - rtl expression (e.g. '(mem QI dr))
; SRC is a <cpp-expr> object.
; The mode of the result is always VOID (void).

(define (rtl-c-set-quiet estate mode dest src)
  ;(display (list 'rtl-cpp-set-quiet mode dest src)) (newline)
  (let ((xdest 
          (cond 
            ((cpp-expr? dest) dest)
            ((rtx? dest)
              (rtx-eval-with-estate dest mode estate))
            (else
              (error "rtl-c-set-quiet: invalid dest:" dest))
          )
        ))
    (if (not (object? xdest))
      (error "rtl-c-set-quiet: invalid dest:" dest))
    (let ((mode (if (mode:eq? 'DFLT mode)
          (-rtx-obj-mode xdest)
          (-rtx-lazy-sem-mode mode))))
      (assert (mode? mode))
      (cx:make VOID 
        (send xdest 'gen-set-quiet estate mode #f #f
          (rtl-c-get estate mode src))
      )
    )
  )
)

; Same as rtl-cpp-set-quiet except also print TRACE_RESULT message.
; ??? One possible change is to defer the (rtl-cpp-get src) call to dest's
; set handler.  Such sources would be marked accordingly and rtl-cpp-get
; would recognize them.  This would allow, for example, passing the address
; of the result to the computation.

(define (rtl-c-set-trace estate mode dest src)
  ;(display (list 'rtl-cpp-set-quiet mode dest src)) (newline)
  (let ((xdest 
          (cond 
            ((cpp-expr? dest) dest)
            ((rtx? dest)
              (rtx-eval-with-estate dest mode estate))
            (else
              (error "rtl-c-set-trace: invalid dest:" dest))
          )
        ))
    (if (not (object? xdest))
      (error "rtl-c-set-trace: invalid dest:" dest))
    (let ((mode (if (mode:eq? 'DFLT mode)
          (-rtx-obj-mode xdest)
          (-rtx-lazy-sem-mode mode))))
      (assert (mode? mode))
      (cx:make VOID 
        (send xdest 'gen-set-trace estate mode #f #f
          (rtl-c-get estate mode src))
      )
    )
  )
)

; ============ SEMANTIC-TYPE: CPP ============
; Emit CPP code for each rtx function.

; Table mapping rtx function to CPP generator.

(define -rtl-cpp-gen-table #f)

; Return the CPP generator for <rtx-func> F.

(define (rtl-cpp-generator f)
  (vector-ref -rtl-cpp-gen-table (rtx-num f))
)

; ============ SEMANTIC-TYPE: LLVM ============
; Emit LLVM code for each rtx function.

; Table mapping rtx function to LLVM generator.

(define -rtl-llvm-gen-table #f)

; Return the CPP generator for <rtx-func> F.

(define (rtl-llvm-generator f)
  (vector-ref -rtl-llvm-gen-table (rtx-num f))
)