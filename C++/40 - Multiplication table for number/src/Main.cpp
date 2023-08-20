#include <string>

std::string multi_table(int number)
{
    std::string multiple = "";
    int j = 0;
    int multi = 0;
  
    for (int i = 1; i <= 10; i++) {
      multi = number * i;
      if (i != 10) {
        multiple += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(multi) + "\n";
      } else {
        multiple += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(multi);
      }
      j++;
    }
  
    std::cout << multiple;
    return multiple; // good luck
}