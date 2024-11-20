#include <unistd.h>
#include <sys/syscall.h>

void Hello(char * msg, int size)
{
    syscall(SYS_write, STDOUT_FILENO, msg, size);
}
