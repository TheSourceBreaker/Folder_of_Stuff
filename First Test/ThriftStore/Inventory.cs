using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThriftStore
{
    class Inventory //This contains the Overloading Constructor along with four instance variables. Also this be a class for Inventory,---
    {
        private string Rarity = "Legendary";
        private string Extraitem = "Ticket to New Heaven";
        private int AmountinStock = 3;         //The group of Instance Variables
        private double Cost = 125;

        public Inventory(string Extras, int Amount) //This initiates the variables
        {
            Extraitem = Extras;
            AmountinStock = Amount;
        }
        public Inventory(string Value, double Price) //This initiates the variables
        {
            Rarity = Value;
            Cost = Price;
        }
        public void extraStock()                                                //PROBLEM
        {
            string Num3 = "";
            string Num4 = "";

            while (Num3.ToLower() != "exit")
            {
                Num4 = Num3.ToLower();
                if (Num4 == "MoneyInfo")
                {

                    Console.WriteLine("There's an Extra Item with a decent Amount in Stock today called + (string) + and there is " +
                        "about + (int) + in stock!: {0} !", (Extraitem + AmountinStock));
                    Console.WriteLine("Its got + (string) + type value and it may be yours for a favorable price of + (double) + coins!: {0} !", (Rarity + Cost));
                }
            }
        }

    }

    class Scene         //Started making the Aggregation with a mix of Polymorphism.
    {
        private int totalMoney;
        private int totalItems;
        private int freeTime;
        private int pocketSpace;

        public Scene(int totalItems, int totalMoney)
        {
            this.totalItems = 0;
            this.totalMoney = 0;
        }

        public class Player
        {
            private bool freeTime;
            //public Scene scene;
            public Player() : this(true) // Added Class Inheritance of the Player in here
            {

            }

            public Player(bool freeTime)//, Scene scene)
            {
                this.freeTime = freeTime;
                // this.scene = scene;


            }
            public bool FreeTime
            {
                get { return freeTime; }
                set { this.freeTime = value; }
            }

        }

        public class Info : Player //Use of class inheritance for connecting "Info" to "Player"
        {
            public int pocketSpace;
            public Info(int pocketSpace, bool freeTime) : base(freeTime)
            {
                this.pocketSpace = pocketSpace;
            }
            public int PocketSpace
            {
                get { return pocketSpace; }
                set { this.pocketSpace = value; }

            }
            public static void PlayerInfo()                        //PROBLEM
            {
                char PI = (char)Console.Read();
                if (Char.IsLetter(PI))

                    if (Char.IsUpper(PI))
                    {

                    }


            }
        }
        public void Pockets()                           //PROBLEM
        {
            string Num5 = "";
            string Num6 = "";

            while (Num5.ToLower() != "exit")
            {
                Num6 = Num5.ToLower();
                if (Num6 == "moneyinfo")

                Console.WriteLine("You currently have + (int) + items and + (int) + coins: {0} !", (totalItems + totalMoney));
                Console.WriteLine("For a freestyle type citizen, you've got alot of + (bool). + You got enough space" +
                        " for + (int) + items, : {0} !", (freeTime + pocketSpace));
            }
        }

    }


}
