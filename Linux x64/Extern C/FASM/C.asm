format elf64

public main

extrn Hello
extrn exit

section	'.note.GNU-stack'

section '.data' writable
	_exit	dq exit
    msg		db 'Hello, World!', 10, 0

section	'.code' executable
main:
    lea 	rdi, [msg]
	call 	Hello

    xor 	dil, dil
    call	[_exit]
