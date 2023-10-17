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
    public partial class Calculation_of_task1 : Form
    {
        public Calculation_of_task1()
        {
            InitializeComponent();
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            double z_out, z_ref = 0;
            try
            {
                double x = Input(textBox1);
                double z_ret = function_return(x);
                function_out(x, out z_out);
                function_ref(x, ref z_ref);
                Output(textBox2, z_ret);
                Output(textBox3, z_out);
                Output(textBox4, z_ref);
                Text_write(textBox2, textBox3, textBox4);
            }
            catch (Exception ex)
            {
                errorProvider1.SetError(textBox1, "Вводите только числа в поля для ввода данных");
                MessageBox.Show("В поля для ввода данных необходимо записывать только числа.");
                return;
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            Task_condition1 f = new Task_condition1();
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
                button3.Focus(); //Фокусировка на кнопке вычисления 
            }
        }
    
}
