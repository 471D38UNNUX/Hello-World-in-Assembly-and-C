; Remove this comment for assembling with command line if using MSVC compiler for combining with ABI.c
; includelib kernel32.lib 

ExitProcess proto
Hello proto

.data
    msg db "Hello, World!", 0

.code
main proc
    sub     spl, 40

    lea     rcx, msg
    mov     dl, lengthof msg
    call    Hello

    xor     ecx, ecx
    call    ExitProcess
main endp
end
