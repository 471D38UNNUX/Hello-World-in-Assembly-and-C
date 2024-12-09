format pe64 console

entry main

include 'C.inc'

section '.text' code readable executable
main:
    sub     rsp, 40

    call    Hello

    xor     ecx, ecx
    call    [exit]
