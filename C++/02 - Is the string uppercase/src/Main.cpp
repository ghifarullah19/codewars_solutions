#include <string>

bool is_uppercase(const std::string &s)
{
  bool isStrUpper = true;
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (islower(s[i]))
    {
      count++;
    }
  }
  isStrUpper = count > 0 ? false : true;
  return isStrUpper;
}