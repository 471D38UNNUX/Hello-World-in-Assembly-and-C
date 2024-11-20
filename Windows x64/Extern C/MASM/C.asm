; Remove this comment for assembling with command line if using MSVC compiler for combining with C.c
; includelib legacy_stdio_definitions.lib
; includelib ucrt.lib

exit proto
Hello proto

.data
    msg db "Hello, World!", 0

.code
main proc
    sub     spl, 40

    lea     rcx, msg
    call    Hello

    xor     ecx, ecx
    call    exit
main endp
end
