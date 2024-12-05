	extern GetStdHandle
	extern WriteConsoleA
	extern ExitProcess

msg	dcb "Hello, World!"
len equ :len: "Hello, World!"

	area .text, code
Hello	proc
    str     lr, [sp, - 16]!

	mov		w0, -11
	bl		GetStdHandle

    adrp	x1, msg
    add 	x1, x1, msg
	ldr		w2, = len
	mov		w3, wzr
	mov		w4, wzr
	bl		WriteConsoleA

	ldr     lr, [sp], 16

	ret
	endp
	end