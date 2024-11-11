.extern GetStdHandle, WriteConsoleA, ExitProcess

.section	.data
msg:
	.asciz "Hello World"
	len = . - msg

.section	.text
Hello:
	sub	$40, %spl

	mov	$-11, %ecx
	call	GetStdHandle

	mov	%eax, %ecx
	lea	msg(%rip), %rdx
	lea	len, %r8
	xor	%r9d, %r9d
	movb	$0, 32(%rsp)
	call	WriteConsoleA

	add	$40, %spl

	ret
