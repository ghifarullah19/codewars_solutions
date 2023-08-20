using System.Collections.Generic;

public class Kata
{
  public static List<int> ReverseList(List<int> list)
  {
    // Return a new list with its elements in reverse order compared to the input list
    // Do not mutate the original list!
    List<int> result = new List<int>();

    for (int i = list.Count -1; i >= 0; i--)
    {
      result.Add(list[i]);
    }
    return result;    
  }
}