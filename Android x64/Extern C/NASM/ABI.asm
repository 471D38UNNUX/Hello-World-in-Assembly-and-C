extern Hello

global main

section .note.GNU-stack

section .data
    msg db 'Hello, World!', 0
    len equ $ - msg

section .text
main:
    lea 	rdi, [rel msg]
    mov     sil, len
	call    Hello

    mov		al, 60
    xor 	dil, dil
    syscall
