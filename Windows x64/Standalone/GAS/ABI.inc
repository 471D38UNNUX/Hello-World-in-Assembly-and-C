.section	.data
msg:
	.ascii "Hello, World!"
.equ len, . - msg

.section	.text
Hello:
	sub		$40, %rsp

	mov		$-11, %ecx
	call	GetStdHandle

	mov		%eax, %ecx
	lea		msg(%rip), %rdx
	mov		$len, %r8d
	xor		%r9d, %r9d
	movb	$0, 32(%rsp)
	call	WriteConsoleA

	add		$40, %rsp

	ret
