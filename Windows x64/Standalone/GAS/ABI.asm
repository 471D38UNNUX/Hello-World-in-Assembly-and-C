.include "ABI.inc"

.global main # change into main if assembling/linking with gcc/clang or mainCRTStartup if assembling/linking with MSVC compiler/linker

.section	.text	
main:
	sub		$40, %rsp

	call	Hello

	xor		%ecx, %ecx
	call	ExitProcess
