#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
  int count = 0;
  while (*lhs && *rhs) {
    if (*lhs != *rhs) {
      count++;
    }
    lhs++;
    rhs++;
  }
  if (*lhs || *rhs) {
    return -1;
  }
  return count;
}
