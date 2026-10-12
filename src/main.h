#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

// Prototypes
void print_hello_world(const char *name);

inline void print_hello_world(const char *name)
{
    printf("Hello, %s!\n", name);
}

#endif
