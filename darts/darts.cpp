#include "darts.h"

namespace darts {
int score(double x, double y) {
  double squared = x * x + y * y;

  if (squared > 10 * 10) {
    return 0;
  }
  if (squared > 5 * 5) {
    return 1;
  }
  if (squared > 1) {
    return 5;
  }
  return 10;
}
} // namespace darts
