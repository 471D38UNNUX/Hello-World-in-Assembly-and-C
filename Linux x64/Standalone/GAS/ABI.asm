.include "ABI.inc"

.section .text
    .global _start

_start:
    call Hello
    ret
