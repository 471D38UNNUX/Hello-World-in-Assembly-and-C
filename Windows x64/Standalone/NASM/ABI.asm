%include "ABI.inc"

global _start ; change into main if assembling/linking with gcc/clang or mainCRTStartup if assembling/linking with MSVC compiler/linker

section .text

_start:
    sub     spl, 40
    
    call    Hello

    xor     ecx, ecx
    call    ExitProcess
