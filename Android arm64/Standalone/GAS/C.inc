.section .data
msg:
    .asciz "Hello World"
    len = . - msg - 1

.section .text
    .global Hello

Hello:
    adr x0, msg
    bl printf

    ret
