section	'.data' data readable writable
	msg	db "Hello, World!", 10, 0

section	'.text' code readable executable
Hello:
	sub		spl, 40

	lea		rcx, [msg]
	call	[printf]
	
	add		spl, 40

	ret

section	'.idata' import data readable
dd	0, 0, 0, RVA msvcrt, RVA msvcrt_table

msvcrt_table:
	printf	dq RVA _printf
	exit	dq RVA _exit
			dq 0

msvcrt	db 'msvcrt.dll', 0

_printf	dw 0
		db 'printf', 0
_exit	dw 0
		db 'exit', 0
