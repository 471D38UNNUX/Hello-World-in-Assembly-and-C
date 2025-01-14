.global main

.section    .note.GNU-stack, "", @progbits

.section    .data
msg:
    .asciz "Hello, World!"
.equ len, . - msg

.section    .text
main:
    lea		msg(%rip), %rdi
	mov		$len, %sil
	call	Hello
	
	mov     $60, %al
    xor     %dil, %dil
    syscall
