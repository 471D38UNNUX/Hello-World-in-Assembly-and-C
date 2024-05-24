format PE64 CONSOLE
entry main

include 'ABI.inc'

section '.text' code readable executable
main:
    call Hello

    ret
