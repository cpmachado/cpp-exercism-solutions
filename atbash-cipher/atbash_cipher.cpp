#include "atbash_cipher.h"

#include <cctype>
#include <string>

namespace atbash_cipher {
std::string encode(std::string plaintext) {
  const int chunk_size = 5;
  unsigned long int i, k = 0;
  std::string encoded = "";
  char ch;

  for (i = 0; i < plaintext.length(); i++) {
    ch = tolower(plaintext.at(i));
    if (isspace(ch) || ispunct(ch)) {
      continue;
    }
    if (k > 0 && k % chunk_size == 0) {
      encoded += " ";
    }
    if (isalpha(ch)) {
      encoded += ('z' - ch + 'a');
    } else {
      encoded += ch;
    }
    k++;
  }

  return encoded;
}
std::string decode(std::string cyphertext) {
  unsigned long int i;
  std::string decoded = "";
  char ch;

  for (i = 0; i < cyphertext.length(); i++) {
    ch = tolower(cyphertext.at(i));
    if (isspace(ch)) {
      continue;
    }
    if (isalpha(ch)) {
      decoded += ('z' - ch + 'a');
    } else {
      decoded += ch;
    }
  }

  return decoded;
}
} // namespace atbash_cipher
