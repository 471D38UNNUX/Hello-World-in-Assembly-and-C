.include "ABI.inc"

.global _start # change into main if assembling/linking with gcc/clang

.section    .text
_start:
    call    Hello

    mov     $60, %al
    xor     %dil, %dil
    syscall
