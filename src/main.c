#include "main.h"

#include <stdio.h>

Cadastro obter_cadastro(Cadastro *c)
{
    printf("Digite o nome: ");
    fgets(c->name, 150, stdin);
    fflush(stdin);

    printf("Digite a idade e nível: ");
    scanf("%d %c", &c->age, &c->level);

    return *c;
}

void print_cadastro(Cadastro *c)
{
    printf("Name: %s\n", c->name);
    printf("Age: %d\n", c->age);
    printf("Level: %c\n", c->level);
}

int main(void)
{
    Cadastro c;

    obter_cadastro(&c);
    print_cadastro(&c);

    return 0;
}
