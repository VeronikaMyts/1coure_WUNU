using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace іопз_лаба3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double c, a, s, m;
            if (String.IsNullOrEmpty(textBox1.Text) || String.IsNullOrEmpty(textBox2.Text))
            {
                MessageBox.Show("Стрічки не повинні бути пусті ");

            }
            
                c = Convert.ToDouble(textBox1.Text);
            a = Convert.ToDouble(textBox2.Text);
            s = Class1.sinus(a, c);
            m = Class1.mediana(a, c);
               
            if (s != 0)
            {



                label3.Text = "Синус гострого кута = " + s.ToString() + " градусів.";

            }
            else
            {
                label3.Text = "Не вдалося обчислити величину кута.";

            }
            if (m != 0)
            {
                label4.Text = "Медіана  = " + m.ToString() + " см.";
            }
            else
            {
                label4.Text = "Не вдалося обчисли медіану";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            double a, b, c, S, K;
            a = Convert.ToDouble(textBox3.Text);
            b = Convert.ToDouble(textBox4.Text);
            c = Convert.ToDouble(textBox5.Text);
            S = Class1.area(a, b, c);
            K = Class1.angel(a, b, c);
            if (S != 0)
            {



                label7.Text = "Площа  = " + S.ToString() + " см^2.";

            }
            else
            {
                label7.Text = "Не вдалося обчислити площу.";

            }
            if (K != 0)
            {
                label8.Text = "Гострий кут  = " + K.ToString() + " градусах.";
            }
            else
            {
                label8.Text = "Не вдалося обчисли гострий кут";
            }
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsNumber(e.KeyChar) && e.KeyChar != ',' && e.KeyChar != 45 && !Char.IsControl(e.KeyChar))
                e.Handled = true;
        }
    }
}
    

    

