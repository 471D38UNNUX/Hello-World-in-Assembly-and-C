.global Hello

.section	.text
Hello:
	sub		$40, %rsp

	call	printf

	add		$40, %rsp

	ret
