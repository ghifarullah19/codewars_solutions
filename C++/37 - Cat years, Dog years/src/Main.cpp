#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  //your code here
  int cat = humanYears == 1 ? humanYears * 15 : humanYears == 2 ? 15 + 9 : 15 + 9 + (4 * (humanYears-2));
  int dog = humanYears == 1 ? humanYears * 15 : humanYears == 2 ? 15 + 9 : 15 + 9 + (5 * (humanYears-2));
  
  std::vector<int> result {humanYears, cat, dog};
  
  return result;
}