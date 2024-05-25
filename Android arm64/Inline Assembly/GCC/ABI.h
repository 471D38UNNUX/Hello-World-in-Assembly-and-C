#include <stddef.h>

void Hello(char msg[],size_t len)
{
    asm volatile
    (
       "mov x0, 1\n"
       "mov x1, %0\n"
       "mov x2, %1\n"
       "mov x8, 64\n"
       "svc 0\n"

       "eor x0, x0, x0\n"
       "mov x8, 93\n"
       "svc 0\n"
       :
       : "r"(msg), "r"(len)
       : "x0", "x1", "x2", "x8"
    );
}
