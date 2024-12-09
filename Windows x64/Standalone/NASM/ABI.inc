extern GetStdHandle, WriteConsoleA, ExitProcess

section .data
    msg db 'Hello, World!'
    len equ $ - msg

section .text
Hello:
    sub     rsp, 40

    mov     ecx, -11
    call    GetStdHandle

    mov     ecx, eax
    lea     rdx, [rel msg]
    mov     r8d, len
    xor     r9d, r9d
    mov     byte 32[rsp], 0
    call    WriteConsoleA

    add     rsp, 40

    ret
