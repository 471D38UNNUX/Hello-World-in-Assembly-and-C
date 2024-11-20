.global main # change mainCRTStartup if combining with MSVC compiler

.section	.data
msg:
	.asciz "Hello, World!"
.equ len, . - msg

.section	.text
main:
	sub		$40, %spl

	lea		msg(%rip), %rcx
	mov		$len, %dl
	call	Hello

	xor		%ecx, %ecx
	call	ExitProcess
