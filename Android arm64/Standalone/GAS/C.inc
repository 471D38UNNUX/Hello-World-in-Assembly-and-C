.section .data
msg:
    .asciz "Hello World"
    
.section .text
    .global Hello

Hello:
    stp x29, x30, [sp, - 16]!
    mov x29, sp
    
    adr x0, msg
    bl printf
    
    ldp x29, x30, [sp], 16

    ret
