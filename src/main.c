#include "main.h"

#include <stdio.h>

int double_number(int num)
{
    return num * 2;
}

// Ponteiro de função
int (*pdouble_number)(int) = &double_number;

int main(void)
{
    int y = 9;
    printf("O dobro de %d é %d\n", y, pdouble_number(y));

    return 0;
}
