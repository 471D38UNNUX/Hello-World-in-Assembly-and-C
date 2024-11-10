.include "C.inc"

.section	.text
	.global main # change into main if assembling/linking with gcc/clang

main:
	sub	$40, %spl

	call	Hello

	xor	%ecx, %ecx
	call	exit
