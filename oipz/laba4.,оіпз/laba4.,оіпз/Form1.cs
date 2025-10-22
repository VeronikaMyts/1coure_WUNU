using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba4._оіпз
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
           
            int a, b;
            try {
                if (textBox1.Text != String.Empty && textBox2.Text != String.Empty)
                {
                    a = Convert.ToInt32(textBox1.Text);
                    b = Convert.ToInt32(textBox2.Text);
                    Class1.minKrat(a,b);
                    Form2 f2 = new Form2();
                    f2.Show();
                    this.Hide();
                }
                else
                    MessageBox.Show("Заповніть поля");
            }
            catch(Exception ex) {
                MessageBox.Show(ex.Message);
            }
        }
    }
}
