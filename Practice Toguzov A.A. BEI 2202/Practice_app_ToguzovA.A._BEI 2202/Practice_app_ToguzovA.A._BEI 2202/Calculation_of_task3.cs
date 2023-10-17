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
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Practice_app_ToguzovA.A._BEI_2202
{
    public partial class Calculation_of_task3 : Form
    {
        public Calculation_of_task3()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Task_condition3 f = new Task_condition3();
            this.Hide();
            f.ShowDialog();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double a, x, y;
            try
            {
                a = Input(textBox1);
            }
            catch (Exception ex)
            {
                errorProvider1.SetError(textBox1, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                x = Input(textBox2);
            }
            catch (Exception ex)
            {
                errorProvider2.SetError(textBox2, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            try
            {
                y = Input(textBox3);
            }
            catch (Exception ex)
            {
                errorProvider3.SetError(textBox3, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
            Output(textBox4, function_vichislenie(a, x, y));
            Text_write3(textBox4);
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
    }
}
