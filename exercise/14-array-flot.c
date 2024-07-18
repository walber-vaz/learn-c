#include <stdio.h>

double avg_of_array(int length, double arr[]) {
  double sum = 0;
  int i;

  for (i = 0; i < length; i++) {
    sum += arr[i];
  }

  return sum / length;
}

int main(void) {
  double arr[] = {1, 2, 3, 4, 5};
  int length = sizeof(arr) / sizeof(arr[0]);

  printf("Average of array: %f\n", avg_of_array(length, arr));

  return 0;
}
