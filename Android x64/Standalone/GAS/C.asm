.include "C.inc"

.global _start # change into main if assembling/linking with gcc/clang

.section    .text
_start:
    # remove this comment if assembling/linking with gcc/clang
    # sub     $8, %spl

    call    Hello

    xor     %dil, %dil
    call    exit
