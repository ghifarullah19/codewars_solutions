#include <string>
using namespace std;

string reverseString(string str)
{
  // your Code is Here ... enjoy !!!
  string newStr = "";
  for (int i = str.length() - 1; i >= 0; i--)
  {
    newStr += str[i];
  }
  return newStr;
}