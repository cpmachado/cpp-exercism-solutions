#include <string>

namespace log_line {
std::string message(std::string line) {
  int idx = line.find(":");
  return line.substr(idx + 2);
}

std::string log_level(std::string line) {
  int lidx = line.find("[");
  int ridx = line.find("]");
  return line.substr(lidx + 1, ridx - 1);
}

std::string reformat(std::string line) {
  return message(line) + " (" + log_level(line) + ")";
}
} // namespace log_line
