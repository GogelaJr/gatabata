using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Reeee
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Klasi1 kla1 = new Klasi1();

            kla1.Gamozaxeba(label1);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int[] masivi1 = { 1, 4, 5, 6, 8, 10, 30, };
            int[] masivi2 = { 2,8,24,12,26,36,43};

            Klasi2 kla2 = new Klasi2(masivi1);
            Klasi2 kla21 = new Klasi2(masivi2);

            label2.Text = kla2.namravli(masivi2).ToString();
            label3.Text = kla21.namravli(masivi1).ToString();
        }
    }
}
