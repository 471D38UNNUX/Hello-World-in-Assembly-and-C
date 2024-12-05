extern exit, Hello

global main

section .data
    msg db 'Hello, World!', 10, 0

section .text
main:
    sub     spl, 40

    lea     rcx, [rel msg]
    call    Hello

    xor     ecx, ecx
    call    exit
