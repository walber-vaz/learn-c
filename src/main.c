#include "main.h"

int main(void)
{
// directivas
#if defined(MSDOS) || defined(_WIN32) || defined(_WIN64)
    {
        printf("MSDOS\n");
    }
#elif defined(__linux__)
    {
        printf("Linux\n");
    }
#else
    {
        printf("Unknown\n");
    }
#endif
    print_hello_world("John");
    return 0;
}
