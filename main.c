#include <stdbool.h>
#include <stdio.h>

int main()
{
    /*
      Comentario em blocos
    */
    signed int x = 36;
    signed char a = 'A';
    float pi = 3.14f;
    bool check = false;
    double d = 9.36456f;

    printf("O valor da variavel x é: %d\n", x);
    printf("O valor da variavel a é: %c\n", a);
    printf("O valor da variavel pi é: %.2f\n", pi);
    printf("O valor da variavel d é: %.10lf\n", d);
    printf("O valor da variavel check é: %d\n", check);

    // Comentario em linha
    return 0;
}
