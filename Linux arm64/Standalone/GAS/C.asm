.include "C.inc"

.global _start // change into main if assembling/linking with gcc/clang

.section    .text
_start:
    // remove this comment if assembling/linking with gcc/clang
    // str lr, [sp, -16]!

    bl  Hello

    mov w0, wzr
    bl  exit
