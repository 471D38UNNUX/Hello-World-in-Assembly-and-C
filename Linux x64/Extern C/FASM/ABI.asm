format elf64

public main

extrn Hello

section	'.note.GNU-stack'

section '.data' writable
    msg db 'Hello, World!', 0
    len = $ - msg

section	'.code' executable
main:
    lea 	rdi, [msg]
    mov 	sil, len
	call 	Hello

    mov		al, 60
    xor 	dil, dil
    syscall
