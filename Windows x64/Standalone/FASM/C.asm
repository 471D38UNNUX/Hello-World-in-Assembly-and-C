format PE64 CONSOLE
entry main

include 'C.inc'

section    '.text' code readable executable
main:
    sub    spl, 40

    call   Hello

    xor    ecx, ecx
    call   [exit]
