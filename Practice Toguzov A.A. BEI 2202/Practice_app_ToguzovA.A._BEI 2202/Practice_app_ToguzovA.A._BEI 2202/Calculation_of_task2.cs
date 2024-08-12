using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static Practice_libraryDll_Toguzov_BEI2202.Class1;

namespace Practice_app_ToguzovA.A._BEI_2202
{
    public partial class Calculation_of_task2 : Form
    {
        public Calculation_of_task2()
        {
            InitializeComponent();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            double r1, r2, r3, a, b, y;
            try
            {
                r1 = Input(textBox1);
            }
            catch (Exception ex)
            {
                errorProvider1.SetError(textBox1, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                r2 = Input(textBox2);
            }
            catch (Exception ex)
            {
                errorProvider2.SetError(textBox2, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                r3 = Input(textBox3);
            }
            catch (Exception ex)
            {
                errorProvider3.SetError(textBox3, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                a = Input(textBox6);
            }
            catch (Exception ex)
            {
                errorProvider4.SetError(textBox6, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                b = Input(textBox5);
            }
            catch (Exception ex)
            {
                errorProvider5.SetError(textBox5, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                y = Input(textBox4);
            }
            catch (Exception ex)
            {
                errorProvider6.SetError(textBox4, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            double L1_out, L2_out, L3_out, L1_ref = 0, L2_ref = 0, L3_ref = 0;
            double L1_ret = function_decision_of_retL1(r1, a);
            double L2_ret = function_decision_of_retL2(r2, b);
            double L3_ret = function_decision_of_retL2(r3, y);
            function_decision_of_out(r1, a, out L1_out, r2, b, out L2_out, r3, y, out L3_out);
            function_decision_of_ref(r1, a, ref L1_ref, r2, b, ref L2_ref, r3, y, ref L3_ref);
            Output(textBox12, L1_ret);
            Output(textBox11, L2_ret);
            Output(textBox10, L3_ret);
            Output(textBox9, L1_out);
            Output(textBox8, L2_out);
            Output(textBox7, L3_out);
            Output(textBox15, L1_ref);
            Output(textBox14, L2_ref);
            Output(textBox13, L3_ref);
            Text_write2(textBox12, textBox11, textBox10);
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            Task_condition2 f = new Task_condition2();
            this.Hide();
            f.ShowDialog();
        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Main f = new Main();
            this.Hide();
            f.ShowDialog();
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && textBox1.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-"))
                    e.Handled = true;
            }

            if (e.KeyChar.Equals((char)13))
                button3.Focus();
        }
        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && textBox2.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-"))
                    e.Handled = true;
            }

            if (e.KeyChar.Equals((char)13))
                button3.Focus();
        }
        private void textBox3_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && textBox3.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-"))
                    e.Handled = true;
            }

            if (e.KeyChar.Equals((char)13))
                button3.Focus();
        }
        private void textBox4_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && textBox4.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-"))
                    e.Handled = true;
            }

            if (e.KeyChar.Equals((char)13))
                button3.Focus();
        }
        private void textBox5_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && textBox5.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-"))
                    e.Handled = true;
            }

            if (e.KeyChar.Equals((char)13))
                button3.Focus();
        }
        private void textBox6_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && textBox6.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-"))
                    e.Handled = true;
            }

            if (e.KeyChar.Equals((char)13))
                button3.Focus();
        }
    }
}
