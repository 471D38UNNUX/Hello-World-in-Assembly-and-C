extern printf

section .note.GNU-stack
    align 1
    db 0

section .data
    msg db 'Hello World', 0

section .text
    global Hello

Hello:
    lea rdi, msg
    call printf

    ret
