#include "darts.h"

int score(coordinate_t coord) {
  float distance = sqrt(coord.x * coord.x + coord.y * coord.y);
  if (distance > 10) {
    return 0;
  } else if (distance > 5) {
    return 1;
  } else if (distance > 1) {
    return 5;
  } else {
    return 10;
  }
}
