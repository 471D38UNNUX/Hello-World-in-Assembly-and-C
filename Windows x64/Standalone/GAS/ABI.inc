.extern GetStdHandle, WriteConsoleA, ExitProcess

.section	.data
msg:
	.asciz "Hello World"
	len = . - msg - 1

.section	.text
Hello:
	sub	$40, %spl

	mov	$-11, %rcx
	call	GetStdHandle

	mov	%rax, %rcx
	lea	msg(%rip), %rdx
	lea	len, %r8
	xor	%r9d, %r9d
	movb	$0, 32(%rsp)
	call	WriteConsoleA

	add	$40, %spl

	ret
