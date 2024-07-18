#include <stdio.h>

int main(void) {
  /*
      Tipos de dados em C
      -> Inteiros
      1 - char - 1 byte
      2 - int - 2 bytes
      3 - short - 2 bytes
      4 - long - 4 bytes

      -> Inteiros sem sinal
      1 - unsigned char - 1 byte
      2 - unsigned int - 2 bytes
      3 - unsigned short - 2 bytes
      4 - unsigned long - 4 bytes
  */

  // Declarando variáveis
  char c;
  int i;
  short s;
  long l;

  unsigned char uc;
  unsigned int ui;
  unsigned short us;
  unsigned long ul;

  // Atribuindo valores
  c = 'A';
  i = 10;
  s = 20;
  l = 30;

  uc = 40;
  ui = 50;
  us = 60;
  ul = 70;

  // Imprimindo valores
  printf("char: %c\n", c);
  printf("int: %d\n", i);
  printf("short: %d\n", s);
  printf("long: %ld\n", l);

  printf("unsigned char: %d\n", uc);
  printf("unsigned int: %d\n", ui);
  printf("unsigned short: %d\n", us);
  printf("unsigned long: %ld\n", ul);

  // Overflows
  c = 127;
  uc = 255;

  c = c + 10;   // char overflow isso vai imprimir numero grande aleatório
  uc = uc + 10; // unsigned char overflow isso vai imprimir 9

  printf("char overflow: %u\n", c);
  printf("unsigned char overflow: %u\n", uc);

  // Avisos do compilador tipos errados
  char x = 1000; // warning: overflow in implicit constant conversion
                 // [-Wconstant-conversion]
  printf("char x: %d\n", x);

  // ele avisara em atribuições diretas
  char y;
  y = 1000; // warning: overflow in implicit constant conversion
            // [-Wconstant-conversion]
  printf("char y: %d\n", y);

  char z = 0;
  z += 1000;
  printf("char z: %d\n", z);
  return 0;
}
