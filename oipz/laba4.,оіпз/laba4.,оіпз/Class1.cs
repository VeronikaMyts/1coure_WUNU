using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba4._оіпз
{
    public class Class1
    {
        public static int k;
        public static void minKrat(int a, int b)
        {
            for (int i = 1; i < 100000; i++)
            {
                if (i % a == 0 && i % b == 0)
                {
                    k = i;
                    break;
                }
            }
        }
    }
}
