.global Hello

.section	.text
Hello:
	sub		$40, %spl

	call	printf

	add		$40, %spl

	ret
