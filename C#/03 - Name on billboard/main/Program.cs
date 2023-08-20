using System;

namespace main // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Billboard("Jeong-Ho Aristotelis"));
        }

        public static double Billboard(string name, double price = 30) {
            double countPrice = 0;
            for (int i = 0; i < name.Length; i++) {
                countPrice += price;
            }
            return countPrice;
        }
    }
}