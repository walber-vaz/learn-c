#include <locale.h>
#include <stdio.h>

int main(void) {
  setlocale(LC_ALL, "");
  int a, b, soma;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);

  printf("Digite o segundo número: ");
  scanf("%d", &b);

  soma = a + b;

  if (soma >= 10) {
    printf("A soma é maior ou igual a 10\n");
  } else {
    printf("A soma é menor que 10\n");
  }

  return 0;
}
