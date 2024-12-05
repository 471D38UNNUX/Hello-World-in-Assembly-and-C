	extern GetStdHandle
	extern WriteConsoleA

	export Hello

	area .text, code
Hello	proc
    str     lr, [sp, - 16]!
	
	mov		x9, x0
    mov 	w10, w1
	mov		w0, -11
	bl		GetStdHandle

    mov		x1, x9
	mov 	w2, w10
	mov     w3, wzr
	mov     w4, wzr
	bl		WriteConsoleA

    ldr     lr, [sp], 16

	ret
	endp
	end