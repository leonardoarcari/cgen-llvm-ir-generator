; LLVM IR generator entry point.
; This CGEN component builds a generator of LLVM IR code for the input 
; architecture description (.cpu file)

; Load the various support routines.
(define (load-files srcdir)
  (load (string-append srcdir "/read.scm"))
  (load (string-append srcdir "/ir-gen.scm"))
  (load (string-append srcdir "/ir-gen-registers.scm"))
)

; 
(define ir-gen-args
	(list 
		(list "-R" "file" "generate registers.h in <file>"
		#f
		(lambda (arg) (file-write arg registers.h)))
	)
)

; Kept global so it's available to the other .scm files.
(define srcdir ".")

; Scan argv for -s srcdir.
; We can't process any other args until we find the cgen source dir.
; The result is srcdir.
; We assume "-s" isn't the argument to another option.  Unwise, yes.
; Alternatives are to require it to be the first argument or at least preceed
; any option with a "-s" argument, or to put knowledge of the common argument
; set and common argument parsing code in every top level file.

(define (find-srcdir argv)
  (let loop ((argv argv))
    (if (null? argv)
	(error "`-s srcdir' not present, can't load cgen"))
    (if (string=? "-s" (car argv))
	(begin
	  (if (null? (cdr argv))
	      (error "missing srcdir arg to `-s'"))
	  (cadr argv))
	(loop (cdr argv))))
)

; Main routine, parses options and calls generators
(define (cgen-ir-gen argv)
	(let ()

		; Find and set srcdir, then load all Scheme ode.
		; Drop the first argument, it is the script name (i.e. argv[0])
		(set! srcdir (find-srcdir (cdr argv)))
		(set! %load-path (cons srcdir %load-path))
		(load-files srcdir)

		(display "Argv: ")
		(display-argv argv)

		(cgen #:argv argv
					#:app-name "ir-gen"
					#:arg-spec ir-gen-args
					#:init ir-gen-init!
					#:finish ir-gen-finish!
					#:analyze ir-gen-analyze!)
	)
)

; Run main routine
(cgen-ir-gen (program-arguments))