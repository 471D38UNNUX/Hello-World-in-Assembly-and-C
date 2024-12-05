#include <stdlib.h>

extern inline void  Hello(char * msg)
{
    __asm__ volatile
    (
        "str    lr, [sp, - 16]!\n"

        "mov    x0, %0\n"
        "bl     printf\n"

        "ldr    lr, [sp], 16\n"
        :
        : "r"(msg)
        : "x0"
    );
}
