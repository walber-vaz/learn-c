#ifndef MAIN_H
#define MAIN_H

// sem typedef, ao fazer chamada vai ter que usar struct Cadastro c
typedef struct
{
    char *name;
    int age;
    char level;
} Cadastro;

Cadastro obter_cadastro(Cadastro *c);

// E comum passar o ponteiro para a função para evitar copiar o struct inteiro
void print_cadastro(Cadastro *c);

#endif
