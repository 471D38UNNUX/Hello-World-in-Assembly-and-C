extern exit, Hello

global main

section .note.GNU-stack

section .data
    msg db 'Hello, World!', 10, 0

section .text
main:
    lea 	rdi, [rel msg]
	call    Hello

    xor 	dil, dil
    call    [rel exit wrt ..got]
