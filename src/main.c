#include <stdio.h>

int main(void)
{
    int x = 9;

    // condicional if
    if (x == 10)
    {
        printf("x é igual a 10\n");
    }
    else if (x > 10)
    {
        printf("x é maior que 10\n");
    }
    else
    {
        printf("x é menor que 10\n");
    }

    // condicional switch
    switch (x)
    {
        case 10:
            printf("x é igual a 10\n");
            break;
        case 20:
            printf("x é igual a 20\n");
            break;
        default:
            printf("x é diferente de 10 e 20\n");
            break;
    }

    // condicional while
    while (x < 20)
    {
        printf("x é menor que 20\n");
        x++;
    }

    // condicional do while
    do
    {
        printf("x é menor que 20\n");
        x++;
    } while (x < 20);

    // condicional for
    for (int i = 0; i < 10; i++)
    {
        printf("x é menor que 20\n");
    }

    // condicional goto
    goto label;
    printf("x é menor que 20\n");
label:
    printf("x é igual a 20\n");

    // ternario
    int y = (x > 10) ? 10 : 20;
    printf("y é igual a %d\n", y);

    return 0;
}
