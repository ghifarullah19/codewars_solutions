using System;

namespace main // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(UnusualFive());
        }

        public static int UnusualFive()
        {
            string hello = "hello";
            return hello.Length;
        }
    }
}