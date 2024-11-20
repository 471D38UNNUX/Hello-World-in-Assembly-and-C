format ms64 coff

public main

extrn exit
extrn Hello

section	'.data' data readable writable
	msg	db "Hello, World!", 0

section '.text' code readable executable
main:
	sub		spl, 40

    lea		rcx, [msg]
	call	Hello

	xor     ecx, ecx
    call    exit
