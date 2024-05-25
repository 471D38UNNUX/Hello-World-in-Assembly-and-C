.section .data
msg:
    .asciz "Hello World"

.section .text
    .global Hello

Hello:
    adr x0, msg
    bl printf

    ret
