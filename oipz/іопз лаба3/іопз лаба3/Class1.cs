using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace іопз_лаба3
{
     class Class1
    {
        public static double sinus(double a, double c)
        {
            double sinusA;
            if (c != 0 && a != 0 && c > a)
            {
                sinusA = a / c;
                return sinusA;
            }
            else
            {
                MessageBox.Show("Невірно введені дані. ");
                return 0;
            }

        }
        public static double mediana(double a, double c)
        {
            double medianaB;
            if (c != 0 && a != 0 && c > a)
            {
                medianaB = (Math.Sqrt(Math.Abs(3 * Math.Pow(a, 2) - Math.Pow(c, 2)))) / 2;
                return medianaB;
            }
            else
            {
                MessageBox.Show("Невірно введені дані. ");
                return 0;
            }

        }
        public static double area(double a, double b, double c)
        {
            double S;
            if (c != 0 && a != 0 && b != 0)
            {
                S = ((a + b) * Math.Sqrt(Math.Abs(4 * Math.Pow(c, 2) - Math.Pow((a - b), 2)))) / 2;
                return S;
            }
            else
            {
                MessageBox.Show("Невірно введені дані. ");
                return 0;
            }

        }
        public static double angel(double a, double b, double c)
        {
            double angelA;
            if (c != 0 && a != 0 && b != 0 && b < c)
            {
                angelA = (Math.Acos(a - b)) / 2 * c;
                return angelA;
            }
            else
            {
                MessageBox.Show("Невірно введені дані. ");
                return 0;
            }

        }
    }
}

