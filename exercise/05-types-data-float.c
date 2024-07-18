#include <stdio.h>

int main(void) {
  /*
      Números de punto flotante
      1 - float: 4 bytes
      2 - double: 8 bytes
      3 - long double: 10 bytes
  */
  printf("Tamanho de char: %lu bytes\n", sizeof(char));
  printf("Tamanho de int: %lu bytes\n", sizeof(int));
  printf("Tamanho de short: %lu bytes\n", sizeof(short));
  printf("Tamanho de float: %lu bytes\n", sizeof(float));
  printf("Tamanho de double: %lu bytes\n", sizeof(double));
  printf("Tamanho de long double: %lu bytes\n", sizeof(long double));

  // Float
  float f = 3.14;
  printf("Float: %f\n", f);

  // Double
  double d = 3.14;
  printf("Double: %f\n", d);

  // Long double
  long double ld = 3.14;
  printf("Long double: %Lf\n", ld);
  return 0;
}
