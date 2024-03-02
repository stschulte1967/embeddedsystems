@ HelloWorld Program in ARM ASM
@ 
@ Register usage:
@ R0: Function parameter 1
@ R1: Function parameter 2
@ R7: Counter

.thumb_func
.global main

main:
	MOV	R7, #0
	BL	stdio_init_all

loop:
	LDR	R0, =helloworld
	ADD	R7, #1
	MOV	R1, R7
	BL	printf
	B	loop

.data
	.align 	4
helloworld:
	.asciz	"Hello World %d\n"


