using System;

namespace main // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(FirstNonConsecutive(new int[] {1,2,3,4,6,7,8,9}));
        }

          public static object FirstNonConsecutive(int[] arr)
        {
            int j = 1;
            for (int i = 0; i < arr.Length - 1 && j < arr.Length; i++) {
            if (arr[j] - arr[i] > 1) {
                return arr[j];
            }
            j++;
            }
            return null;
        }
    }
}