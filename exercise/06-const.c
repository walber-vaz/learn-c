#include <stdio.h>

int main(void) {
  /*
      Constantes em C
      1 - const: define uma constante
      2 - #define: define uma constante
  */
  const float PI = 3.14;
  // PI = 3.1415; // Erro: assignment of read-only variable 'PI'
  printf("PI: %f\n", PI);

  return 0;
}
