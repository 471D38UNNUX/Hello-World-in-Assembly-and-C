#include <unistd.h>
#include <sys/syscall.h>

extern void Hello(char * msg, int len);

int         main()
{
    Hello("Hello, World!", sizeof("Hello, World!"));
    
    syscall(SYS_exit, 0);
}
