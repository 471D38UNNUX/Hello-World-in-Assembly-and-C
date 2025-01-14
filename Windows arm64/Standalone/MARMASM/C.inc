	extern printf
	extern exit

msg	dcb "Hello, World!\n", 0

	area .text, code
Hello	proc
    str     lr, [sp, -16]!

    adrp	x0, msg
    add 	x0, x0, msg
	bl		printf

	ldr     lr, [sp], 16

	ret
	endp
	end