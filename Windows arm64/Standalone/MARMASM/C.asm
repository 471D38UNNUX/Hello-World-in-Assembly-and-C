	get	C.inc

	export mainCRTStartup	; change into main if linking with clang

mainCRTStartup	proc
    str		lr, [sp, -16]!

	bl		Hello

	mov		w0, wzr
	bl		exit
	endp
	end