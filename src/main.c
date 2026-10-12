#include "main.h"

#include <stdio.h>
#include <stdlib.h>  // malloc e free
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    BigData *big = malloc(4 * sizeof(*big));

    big->text = "Hello, World!";
    for (int i = 0; i < 4; ++i)
    {
        big->array[i] = rand() % 9;
    }
    big->id = rand() % 9999999999;

    printf("Text: %s\n", big->text);
    for (int i = 0; i < 4; ++i)
    {
        printf("Array[%d]: %d\n", i, big->array[i]);
    }
    printf("ID: %ld\n", big->id);

    free(big);

    return 0;
}
