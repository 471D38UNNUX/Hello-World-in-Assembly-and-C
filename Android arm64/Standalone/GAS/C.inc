.section .data
msg:
    .asciz "Hello World"

.section .text
    .global Hello

Hello:
    adr x0, msg
    bl printf

    mov x0, 0
    bl exit
