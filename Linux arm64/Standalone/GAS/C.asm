.include "C.inc"

.global _start // change into main if assembling/linking with gcc/clang

.section    .text
_start:
    // remove this comment if assembling/linking with gcc/clang
    // stp     fp, lr, [sp, - 16]!
    // mov     fp, sp

    bl Hello

    eor     w0, w0, w0
    bl      exit
