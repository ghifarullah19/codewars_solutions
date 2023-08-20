#include <string>

std::string countSheep(int number) {
  // your code here
  std::string result = "";
  std::string count = "";
  for (int i = 1; i <= number; i++) {
    count = std::to_string(i);
    result += count + " sheep...";
  }
  return result;
}