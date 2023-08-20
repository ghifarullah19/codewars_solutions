using System.Collections.Generic;

public class Kata
{
  public static List<int> FindMultiples(int integer, int limit)
  {
    // Your code here!
    List<int> newResult = new List<int>();
    if (limit % integer == 0) {
      for (int i = integer; i <= limit; i = i + integer) {
        newResult.Add(i);
      }
    } else {
      for (int i = integer; i < limit; i = i + integer) {
        newResult.Add(i);
      }
    }
    return newResult;
  }
}