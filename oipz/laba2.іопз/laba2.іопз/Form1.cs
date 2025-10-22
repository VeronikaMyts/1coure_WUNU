using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba2.іопз
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double a,b,c;
            if (String.IsNullOrEmpty(textBox1.Text) || String.IsNullOrEmpty(textBox2.Text))
            {
                MessageBox.Show("Стрічки не повинні бути пусті ");

            }
            if (textBox1.Text !="" && textBox2.Text !="")
            {
                try 
                {
                    a = Convert.ToDouble(textBox1.Text);
                    b = Convert.ToDouble(textBox2.Text);
                    if ( a<=16) 
                    {
                        c = Math.Sqrt(16 - a) * (b - 14) / (Math.Pow(a, 2) + 5 * a +6);
                        label3.Text = c.ToString();
                       
                    }
                    else
                        MessageBox.Show("Значення змінної a має бути меншою", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);


                }
                catch
                {
                    MessageBox.Show("Не правильний формат вихідних даних ", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            else
                MessageBox.Show("Введіть значення обох змінних a та b", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsNumber(e.KeyChar) && e.KeyChar != ',' && e.KeyChar != 45 && !Char.IsControl(e.KeyChar))
                e.Handled = true;
        }

        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsNumber(e.KeyChar) && e.KeyChar != ',' && e.KeyChar != 45 && !Char.IsControl(e.KeyChar))
                e.Handled = true;
        }
    }
}
