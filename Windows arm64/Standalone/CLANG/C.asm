.include "C.inc"

.global main

.section    .text
main:
    str	lr, [sp, - 16]!

    bl	Hello

    mov	w0, wzr
    bl	exit
