.global main

.section	.data
msg:
	.asciz "Hello, World!\n"

.section	.text
main:
	sub		$40, %spl

	lea		msg(%rip), %rcx
	call	Hello

	xor		%ecx, %ecx
	call	exit
