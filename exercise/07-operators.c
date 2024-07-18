#include <stdio.h>

int main(void) {
  /*
      Operadores em C
      1 - Aritméticos
      2 - Relacionais
      3 - Lógicos
      4 - Bitwise
      5 - Atribuição
      6 - Outros
  */
  int a = 10, b = 20;

  // Aritméticos
  // +, -, *, /, % (módulo)
  printf("Soma de a + b: %d\n", a + b);
  printf("Subtração de a - b: %d\n", b - a);
  printf("Multiplicação de a * b: %d\n", a * b);
  printf("Divisão de a / b: %d\n", a / b);
  printf("Módulo de a %% b: %d\n", a % b);

  // Unários
  // ++, --, +, -
  printf("Incremento de a++: %d\n",
         a++); // retorna o valor de a e depois incrementa
  printf("Incremento de ++a: %d\n",
         ++a); // incrementa o valor de a e depois retorna
  printf("Decremento de b--: %d\n",
         b--); // retorna o valor de b e depois decrementa
  printf("Decremento de --b: %d\n",
         --b); // decrementa o valor de b e depois retorna
  printf("Positivo de +a: %d\n", +a);
  printf("Negativo de -b: %d\n", -b);

  // Comparação
  // ==, !=, >, <, >=, <= = 1 (verdadeiro) ou 0 (falso)
  printf("a == b: %d\n", a == b);
  printf("a != b: %d\n", a != b);
  printf("a > b: %d\n", a > b);
  printf("a < b: %d\n", a < b);
  printf("a >= b: %d\n", a >= b);
  printf("a <= b: %d\n", a <= b);

  // Lógicos
  // && (AND), || (OR), ! (NOT) = 1 (verdadeiro) ou 0 (falso)
  printf("a && b: %d\n", a && b);
  printf("a || b: %d\n", a || b);
  printf("!a: %d\n", !a);

  // Atribuição composto
  // +=, -=, *=, /=, %=
  a += b; // a = a + b
  printf("a += b: %d\n", a);
  a -= b; // a = a - b
  printf("a -= b: %d\n", a);
  a *= b; // a = a * b
  printf("a *= b: %d\n", a);
  a /= b; // a = a / b
  printf("a /= b: %d\n", a);
  a %= b; // a = a % b
  printf("a %%= b: %d\n", a);

  // Ternário
  // ?:
  int c = 30;
  int maior = (a > b) ? a : b;
  printf("Maior entre a e b: %d\n", maior);

  return 0;
}
