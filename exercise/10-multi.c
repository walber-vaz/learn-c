#include <locale.h>
#include <stdio.h>

int main(void) {
  setlocale(LC_ALL, "");

  int a, b, c;
  printf("Digite 3 números inteiros: ");
  scanf("%d %d %d", &a, &b, &c);

  int d = a * b * c;
  printf("O produto é %d\n", d);

  return 0;
}
