#include <stdio.h>
#include <string.h>
// string.h
// - A biblioteca string.h fornece funções para manipular strings em C
// - Exemplo: strcpy(), strcat(), strlen(), strcmp(), etc.

// String em C
// - Strings em C são tipo especial de array que armazena uma sequência de
// caracteres terminada por um caractere nulo
// - O caractere nulo é representado pelo caractere '\0'
// - Exemplo: char name[7] = "John D";
// - Isso cria uma string chamada name que armazena 7 caracteres e termina com
// o caractere nulo
// - O caractere nulo é adicionado automaticamente pelo compilador

int main(void) {
  /* code */
  // Declarando uma string
  // char name[7] = "John D";
  char name[7] = {'J', 'o', 'h', 'n', ' ', 'D'};

  // Imprimindo a string
  printf("Name: %s\n", name);

  // Usando a função strcpy() para copiar uma string
  char name2[7];
  strcpy(name2, name);
  printf("Name2: %s\n", name2);

  // Usando a função strcat() para concatenar duas strings
  char name3[14] = "Doe";
  strcat(name3, name);
  printf("Name3: %s\n", name3);

  // Usando a função strlen() para obter o tamanho de uma string
  printf("Length of name: %ld\n", strlen(name));

  // Usando a função strcmp() para comparar duas strings (case-sensitive)
  char str1[6] = "Hello";
  char str2[6] = "Hello";
  if (strcmp(str1, str2) == 0) {
    printf("Strings are equal\n");
  } else {
    printf("Strings are not equal\n");
  }
  return 0;
}
