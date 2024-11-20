format ms64 coff

public Hello

extrn printf

section '.text' code readable executable
Hello:
	sub		spl, 40

	call	printf
	
	add		spl, 40

	ret
