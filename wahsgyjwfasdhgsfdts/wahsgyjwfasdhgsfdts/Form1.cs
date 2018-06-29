using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace wahsgyjwfasdhgsfdts
{
    public partial class Form1 : Form
    {
        int num_clicks = 0;
        public Form1()

        {
            InitializeComponent();
        }

        private void button_1click(object sender, EventArgs e)
        {
            num_clicks++;
            label1.Text = "" + num_clicks;
        }
        private void Button_2click(object sender, EventArgs e)    }

}
