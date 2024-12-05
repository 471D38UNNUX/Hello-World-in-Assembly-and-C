; Remove this comment for assembling with command line
; includelib legacy_stdio_definitions.lib
; includelib ucrt.lib

printf proto
exit proto

.data
    msg db "Hello, World!", 10, 0

.code
Hello PROC
    sub     spl, 40

    lea     rcx, msg
    call    printf

    add     spl, 40
    
    ret
Hello ENDP
