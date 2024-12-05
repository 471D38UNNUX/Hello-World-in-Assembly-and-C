	extern ExitProcess
    extern Hello

	export mainCRTStartup	; change into main if linking with clang

msg	dcb "Hello, World!"
len equ :len: "Hello, World!"

	area .text, code
mainCRTStartup	proc
    str		lr, [sp, - 16]!

    adrp	x0, msg
    add 	x0, x0, msg
	ldr		w1, = len
	bl		Hello

	mov		w0, wzr
	bl		ExitProcess
	endp
	end