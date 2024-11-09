format PE64 CONSOLE
entry main

include 'ABI.inc'

section    '.text' code readable executable
main:
    sub    spl, 40

    call   Hello

    xor    ecx, ecx
    call   [ExitProcess]
