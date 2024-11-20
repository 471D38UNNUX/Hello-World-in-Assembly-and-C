#include <stdlib.h>

extern inline void Hello(char * msg)
{
    asm volatile
    (
        "mov    %0, %%rdi\n"
        "call   printf\n"
        :
        : "r"(msg)
        : "%rdi"
    );
}
