#include <unistd.h>
#include <sys/syscall.h>

extern inline void Hello(char * msg, long long len)
{
    asm volatile
    (
        "mov    w8, 64\n"
        "mov    w0, 1\n"
        "mov    x1, %0\n"
        "mov    x2, %1\n"
        "svc    0\n"
       :
       : "r"(msg), "r"(len)
       : "x0", "x1", "x2", "x8"
    );
}
