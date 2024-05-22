format ELF64 executable 3

entry main

include 'ABI.inc'

segment readable executable
main:
    call Hello
    ret
