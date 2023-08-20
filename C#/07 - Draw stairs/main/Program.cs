using System;
// Compile: dotnet run --project main
namespace main // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        public static string DrawStairs(int n)
        {
            string arr = "";
            if (n == 1) {
            arr += "I";
            } else {
            int i = 0;
            while (i < n - 1) {
                arr += "I\n";
                arr += string.Concat(Enumerable.Repeat(" ", i + 1));
                i++;
            }
            arr += "I";
            }
            return arr;
        }
    }
}