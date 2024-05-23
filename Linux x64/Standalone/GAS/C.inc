.section .note.GNU-stack,"",@progbits

.section .data
    msg:
        .asciz "Hello World"

.section .text
    .global Hello

Hello:
    lea msg, %rdi
    call printf
    
    ret
