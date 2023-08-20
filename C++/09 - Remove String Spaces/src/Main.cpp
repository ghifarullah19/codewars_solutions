#include <string>

std::string no_space(const std::string &x)
{
  std::string result = "";
  std::string temp = x;
  for (unsigned i = 0; i < temp.length(); i++)
  {
    if (temp[i] == ' ')
    {
      continue;
    }
    result += temp[i];
  }
  return result;
}