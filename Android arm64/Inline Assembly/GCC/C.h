void Hello(char msg[])
{
    asm volatile
    (
        "stp x29, x30, [sp, -16]!\n"
        "mov x29, sp\n"
        
        "mov x0, %0\n"
        "bl printf\n"
        
        "ldp x29, x30, [sp], 16\n"
        
        "ret\n"
        :
        : "r"(msg)
        : "x0", "x29", "x30"
    );
}
