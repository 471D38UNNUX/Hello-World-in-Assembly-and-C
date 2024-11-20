.include "ABI.inc"

.global _start // change into main if assembling/linking with gcc/clang

.section    .text
_start:
    bl Hello

    mov     w8, 93
    eor     w0, w0, w0
    svc     0
