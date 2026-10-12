#include "main.h"

#include <stdio.h>

int main(void)
{
    enum Logs i = INFO, w = WARNING, e = ERROR, s = SUCCESS;
    printf("INFO: %d\n", i);
    printf("WARNING: %d\n", w);
    printf("ERROR: %d\n", e);
    printf("SUCCESS: %d\n", s);

    return s;
}
