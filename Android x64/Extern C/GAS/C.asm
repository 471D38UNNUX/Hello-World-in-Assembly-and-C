.global main

.section    .note.GNU-stack, "", @progbits

.section    .data
msg:
    .asciz "Hello, World!\n"

.section    .text
main:
    lea		msg(%rip), %rdi
	call	Hello
	
    xor     %dil, %dil
    call	exit
