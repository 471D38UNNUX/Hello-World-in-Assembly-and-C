include C.inc

.code
mainCRTStartup proc
    sub     rsp, 40

    call    Hello

    xor     ecx, ecx
    call    exit
mainCRTStartup endp
end
