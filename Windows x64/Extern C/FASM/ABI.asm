format ms64 coff

public main

extrn ExitProcess
extrn Hello

section	'.data' data readable writable
	msg	db "Hello, World!"
	len	= $ - msg

section '.text' code readable executable
main:
	sub		spl, 40

    lea		rcx, [msg]
    mov     dl, len
	call	Hello

	xor     ecx, ecx
    call    ExitProcess
