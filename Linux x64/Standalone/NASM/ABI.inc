section .note.GNU-stack
    align 1
    db 0

section .data
    message db 'Hello World', 0
    len equ $ - message - 1

section .text
    global World

World:
    mov rax, 1
    mov rdi, 1
    lea rsi, message
    lea rdx, len
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
