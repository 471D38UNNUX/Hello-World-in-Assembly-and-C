extern printf

global Hello

section .note.GNU-stack

section .text
Hello:
    sub		rsp, 8

	call	[rel printf wrt ..got]

	add		rsp, 8

    ret
