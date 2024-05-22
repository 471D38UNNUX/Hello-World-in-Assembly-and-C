format PE64 CONSOLE
entry main

include 'C.inc'

section '.text' code readable executable
main:
    call Hello
    ret
