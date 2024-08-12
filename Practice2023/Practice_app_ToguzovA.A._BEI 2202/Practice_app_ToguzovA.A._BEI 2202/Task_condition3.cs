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
    public partial class Task_condition3 : Form
    {
        public Task_condition3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Calculation_of_task3 f = new Calculation_of_task3();
            this.Hide();
            f.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Main f = new Main();
            this.Hide();
            f.ShowDialog();
        }
    }
}
