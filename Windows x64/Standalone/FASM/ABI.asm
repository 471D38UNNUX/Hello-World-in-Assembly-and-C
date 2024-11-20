format pe64 console

entry main

include 'ABI.inc'

section '.text' code readable executable
main:
    sub     spl, 40

    call    Hello

    xor     ecx, ecx
    call    [ExitProcess]
