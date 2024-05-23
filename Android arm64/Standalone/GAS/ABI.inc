.section .data
msg:
    .asciz "Hello World"
    len = . - msg - 1

.section .text
    .global Hello

Hello:
    mov x0, 1
    adr x1, msg
    mov x2, len
    mov x8, 64
    svc 0

    eor x0, x0, x0
    mov x8, 93
    svc 0
