#include <stdio.h>

/**
 * Calculates the average of three double values.
 *
 * @param a the first double value
 * @param b the second double value
 * @param c the third double value
 *
 * @return the average of the three double values
 */
double average_of_three(double a, double b, double c) {
  return (a + b + c) / 3;
}

// Calculates the average of three double values.
int main(void) {
  printf("A média é %f\n", average_of_three(1, 2, 3));
  return 0;
}
