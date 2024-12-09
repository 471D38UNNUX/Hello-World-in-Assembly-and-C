%include "C.inc"

global _start ; change into main if assembling/linking with gcc/clang

section .text
_start:
    ; remove this comment if assembling/linking with gcc/clang
    ; sub     rsp, 8

    call    Hello
    
    xor     dil, dil
    call    [rel exit wrt ..got]
