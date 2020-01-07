using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WoodsTA
{
    class Story
    {
        protected string[] story = new string[3];


    }
    class Narrator : Story
    {
        public Narrator()
        {
            story[0] = "";
            story[1] = "";
            story[2] = "";
        }



    }
}
