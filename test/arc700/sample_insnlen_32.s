	.file	"sample_insnlen32.s"
	.section	.text
	.align 4
begin:
	ld r2,[r3,0]
	add r2,r2,1
	sub r2,r2,1
	bcc 128
	st r2,[r3,0]
	Jcc [r3]

