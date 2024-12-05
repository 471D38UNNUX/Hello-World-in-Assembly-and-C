.global main

.section    .data
msg:
    .asciz "Hello, World!\n"

.section    .text
main:
    adrp    x0, msg
    add 	x0, x0, : lo12 : msg
	bl      Hello
	
    mov     w0, wzr
    bl      exit
