section .note.GNU-stack
    align 1
    db 0

section .data
    msg db 'Hello World', 0
    len equ $ - message - 1

section .text
    global Hello

Hello:
    mov rax, 1
    mov rdi, 1
    lea rsi, [rel msg]
    lea rdx, len
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
