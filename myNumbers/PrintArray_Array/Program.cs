using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PrintArray_Array
{
    // Prints all numbers.
    //  - numbers is the array of integers to print from
    //  - size is the number of elements in the array
    class Program
    {
    int[] Numb = new int[5];

    void printNumbers(string[] _MyStrings)
    {
        for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(_MyStrings[i]);
            }
    }
    static void Main(string[] args)
    {
        int[] Numb = { 1, 2, 3, 4, 5 };
        Console.WriteLine();
        Console.ReadLine();
    }

    }
}
