.global Hello

.section    .note.GNU-stack, "", @progbits

.section	.text
Hello:
	sub		$8, %spl

	call	printf

	add		$8, %spl

	ret
