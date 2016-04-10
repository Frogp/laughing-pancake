using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CreateTools
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            initImages();
        }
        void initImages()
        {
            pictureBox1.Load(@"C:\Users\junghan\Desktop\CreateTools\character.png");
            pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
            pictureBox2.Load(@"C:\Users\junghan\Desktop\CreateTools\monster.png");
            pictureBox2.SizeMode = PictureBoxSizeMode.StretchImage;
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            CharacterTool ct = new CharacterTool();
            ct.ShowDialog();
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            MonsterTool mt = new MonsterTool();
            mt.ShowDialog();
        }

    }
}
