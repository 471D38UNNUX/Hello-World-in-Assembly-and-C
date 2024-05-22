section '.data' data readable writable
	msg db "Hello World", 0

section '.text' code readable executable
Hello:
	lea rcx, [msg]
	call [printf]

section '.idata' import data readable
dd 0, 0, 0, RVA msvcrt, RVA msvcrt_table
dd 0, 0, 0, 0, 0

msvcrt_table:
	printf dq RVA _printf
	dq 0

msvcrt db 'msvcrt.dll', 0

_printf dw 0
db 'printf', 0
