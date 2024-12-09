.global Hello

.section    .note.GNU-stack, "", @progbits

.section	.text
Hello:
	sub		$8, %rsp

	call	printf

	add		$8, %rsp

	ret
