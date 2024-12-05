	extern exit
    extern Hello

	export mainCRTStartup	; change into main if linking with clang

msg	dcb "Hello, World!\n", 0

	area .text, code
mainCRTStartup	proc
    str		lr, [sp, - 16]!

    adrp	x0, msg
    add 	x0, x0, msg
	bl		Hello

	mov		w0, wzr
	bl		exit
	endp
	end