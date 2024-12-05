extern ExitProcess, Hello

global main

section .data
    msg db 'Hello, World!'
    len equ $ - msg

section .text
main:
    sub     spl, 40

    lea     rcx, [rel msg]
    mov     dl, len
    call    Hello

    xor     ecx, ecx
    call    ExitProcess
