#include <stdio.h>
#include <string.h>

int main(void)
{
    const int TAM = 100;
    char nome[TAM];

    printf("Digite seu nome: ");
    fgets(nome, TAM, stdin);
    // fflush(stdin) e para limpar o buffer do teclado
    fflush(stdin);

    printf("Seu nome é: %s\n", nome);
    printf("O tamanho do nome é: %ld\n", strlen(nome));

    return 0;
}
