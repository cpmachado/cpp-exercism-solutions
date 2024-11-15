#include "raindrops.h"

#include <string>

namespace raindrops {
std::string convert(int n) {
  std::string ret = "";
  if (n % 3 == 0) {
    ret += "Pling";
  }
  if (n % 5 == 0) {
    ret += "Plang";
  }
  if (n % 7 == 0) {
    ret += "Plong";
  }
  if (ret == "") {
    ret = std::to_string(n);
  }
  return ret;
}
} // namespace raindrops
