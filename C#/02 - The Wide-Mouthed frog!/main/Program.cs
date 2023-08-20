using System;

namespace main // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(MouthSize("Alligator"));
        }

        public static string MouthSize(string animal)
        {
            // code here
            return animal.ToLower() == "alligator" ? "small" : "wide";
        }
    }
}