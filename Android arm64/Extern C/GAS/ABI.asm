.global main

.section    .data
msg:
    .asciz "Hello, World!"
.equ len, . - msg

.section    .text
main:
    adrp    x0, msg
    add 	x0, x0, : lo12 : msg
    ldr 	w1, = len
	bl      Hello
	
    mov     w8, 93
    mov     w0, wzr
    svc     0
