format ms64 coff

public Hello

extrn printf

section '.text' code readable executable
Hello:
	sub		rsp, 40

	call	printf
	
	add		rsp, 40

	ret
