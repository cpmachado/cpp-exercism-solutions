#include "trinary.h"

#include <string>

namespace trinary {
int to_decimal(std::string tri_str) {
  int sum = 0;

  for (long unsigned int i = 0; i < tri_str.length(); i++) {
    char ch = tri_str.at(i);
    int v = ch - '0';
    if (ch < '0' || ch > '2') {
      v = 0;
    }

    sum = sum * 3 + v;
  }

  return sum;
}

} // namespace trinary
