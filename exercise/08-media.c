#include <locale.h>
#include <stdio.h>

/*
  Calcule a média entre duas notas
*/

int main(void) {
  setlocale(LC_ALL, "");

  double nota1, nota2;
  printf("Digite a primeira nota: ");
  // %lf significa que vai ler um double (float)
  // esta atribuindo o valor da nota para nota1 usando pointer
  scanf("%lf", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);

  double media = (nota1 + nota2) / 2;
  printf("A média é: %.2lf\n", media);

  return 0;
}
