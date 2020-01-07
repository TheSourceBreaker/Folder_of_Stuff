using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    class Variables
    {
        double changePocket = 2.3231432;
        bool gotChange = true;
        float pocketChange = 2.752523f;
        char randomLetter = 'Y';
        int Boon = 23;
        string Hex = "I have no hex";
        int Add = 1 + 1;
        int Mult = 2 * 2;
        int Div = 8 / 2;
        int Sub = 10 - 9;
    }

    class Operators
    {
        static void Main(string[] args)
        {
            int a = 6;

            a += 13;
            Console.WriteLine("[" + a + "]");

            a -= 21;
            Console.WriteLine("[" + a + "]");

            a *= 4;
            Console.WriteLine("[" + a + "]");

            a /= 2;
            Console.WriteLine("[" + a + "]");

            Console.ReadLine();
        }

    }

    public class Expressions
    {



    }
}
