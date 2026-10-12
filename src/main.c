#include "main.h"

#include <stdio.h>

int soma(int x, int y)
{
    return x + y;
}

char *echo_str(char *str)
{
    return str;
}

int main(void)
{
    printf("O valor de soma é: %d\n", soma(1, 2));
    printf("A frase é: %s\n", echo_str("Hello, World!"));
    return 0;
}
