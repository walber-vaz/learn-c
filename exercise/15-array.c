#include <stdio.h>

// Array em C
// - Arrays são coleções de variáveis do mesmo tipo

// Declarando um array
// - Para declarar um array, você deve especificar o tipo de dado que ele irá
// armazenar e o nome do array
// - Para especificar o tamanho do array, você deve colocar o número de
// elementos entre colchetes
// - Exemplo: int arr[5];
// - Isso cria um array chamado arr que pode armazenar 5 inteiros

// Inicializando um array
// - Você pode inicializar um array ao declará-lo
// - Para inicializar um array, você deve colocar os valores entre chaves
// - Exemplo: int arr[5] = {1, 2, 3, 4, 5};
// - Isso cria um array chamado arr que armazena 5 inteiros e inicializa os
// valores com 1, 2, 3, 4 e 5

// Acessando elementos de um array
// - Para acessar um elemento de um array, você deve usar o índice do elemento
// - O índice de um array começa em 0
// - Exemplo: int arr[5] = {1, 2, 3, 4, 5}; printf("%d", arr[0]);
// - Isso imprime o valor 1

// Modificando elementos de um array
// - Para modificar um elemento de um array, você deve usar o índice do elemento
// - Exemplo: int arr[5] = {1, 2, 3, 4, 5}; arr[0] = 10;
// - Isso modifica o primeiro elemento do array para 10

int main() {
  // Declarando um array
  // int arr[5];
  // usando constante para definir o tamanho do array
  const int SIZE = 5;
  int arr[SIZE];

  // Inicializando um array
  int arr2[5] = {1, 2, 3, 4, 5};

  // Acessando elementos de um array
  printf("%d\n", arr2[0]); // 1
  printf("%d\n", arr2[1]); // 2
  printf("%d\n", arr2[2]); // 3
  printf("%d\n", arr2[3]); // 4
  printf("%d\n", arr2[4]); // 5

  // Modificando elementos de um array
  arr2[0] = 10;
  printf("%d\n", arr2[0]); // 10

  // usando loop para acessar e modificar elementos de um array
  for (int i = 0; i < SIZE; i++) {
    arr[i] = i + 1;
    printf("%d\n", arr[i]);
  }

  return 0;
}
