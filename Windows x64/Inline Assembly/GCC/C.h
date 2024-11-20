#include <stdlib.h>

extern inline void Hello(char * msg)
{
    __asm__ volatile
    (
        "mov    %0, %%rcx\n"
        "call   printf\n"
        :
        : "r"(msg)
        : "%rcx"
    );
}
