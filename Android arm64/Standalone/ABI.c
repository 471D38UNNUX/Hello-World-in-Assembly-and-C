#include <unistd.h>

int main()
{
    write(STDOUT_FILENO, "Hello World", sizeof("Hello World") - 1);

    return 0;
}
