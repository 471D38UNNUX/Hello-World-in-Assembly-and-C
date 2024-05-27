.include "C.inc"

.section .text
    .global main

main:
    stp x29, x30, [sp, - 16]!
    mov x29, sp

    bl Hello
    
    ldp x29, x30, [sp], 16

    ret
