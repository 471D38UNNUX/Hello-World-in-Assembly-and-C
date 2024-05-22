extern printf

section .data
    msg db 'Hello World', 0

section .text
    global Hello

Hello:
    lea rcx, msg
    call printf

    ret
