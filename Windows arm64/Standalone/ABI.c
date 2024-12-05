#include <Windows.h>

int main()
{
    WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), "Hello, World!", sizeof("Hello, World!") - 1, NULL, NULL);

    ExitProcess(0);
}
