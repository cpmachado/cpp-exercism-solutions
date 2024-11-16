#include "rotational_cipher.h"

#include <cctype>
#include <string>

namespace rotational_cipher {
std::string rotate(std::string plaintext, int n) {
  std::string res = "";
  long unsigned int i;
  for (i = 0; i < plaintext.length(); i++) {
    char ch = plaintext.at(i);
    if (isalpha(ch)) {
      if (islower(ch)) {
        ch = ((ch - 'a' + n) % 26) + 'a';
      } else {
        ch = ((ch - 'A' + n) % 26) + 'A';
      }
    }
    res += ch;
  }
  return res;
}
} // namespace rotational_cipher
