using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThriftStore
{


    class Program // Class for Program, where the main stuff happens.
    {

        static void Main()
        {

            Console.WriteLine("Hiya! Welcome to the Thrift Store, look around for anything you need!");
            Console.WriteLine("Purchase the Pirate-Hat for 10 coins? Purchase the Book-Bag for 25 coins? Purchase the Alarm-Clock for 35 coins?: ");
            //string text1 = "(Here is your Fancy  + (Items1))" + "(Current Money :  + (playerCurrency))" + "(Store Money raised up to :  + (storeCurrency))";
            //string text2 = "(Here is your Authentic  + (Items2))" + "(Current Money :  + playerCurrency)" + "(Store Money raised up to: + (storeCurrency)) ";
            //string text3 = "(Here is your Noisy  + (Items3))" + "(Current Money :  + playerCurrency)" + "(Store Money raised up to: + (storeCurrency)) ";
            string read = Console.ReadLine();
            int cost = 0;
            Currency.Money currency1 = new Currency.Money("Penny", "Worthless");
            currency1.MoneyInfo();
            //Scene.Pockets() pocket = new Scene.Pockets();
            //string change = (read);
            int[] Items = new int[3]; //Array for strings
                                                                                                   //Startup
            string Items1 = "Pirate-Hat";
            string Items2 = "Book-Bag";
            string Items3 = "Alarm-Clock";
            

            switch (read) //switch tactic that contains the "Console.ReadLine" in the form of "read" for all the different cases.
            {
                case "Pirate-Hat": //This case activates when Player types in "Pirate-Hat" into console.
                    cost += 10; //Which then proceeds to tinker with whatever is inside, which would be making cost add up to equal 10.
                    break; //Then "breaks"

                case "Book-Bag":
                    cost += 15;                                                                      //Work
                    break;
                    //goto case "Pirate-Hat";

                case "Alarm-Clock":
                    cost += 25;
                    break;
                   // goto case "Pirate-Hat";

                //case "Info":
                //    if (Currency.Num2 == 5)
                //    {
                //    }
                //    break;

                default:
                    Console.WriteLine("Wrong Move.");
                    break;

            }

            if (cost == 10) //Now that cost has been updated to 10, this if statement activates.      //Display
            {
                Console.WriteLine("That'll be {0} coins.", cost); //A responce to the Player should be the first thing to happen.
                int playerCurrency1 = Currency.playerMoney - cost; //"playerCurrency1" is the amount of money the player has after the transaction.
                int storeCurrency1 = Currency.storeMoney + cost; //"storeCurrency1" is the amount of money the store has after the transaction.
                string[] lines1 = { "Here is your Fancy "  + Items1 + "Current Money :"  + playerCurrency1 + "Store Money" + 
                " raised up to :"  + storeCurrency1 }; //This is used to house an array of strings
                System.IO.File.WriteAllLines(@"Text.txt", lines1); //The array of strings are then written down into a text document in its own custom location.
                string text = System.IO.File.ReadAllText(@"Text.txt"); //"text" gets set with the job of reading the Text file that contains "lines1".
                System.Console.WriteLine("{0}", lines1); //Console is then asked to write down "lines1" from where it was previously read.



                //Console.WriteLine("Here is your Fancy " + Items1);
                //Console.WriteLine("Current Money : " + playerCurrency);
                //Console.WriteLine("Store Money raised up to : " + storeCurrency);

            }

            if (cost == 25) //Does the exact same thing as what the first "if" statement did.
            {
                Console.WriteLine("That'll be {0} coins.", cost);
                int playerCurrency2 = Currency.playerMoney - cost;
                int storeCurrency2 = Currency.storeMoney + cost;
                string[] lines2 = { "Here is your Authentic "  + (Items2), "Current Money :"  + (playerCurrency2), "Store " +
                "Money raised up to :"  + (storeCurrency2) };
                System.IO.File.WriteAllLines(@"C:\Users\wtfpa\source\repos\ThriftStore\lines\Text.txt", lines2);
                string text = System.IO.File.ReadAllText(@"C:\Users\wtfpa\source\repos\ThriftStore\lines\Text.txt");
                System.Console.WriteLine("{0}", lines2);



                //Console.WriteLine("Here is your Authentic " + Items2);
                //Console.WriteLine("Current Money : " + playerCurrency);
                //Console.WriteLine("Store Money raised up to : " + storeCurrency);
            }

            if (cost == 35) //Does the exact same thing as what the first "if" statement did.
            {
                Console.WriteLine("That'll be {0} coins.", cost);
                int playerCurrency3 = Currency.playerMoney - cost;
                int storeCurrency3 = Currency.storeMoney + cost;
                string[] lines3 = { "Here is your Noisy "  + (Items3), "Current Money :"  + (playerCurrency3), "Store Money raised up to :"  + (storeCurrency3) };
                System.IO.File.WriteAllLines(@"C:\Users\wtfpa\source\repos\ThriftStore\lines\Text.txt", lines3);
                string text = System.IO.File.ReadAllText(@"C:\Users\wtfpa\source\repos\ThriftStore\lines\Text.txt");
                System.Console.WriteLine("{0}", lines3);



                //Console.WriteLine("Here is your Noisy " + Items3);
                //Console.WriteLine("Current Money : " + playerCurrency);
                //Console.WriteLine("Store Money raised up to : " + storeCurrency);
            }

            Console.WriteLine("Come again soon!");    //Ending Lines
            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();




            //for (int i = 20; i >= 5; i--)  //This is an initializer
            //{
            //        int currentMoney = i;

            //        Console.WriteLine("Player has" + i + "coins");
            //}


        }
    }
}
