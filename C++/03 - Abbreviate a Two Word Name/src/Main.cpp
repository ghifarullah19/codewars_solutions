#include <string>

std::string abbrevName(std::string name)
{
  std::string str = "";
  char del = ' ';
  for (int i = 0; i < (int)name.size(); i++)
  {
    if (i == 0)
    {
      str += toupper(name[i]);
    }
    else if (name[i] == del)
    {
      str += ".";
      str += toupper(name[i + 1]);
    }
  }
  return str;
}