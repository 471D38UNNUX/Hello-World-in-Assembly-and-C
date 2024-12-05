	extern printf

	export Hello

	area .text, code
Hello	proc
    str	    lr, [sp, - 16]!
	
	bl	    printf

    ldr	    lr, [sp], 16

	ret
	endp
	end