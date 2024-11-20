format ms64 coff

public Hello

extrn GetStdHandle
extrn WriteConsoleA

section '.text' code readable executable
Hello:
	sub		spl, 40

    mov     rbx, rcx
    mov     ebp, edx
	mov		ecx, -11
	call	GetStdHandle

	mov		ecx, eax
	mov		rdx, rbx
	mov		r8d, ebp
	xor		r9d, r9d
	mov		byte [rsp + 32], 0
	call	WriteConsoleA
	
	add		spl, 40

	ret
