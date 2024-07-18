#include <locale.h>
#include <stdio.h>

int main(void) {
  setlocale(LC_ALL, "");

  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("%d é par\n", n);
  } else {
    printf("%d é ímpar\n", n);
  }

  return 0;
}
