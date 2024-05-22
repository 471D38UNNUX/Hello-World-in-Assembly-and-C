.section .data
    msg:
        .asciz "Hello World"
        len = . - msg - 1

.section .text
    .global Hello
Hello:
    sub $40, %rsp

    mov $-11, %rcx
    call GetStdHandle

    mov %rax, %rcx
    lea msg(%rip), %rdx
    lea len, %r8
    xor %r9, %r9
    movq $0, 32(%rsp)
    call WriteConsoleA

    xor %rcx, %rcx
    call ExitProcess

    add $40, %rsp
