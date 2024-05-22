.section .data
    msg:
        .asciz "Hello World"

.section .text
    .global Hello

Hello:
    lea msg(%rip), %rcx
    call printf
    
    ret
