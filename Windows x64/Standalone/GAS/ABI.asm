.include "ABI.inc"

.global _start # change into main if assembling/linking with gcc/clang or mainCRTStartup if assembling/linking with MSVC compiler/linker

.section	.text	
_start:
	sub		$40, %rsp

	call	Hello

	xor		%ecx, %ecx
	call	ExitProcess
