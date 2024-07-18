#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
  Crie um algoritmo que leia um número e imprima o seu valor absoluto
  e a diferença entre elas
*/

int main(void) {
  setlocale(LC_ALL, "");

  int numero1, numero2;
  printf("Digite um número: ");
  scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  int valor_abs = abs(numero1 - numero2);
  printf("O valor absoluto é: %d\n", valor_abs);
  printf("A diferença é: %d\n", numero1 - numero2);

  return 0;
}
