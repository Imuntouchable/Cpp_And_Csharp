using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practice_app_ToguzovA.A._BEI_2202
{
    public partial class Main : Form
    {
        public Main()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Task_condition1 f = new Task_condition1();
            this.Hide();
            f.ShowDialog();
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
            Task_condition3 f = new Task_condition3();
            this.Hide();
            f.ShowDialog();
        }
    }
}
