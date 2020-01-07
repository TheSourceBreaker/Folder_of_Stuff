using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SumGrid
{
    class Program
    {
        static int[,] sum = new int[29,5]; //This creates a grid array with the integers of 29,5. (That being 29 in the x axis and 5 on the y)
        static int counter = 0;
        //static int subtotal = 0;

        static void Main(string[] args)
        {

            for (int y = 0; y < 5; y++) //This for loop is for counting the y-axis.
            {

                for(int x = 0; x < 29; x++) //This for loop is for counting the x-axis.
                {

                    counter += 1; //The counter goes up by one everytime a full loop is made.
                    sum[x, y] = counter; //Counter is then assigned to the "sum" of the array.
                    Console.Write( "[" + sum[x,y] + "]"); //Regular Write for the sum.

                }

                Console.Write("\n"); //Used to skip a line.

            }


            //for (int y = 0; y < 5; y++)
            //{

            //    subtotal += sum[0, y];

            //    for (int x = 0; x < 29; x++)
            //    {

            //        Console.Write("[" + sum[0, y] + "]");
            //    }
            //}
            //Console.Write("\n");

            Console.Read(); //Regular Read for the sum.

        }
    }
    // 1: Fill it. 2: Total up the columns. 3: Total up the rows.
}
