.section    .data
msg:
    .asciz "Hello, World!\n"

.section    .text
Hello:
    stp     fp, lr, [sp, - 16]!
    mov     fp, sp
    
    adrp    x0, msg
    add 	x0, x0, :lo12:msg
    bl      printf
    
    ldp     fp, lr, [sp], 16

    ret

