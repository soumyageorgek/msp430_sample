/*This program finds length of astring using MSP430*/
	.file	"main.c"
	.arch msp430x2013

	.text
	.p2align 1,0
.global	main
	.type	main,@function
/***********************
 * Function `main' 
 ***********************/
main:
	mov	#__stack, r1 
	mov	r1, r4 
	/* prologue ends here (frame size = 0) */
.L__FrameSize_main=0x0
.L__FrameOffset_main=0x2
	mov #512,r5
	mov #0,r6
	mov #0,r8
	mov #0,r7
     L1:mov.b @r5,r8
	cmp #0,r8
	jeq L2
	inc r6
	inc r5
	jmp L1
     L2:mov #1,r7
	/* epilogue: frame size = 0 */
	br	#__stop_progExec__
.Lfe1:
	.size	main,.Lfe1-main
;; End of function 


/*********************************************************************
 * File main.c: code size: 7 words (0x7)
 * incl. words in prologues: 3, epilogues: 4
 *********************************************************************/
