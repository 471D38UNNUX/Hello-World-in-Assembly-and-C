extern printf

global Hello

section .note.GNU-stack

section .text
Hello:
    sub		spl, 8

	call	[rel printf wrt ..got]

	add		spl, 8

    ret
