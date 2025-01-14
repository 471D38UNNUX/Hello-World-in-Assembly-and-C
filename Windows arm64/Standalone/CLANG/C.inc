.section    .data
msg:
    .asciz "Hello, World!\n"

.section    .text
Hello:
    str     lr, [sp, -16]!
    
    adrp    x0, msg
    add 	x0, x0, : lo12 : msg
    bl      printf
    
    ldr     lr, [sp], 16

    ret

