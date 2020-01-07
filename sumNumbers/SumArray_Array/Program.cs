using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SumArray_Array
{
    class Program
    {
        static public int SumNumber(int[] num)
        {
            int total = 0;
            for(int i = 0; i < num.Length; i++)
            {
                total += num[i];
            }
            return total;
        }


        static void Main(string[] args)
        {
            

            int[] test = new int[4];
            test[0] = 15;
            test[1] = 20;
            test[2] = 5;
            test[3] = 10;

            Console.WriteLine(SumNumber(test));
            Console.ReadKey();
        }
    }
}
