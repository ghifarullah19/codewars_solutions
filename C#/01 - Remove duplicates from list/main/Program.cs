using System.Collections;

namespace main // Note: actual namespace depends on the project name.
{
  internal class Program
  {
    static void Main(string[] args)
    {
      int[] array = { 1, 2, 3, 4, 4, 5, 6, 7, 7, 8 };
      int[] arr = distinct(array);
      foreach (int i in arr)
      {
        Console.WriteLine(i);
      }
    }
    public static int[] distinct(int[] a)
    {
      ArrayList arrFst = new ArrayList();
      if (a.Length == 1)
      {
        return a;
      }
      for (int i = 0; i < a.Length; i++)
      {
        if (arrFst.Contains(a[i]) == false)
        {
          arrFst.Add(a[i]);
        }
      }
      int[] array = (int[])arrFst.ToArray(typeof(int));
      return array;
    }
  }
}