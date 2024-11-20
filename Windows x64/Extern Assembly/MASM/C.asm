printf proto

.code
Hello proc
    sub     spl, 40

    call    printf

    add     spl, 40

    ret
Hello endp
end