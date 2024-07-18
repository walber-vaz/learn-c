#include "resistor_color_duo.h"
#include <string.h>

int color_code(resistor_band_t colors[]) {
    return colors[0] * 10 + colors[1];
}

int resistor_color_code(const char *colors[]) {
    resistor_band_t bands[2];
    for (int i = 0; i < 2; i++) {
        const char *color = colors[i];
        if (strcmp(color, "black") == 0) {
            bands[i] = BLACK;
        } else if (strcmp(color, "brown") == 0) {
            bands[i] = BROWN;
        } else if (strcmp(color, "red") == 0) {
            bands[i] = RED;
        } else if (strcmp(color, "orange") == 0) {
            bands[i] = ORANGE;
        } else if (strcmp(color, "yellow") == 0) {
            bands[i] = YELLOW;
        } else if (strcmp(color, "green") == 0) {
            bands[i] = GREEN;
        } else if (strcmp(color, "blue") == 0) {
            bands[i] = BLUE;
        } else if (strcmp(color, "violet") == 0) {
            bands[i] = VIOLET;
        } else if (strcmp(color, "grey") == 0) {
            bands[i] = GREY;
        } else if (strcmp(color, "white") == 0) {
            bands[i] = WHITE;
        }
    }
    return color_code(bands);
}
