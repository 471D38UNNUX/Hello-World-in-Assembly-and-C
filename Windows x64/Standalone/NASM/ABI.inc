extern GetStdHandle
extern ExitProcess
extern WriteConsoleA

section .data
    msg db 'Hello World', 0
    len equ $ - msg - 1

section .text
    global Hello

Hello:
    sub rsp, 40

    mov rcx, -11
    call GetStdHandle

    mov rcx, rax
    lea rdx, msg
    lea r8, len
    xor r9, r9
    mov qword 32[rsp], 0
    call WriteConsoleA

    add rsp, 40

    xor rcx, rcx
    call ExitProcess
