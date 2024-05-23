format ELF64

public main

include 'C.inc'

section '.code' executable

main:
    call Hello
    
    ret
