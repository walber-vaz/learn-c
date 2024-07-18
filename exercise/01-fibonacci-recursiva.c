/*
Incluir as declarações de funções
de E/S. comuns como printf.
A maioria dos programas em C precisa delas

Função E/S padrão https://pt.wikipedia.org/wiki/Entrada/sa%C3%ADda
Coordenar o fluxo de tráfego entre os recursos internos e os dispositivos
externos. Comunicação entre o processador e o dispositivo externo.
*/
#include <stdio.h>

/*
Essa função calcula o n-ésimo termo da sequência de Fibonacci.
1 - retorna um inteiro
2 - recebe um inteiro n como argumento
 */
int fib(int n) {
  // Evita que a função entre em loop infinito
  if (n <= 2) // Se n for menor ou igual a 2 retorna 1
    return 1;
  else // Caso contrário, retorna a soma dos dois termos anteriores
    return fib(n - 1) + fib(n - 2);
}

/*
Função principal do programa
1 - retorna um inteiro
2 - não recebe argumentos (void)
3 - Tudo começa a partir daqui
4 - Imprime o 20º termo da sequência de Fibonacci
*/
int main(void) {
  printf("O item %d da sequência de Fibonacci é %d\n", 20, fib(20));
  return 0; // Retorna 0 para o sistema operacional
}
