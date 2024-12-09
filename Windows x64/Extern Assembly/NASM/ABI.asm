extern GetStdHandle, WriteConsoleA

global Hello

section .text
Hello:
    sub     rsp, 40

    mov     rbx, rcx
    mov     ebp, edx
    mov     ecx, -11
    call    GetStdHandle

    mov     ecx, eax
    mov     rdx, rbx
    mov     r8d, ebp
    xor     r9d, r9d
    mov     byte 32[rsp], 0
    call    WriteConsoleA

    add     rsp, 40

    ret
