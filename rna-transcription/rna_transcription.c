#include <stdlib.h>
#include <string.h>
#include "rna_transcription.h"

char *to_rna(const char *dna) {
    char *rna = malloc(strlen(dna) + 1);
    const char *src = dna;
    char *dst = rna;
    while (*src) {
        *dst++ = (*src == 'G') ? 'C' : ((*src == 'C') ? 'G' : ((*src == 'T') ? 'A' : ((*src == 'A') ? 'U' : '\0')));
        src++;
    }
    *dst = '\0';
    return rna;
}
