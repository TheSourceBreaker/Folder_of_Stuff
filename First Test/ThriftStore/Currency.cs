using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThriftStore
{

    class Currency //Class for Currency, It's actual use is located in the Programs section.
    {
        public int[] MoneyInfo = new int[2]; //Array for integers

        static public int storeMoney = 100;
        static public int playerMoney = 40;




        public class Money //Class for Money Information, could even be calle  a metadata.
        {
            private string MoneyName = "Gold Coin";
            private double AlternateAmount = 1356;   //A group of Instance Variables
            private int NormalAmount = 1;
            private string CurrencyValue = "Very Uncommon";

            public Money(string Name, string CurrencyWorth) //This initiates the variables
            {
                MoneyName = Name;
                CurrencyValue = CurrencyWorth;
            }
            public Money(int NormAm, double AltAm) //This initiates the variables
            {
                NormalAmount = NormAm;
                AlternateAmount = AltAm;
            }

            public void MoneyInfo()                                   //PROBLEM
            {
                Console.WriteLine("Money is very important here is this establishment though the type we take is slighty different than the regular dollar bill," +
                    " it goes by (string) which is + (string) {0} ! :", (MoneyName + CurrencyValue));
                Console.WriteLine("Coins compared to regular Money is much more greater in outcome due to its garanteed percentage of gold, which gives a better " +
                    "price than paper (int) + Coin and + (double) + US Dollars {0} ! :", (NormalAmount + AlternateAmount));
            }
        }

    }
}