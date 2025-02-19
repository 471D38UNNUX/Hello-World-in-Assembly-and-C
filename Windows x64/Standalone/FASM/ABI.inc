section	'.data' data readable writable
	msg	db "Hello, World!"
	len	= $ - msg

section '.text' code readable executable
Hello:
	sub		rsp, 40

	mov		ecx, -11
	call	[GetStdHandle]

	mov		ecx, eax
	lea		rdx, [msg]
	mov		r8d, len
	xor		r9d, r9d
	mov		byte [rsp + 32], 0
	call	[WriteConsoleA]
	
	add		rsp, 40

	ret

section	'.idata' import data readable
dd 0, 0, 0, RVA kernel, RVA kernel_table

kernel_table:
	GetStdHandle	dq RVA _GetStdHandle
	WriteConsoleA	dq RVA _WriteConsoleA
	ExitProcess		dq RVA _ExitProcess
					dq 0

kernel	db 'kernel32.dll', 0

_GetStdHandle	dw 0
				db 'GetStdHandle', 0
_WriteConsoleA	dw 0
				db 'WriteConsoleA', 0
_ExitProcess	dw 0
				db 'ExitProcess', 0
