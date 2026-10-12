#include "main.h"

#include <stdio.h>

int fatorial(int n)
{
    return (n <= 1) ? 1 : n * fatorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n == 1) ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int num = 13;
    printf("O fatorial de %d é %d\n", num, fatorial(num));
    printf("O fibonacci ate a posição %dº é: ", num);
    for (int i = 0; i < num; ++i)
    {
        printf(" %d", fibonacci(i));
    }
    printf("\n");

    return 0;
}
