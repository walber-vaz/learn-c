#include <stdio.h>

int main(void)
{
    // loops
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Hello, World! %d\n", i);
    //     if (i == 5)
    //     {
    //         break;
    //     }
    // }

    // int i = 0;
    // while (i < 10)
    // {
    //     printf("Hello, World! %d\n", i);
    //     i++;
    // }

    int i = 0;
    do
    {
        printf("Hello, World! %d\n", i);
        i++;
        if (i == 5)
        {
            break;
        }
    } while (i < 10);

    return 0;
}
