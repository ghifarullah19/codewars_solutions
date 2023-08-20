using System;

namespace main // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(SquareOrSquareRoot(new int[] { 4, 3, 9, 7, 2, 1 }));
        }

          public static int[] SquareOrSquareRoot(int[] array)
        {
            for (int i = 0; i < array.Length; i++) {
            array[i] = array[i] != (int)Math.Sqrt(array[i]) * (int)Math.Sqrt(array[i]) ? (int)Math.Pow(array[i], 2) : (int)Math.Sqrt(array[i]);
            }
            return array;
        }
    }
}