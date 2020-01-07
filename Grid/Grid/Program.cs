using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Grid
{
    
    class Program
    {
        static int xValue = 3; // This just gives a purpose to "xValue", and substitudes the int[xValue,0]. 
        static int yValue = 3; // This just gives a purpose to "yValue", and substitudes the int[0,yValue]. 


        static int[,] grid = new int[xValue,yValue]; //"[,]" makes the array become 2d. "[3,3]" is another way of saying "3 by 3"
        static int counter = 0; // This "counter" is used to display how much the value goes up by, when displaying the result.
        

        static void Main(string[] args)
        {
            for (int y = 0; y < yValue; y++) // This sets itself as the row after each try, slowly counting up after "x" finishes its turn.
            {
                for (int x = 0; x < xValue; x++) // The "x" starts second but continues unlike "y" would.
                {
                    counter += 1; // This says "counter" plus or equal to "1" = display of result.
                    grid[x, y] = counter; // 
                    Console.Write("[" + grid[x, y] + "]"); // "[" + 0 + "]" = [0].
                }
                Console.Write("\n"); //"\n" functions just like the enter key, also the "Write" appears outside to let xValue finish its three numbers before moving down a line.
            }
            Console.Read(); // "Read" gets used outside at the end, not while inside the scope while everything is being made.

        }
    }
}
