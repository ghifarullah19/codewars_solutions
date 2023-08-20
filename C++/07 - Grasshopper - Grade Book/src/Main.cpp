#include <string>
using namespace std;

char getGrade(int a, int b, int c)
{
  // your code here
  int score = (a + b + c) / 3;
  return score <= 100 && score >= 90 ? 'A' : score < 90 && score >= 80 ? 'B'
                                         : score < 80 && score >= 70   ? 'C'
                                         : score < 70 && score >= 60   ? 'D'
                                         : score < 60 && score >= 0    ? 'F'
                                                                       : 0;
}