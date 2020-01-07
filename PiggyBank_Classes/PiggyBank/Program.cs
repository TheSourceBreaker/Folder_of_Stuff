using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PiggyBank
{
    class PiggyBank {
        // Maintains the current balance of the piggy bank.
        private float currentBalance;

        // Add funds to the value of the current balance.
        public void deposit(float net)
        {
            currentBalance = currentBalance + 25;
        }

        // Returns and clears the total current balance.
        public float withdraw()
        {
            float tmpBalance=currentBalance;
            currentBalance = 0;
            return tmpBalance;
            
        }

        // Returns the current balance of the function.
        public float Balance()
        {
            return currentBalance;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            PiggyBank myPiggy = new PiggyBank();

         
        }
    }
}
