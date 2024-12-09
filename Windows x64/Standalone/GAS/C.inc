.section	.data
msg:
	.asciz "Hello, World!\n"

.section	.text
Hello:
	sub		$40, %rsp

	lea		msg(%rip), %rcx
	call	printf

	add		$40, %rsp

	ret

