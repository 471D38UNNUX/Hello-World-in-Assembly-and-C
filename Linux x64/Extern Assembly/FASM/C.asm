format elf64

public Hello

extrn printf

section	'.note.GNU-stack'

section '.data' writable
	_printf dq printf

section	'.code' executable
Hello:
    sub		rsp, 8

	call	[_printf]

	add		rsp, 8

    ret
