.global main

.section	.data
msg:
	.ascii "Hello, World!"
.equ len, . - msg

.section	.text	
main:
    str		lr, [sp, -16]!

    adrp	x0, msg
    add 	x0, x0, : lo12 : msg
    ldr 	w1, = len
	bl		Hello

	mov		w0, wzr
	bl		ExitProcess
