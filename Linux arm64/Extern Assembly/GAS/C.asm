.section    .data

.global Hello

.section    .text
Hello:
    stp     fp, lr, [sp, - 16]!
    mov     fp, sp

    bl      printf
    
    ldp     fp, lr, [sp], 16

    ret
