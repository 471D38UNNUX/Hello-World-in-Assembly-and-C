#include <unistd.h>
#include <sys/syscall.h>

void Hello(char * msg, char size)
{
    syscall(SYS_write, STDOUT_FILENO, msg, size);
}
