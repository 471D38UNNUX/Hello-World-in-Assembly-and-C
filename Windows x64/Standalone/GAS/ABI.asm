.include "ABI.inc"

.section	.text
	.global _start # change into main if assembling/linking with gcc/clang

_start:
	sub	$40, %spl

	call	Hello

	xor	%ecx, %ecx
	call	ExitProcess
