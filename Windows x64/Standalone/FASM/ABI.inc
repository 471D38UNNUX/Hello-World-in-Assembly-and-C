section '.data' data readable writable
	msg db "Hello World", 0
	len = $ - msg

section '.text' code readable executable
Hello:
	sub rsp, 40
	mov rcx, -11
	call [GetStdHandle]

	mov rcx, rax
	lea rdx, [msg]
	lea r8, [len]
	xor r9, r9
	mov qword [rsp + 32], 0
	call [WriteConsoleA]
	
	xor rcx, rcx
	call [ExitProcess]
	add rsp, 40

section '.idata' import data readable
dd 0, 0, 0, RVA kernel, RVA kernel_table
dd 0, 0, 0, 0, 0

kernel_table:
	GetStdHandle dq RVA _GetStdHandle
	WriteConsoleA dq RVA _WriteConsoleA
	ExitProcess dq RVA _ExitProcess
	dq 0

kernel db 'kernel32.dll', 0

_GetStdHandle dw 0
db 'GetStdHandle', 0
_WriteConsoleA dw 0
db 'WriteConsoleA', 0
_ExitProcess dw 0
db 'ExitProcess', 0
