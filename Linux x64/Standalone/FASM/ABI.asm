format elf64 executable 3

entry main

include 'ABI.inc'

segment readable executable
main:
    call    Hello

    mov     al, 60
    xor     dil, dil
    syscall
