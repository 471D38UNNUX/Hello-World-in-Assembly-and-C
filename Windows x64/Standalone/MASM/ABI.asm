include ABI.inc

.code
mainCRTStartup proc
    sub     spl, 40

    call    Hello

    xor     ecx, ecx
    call    ExitProcess
mainCRTStartup endp
end
