.section    .data

.global Hello

.section    .text
Hello:
    str lr, [sp, -16]!

    bl  printf
    
    ldr lr, [sp], 16

    ret
