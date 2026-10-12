#include "main.h"

int main(void)
{
    int x = 9;
    int *px = &x;

    printf("X equals %d\n", x);
    printf("px equals %d\n", *px);

    return 0;
}
