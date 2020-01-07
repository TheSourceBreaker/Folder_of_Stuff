using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_2
{
    
    class Program
    {
        
        int[] Amount = new int[10];

        public void Main()
        {
            for (int i = 10; i > 0; --i)
            {
                Amount[i - 1] = 10 - 0;
            }

            Console.WriteLine(Amount);
            Console.ReadLine();

        }

    }
}
















public class Name
{
    public string firstName; //String variable declared.
    public string lastName;

    public string FullName
    {
        get
        {
            return firstName + " " + lastName;
        }
    }

}