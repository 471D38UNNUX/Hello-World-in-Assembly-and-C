.section	.data
msg:
	.asciz "Hello, World!"

.section	.text
Hello:
	sub		$40, %spl

	lea		msg(%rip), %rcx
	call	printf

	add		$40, %spl

	ret

