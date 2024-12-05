.include "ABI.inc"

.global _start // change into main if assembling/linking with gcc/clang

.section    .text
_start:
    bl  Hello

    mov w8, 93
    mov w0, wzr
    svc 0
