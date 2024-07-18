#include <stdio.h>

int main(void) {
  /*
      Declaração de variáveis:
      - a: primeiro número - inteiro
      - b: segundo número - inteiro
      - soma: soma dos dois números - inteiro
  */
  int a, b, soma;

  printf("Digite o primeiro número: ");
  scanf("%d", &a); // Lê input do usuário e armazena na variável a. O %d indica
                   // que o input é um inteiro

  printf("Digite o segundo número: ");
  scanf("%d", &b); // Lê input do usuário e armazena na variável b. O %d indica
                   // que o input é um inteiro

  soma = a + b;

  printf("A soma de %d e %d é %d.\n", a, b, soma);

  return 0;
}
