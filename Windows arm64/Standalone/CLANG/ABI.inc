.section	.data
msg:
	.ascii "Hello, World!"
.equ len, . - msg

.section	.text
Hello:
    str     lr, [sp, -16]!
	
	mov		w0, -11
	bl		GetStdHandle

    adrp	x1, msg
    add 	x1, x1, : lo12 : msg
	ldr 	w2, = len
	mov     w3, wzr
	mov     w4, wzr
	bl		WriteConsoleA

    ldr     lr, [sp], 16

	ret
