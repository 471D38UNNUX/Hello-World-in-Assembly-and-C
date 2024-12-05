section .note.GNU-stack

section .data
    msg db 'Hello, World!', 0
    len equ $ - msg

section .text
Hello:
    mov     eax, 1
    mov     dil, 1
    lea     rsi, [rel msg]
    mov     edx, len
    syscall

    ret
