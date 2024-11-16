#include "luhn.h"

#include <cctype>
#include <string>

namespace luhn {
bool valid(std::string number) {
  int sum = 0;
  long unsigned i = 0;
  int n = 0, parity, k;

  // validate and get parity
  for (i = 0; i < number.length(); i++) {
    char ch = number.at(i);
    if (isdigit(ch)) {
      n++;
    } else if (ch != ' ') {
      return false;
    }
  }
  if (n < 2) {
	  return false;
  }
  parity = n % 2;

  // compute sum
  k = 0;
  for (i = 0; i < number.length(); i++) {
    char ch = number.at(i);
    if (isdigit(ch)) {
      int v = ch - '0';
      if (k % 2 != parity) {
        sum += v;
      } else if (v > 4) {
        sum += 2 * v - 9;
      } else {
        sum += 2 * v;
      }
      k++;
    }
  }
  return sum % 10 == 0;
}
} // namespace luhn
