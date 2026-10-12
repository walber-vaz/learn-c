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
    char nome[150] = "Walber Vaz da Silva";
    // array de strings - A primeira e quantidade de elementos, a segunda e o tamanho de cada
    // elemento
    char nomes[2][150] = {"Walber Vaz da Silva", "João da Silva"};

    // Arreay bidimensional - A primeira e quantidade de elementos, a segunda e o tamanho de cada
    // elemento
    int matriz[2][3] = {{88, 56, 32}, {85, 53, 67}};
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", matriz[0][0]);
    // quantidade do array bidimensional
    printf("QTD: %ld\n", sizeof(matriz) / sizeof(matriz[0]));
    printf("O nome é: %s\n", nome);
    printf("O nome é: %s\n", nomes[0]);
    printf("O nome é: %s\n", nomes[1]);
    printf("O valor do primeiro número é: %d\n", numeros[0]);
    printf("O valor de soma é: %d\n", soma(1, 2));
    printf("A frase é: %s\n", echo_str(HELLO_WORLD));
    printf("O valor de PI é: %lf\n", PI);

    return 0;
}
