#include "hexadecimal.h"

#include <cctype>
#include <string>

namespace hexadecimal {
int convert(std::string number) {
  long unsigned int i;
  int ret = 0;

  for (i = 0; i < number.length(); i++) {
    char ch = toupper(number.at(i));
    if (!isxdigit(ch)) {
      return 0;
    }
    int v = ch - '0';
    if (!isdigit(ch)) {
      v = ch - 'A' + 10;
    }
    ret = ret * 16 + v;
  }
  return ret;
}
} // namespace hexadecimal
