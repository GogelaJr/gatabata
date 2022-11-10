using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Reeee
{
    class Klasi1
    {
        public static int[,] sami = new int[3, 3];
        

        public Klasi1()
        {
            sami[0, 0] = 25;
            sami[0, 1] = 24;
            sami[0, 2] = 48;
            sami[1, 0] = 30;
            sami[1, 1] = 5;
            sami[1, 2] = 6;
            sami[2, 0] = 7;
            sami[2, 1] = 8;
            sami[2, 2] = 9;
        }

        private int jeradebi()
        {
            int i;
            int j;
            int jami =0;

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (sami[i, j] % 24 == 0)
                    {
                        jami += sami[i, j];
                    }
                }
            }
            return jami;
        }

        public void Gamozaxeba(Label l1)
        {
            l1.Text = "24is jeradebis jamia :" + jeradebi();
        }
    }
}
