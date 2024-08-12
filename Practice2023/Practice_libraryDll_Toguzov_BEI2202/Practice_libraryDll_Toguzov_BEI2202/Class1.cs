using System;
using System.Windows.Forms;
using static System.Math;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_libraryDll_Toguzov_BEI2202
{
    public class Class1
    {
        // Метод для ввода числа с плавающей точкой
        public static double Input(TextBox t)
        {
            return Convert.ToDouble(t.Text);
        }

        // Метод для вывода числа в текстовое поле
        public static void Output(TextBox t, double c) 
        {
            t.Text = Convert.ToString(c);
        }

        // Метод для записи результатов в текстовый файл
        public static void Text_write(TextBox text_result1, TextBox text_result2, TextBox text_result3)
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
            saveFileDialog.Filter = "Текстовый документ (*.txt)|*.txt|Все файлы (*.*)|*.*";

            if (saveFileDialog.ShowDialog() == DialogResult.OK)
            {
                StreamWriter streamWriter = new StreamWriter(saveFileDialog.FileName);
                streamWriter.WriteLine(text_result1.Text);
                streamWriter.WriteLine(text_result2.Text);
                streamWriter.WriteLine(text_result3.Text);
                streamWriter.Close();
            }
        }
        // Методы для вычисления значения функции такими способами, как return, out, ref
        public static double function_return(double x)
        {
            return ((Log(Sqrt(Exp(0.1 * x) + x)) / ((x + (Pow(10.7, (1.0 / 3.0)))) + (Atan(x)))) + (2.0 / 5.0));
        }
        public static void function_out(double x, out double z)
        {
            z = ((Log(Sqrt(Exp(0.1 * x) + x)) / ((x + (Pow(10.7, (1.0 / 3.0)))) + (Atan(x)))) + (2.0 / 5.0));
        }
        public static void function_ref(double x, ref double z)
        {
            z = ((Log(Sqrt(Exp(0.1 * x) + x)) / ((x + (Pow(10.7, (1.0 / 3.0)))) + (Atan(x)))) + (2.0 / 5.0));
        }

        // Методы для вычисление длин дуг L1, L2, L3, разными способами: return, out, ref
        public static void Output_2(TextBox t1, TextBox t2, TextBox t3, TextBox t4, TextBox t5,
            TextBox t6, double L1_out, double L2_out, double L3_out, double L1_ref, double L2_ref, double L3_ref)
        {
            t1.Text = Convert.ToString(L1_out);
            t2.Text = Convert.ToString(L2_out);
            t3.Text = Convert.ToString(L3_out);
            t4.Text = Convert.ToString(L1_ref);
            t5.Text = Convert.ToString(L2_ref);
            t6.Text = Convert.ToString(L3_ref);
        }
 
        public static void function_decision_of_out(double R1, double a, out double L1_out, double R2, double b, out double L2_out, double R3, double y, out double L3_out)
        {
            L1_out = function_R1_and_alpha(R1, a);
            L2_out = function_R2_and_beta(R2, b);
            L3_out = function_R3_and_gamma(R3, y);
        }
        public static void function_decision_of_ref(double R1, double a, ref double L1_ref, double R2, double b, ref double L2_ref, double R3, double y, ref double L3_ref)
        {
            L1_ref = function_R1_and_alpha(R1, a);
            L2_ref = function_R2_and_beta(R2, b);
            L3_ref = function_R3_and_gamma(R3, y);
        }
        // Метод для записи в текстовый файл полученные значения
        public static void Text_write2(TextBox text_result1, TextBox text_result2, TextBox text_result3)
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
            saveFileDialog.Filter = "Текстовый документ (*.txt)|*.txt|Все файлы (*.*)|*.*";

            if (saveFileDialog.ShowDialog() == DialogResult.OK)
            {
                StreamWriter streamWriter = new StreamWriter(saveFileDialog.FileName);
                streamWriter.WriteLine(text_result1.Text);
                streamWriter.WriteLine(text_result2.Text);
                streamWriter.WriteLine(text_result3.Text);
                streamWriter.Close();
            }
        }

        // Методы для вычисление дуг
        public static double function_R1_and_alpha(double R1, double a)
        {
            double l1 = 2 * PI * R1 * (a / 360);
            return l1;
        }

        public static double function_R2_and_beta(double R2, double b)
        {
            double l2 = 2 * PI * R2 * (b / 360);
            return l2;
        }
        public static double function_R3_and_gamma(double R3, double y)
        {
            double l3 = 2 * PI * R3 * (y / 360);
            return l3;
        }

        // Метод для вычисления системы
        public static double function_vichislenie(double a, double x, double y)
        {
            double answer = 0;
            bool flag = false;
            if (x > 0 && y > 0) 
            { 
                double r1 = (a + Pow(x, 2)) / y;
                double r2 = Pow(Tan(x), 2);
                double min = Pow(y, Exp(x));
                if (min > r1){
                    min = r1;
                }
                if (min > r2)
                {
                    min = r2;
                }
                flag = true;
                answer = 1 - Pow(y, x + y) * min;
            }
            if (0 <= x && x <= 3 && y < 1 && flag == false)
            {
                double r1 = Pow(x, Log10(a));
                double r2 = Pow(y, Log(a));
                double max = x + y;
                if (max < r1)
                {
                    max = r1;
                }
                if (max < r2)
                {
                    max = r2;
                }
                flag = true;
                answer = max;
            }
            if (flag == false)
            {
                answer = a + Pow(Cos(Sin(Abs(x))), a) + y;
            }
            return answer;
        }
        // Метод для записи в текстовый файл полученные значения
        public static void Text_write3(TextBox text_result1)
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
            saveFileDialog.Filter = "Текстовый документ (*.txt)|*.txt|Все файлы (*.*)|*.*";

            if (saveFileDialog.ShowDialog() == DialogResult.OK)
            {
                StreamWriter streamWriter = new StreamWriter(saveFileDialog.FileName);
                streamWriter.WriteLine(text_result1.Text);
                streamWriter.Close();
            }
        }
    }
}
