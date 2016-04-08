using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Net.Json;
namespace CreateTool
{
    public partial class CharacterTool : Form
    {
        private CharacterInfo Info;
        private string imagePath;
        private string name;
        private string index;
        private string power;
        private string defence;
        private string speed;
        private string strength;
        private string property;
        private const int FIRE = 1;
        private const int WIND = 2;
        private const int WATER = 3;
        private const int LAND = 4;
        public CharacterTool()
        {
            InitializeComponent();
            InitImage();
            Info = new CharacterInfo();
            this.TopMost = true;
            treeView.Nodes.Add("Character");
            treeView.Nodes[0].Nodes.Add("FIRE");
            treeView.Nodes[0].Nodes.Add("WIND");
            treeView.Nodes[0].Nodes.Add("WATER");
            treeView.Nodes[0].Nodes.Add("LAND");

            int listCnt = Info.ListCount();
            for (int i = 0; i < listCnt; i++)
            {
                Character tmp = Info.getCharacter(i);
                addFigure(tmp);
            }
        }
        private void InitImage()
        {
            try
            {
                pictureBox.Load(@"C:\Users\junghan\Desktop\WorkSpace\SSM Game Developers\C#\imageSample.png");
                pictureBox.SizeMode = PictureBoxSizeMode.StretchImage;
            }
            catch
            {

            }
            
        }
        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void checkedListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            foreach (int i in checkedListBox.CheckedIndices)
            {
                property = "" + i;
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog open = new OpenFileDialog();
            open.ShowDialog();
            string Path = open.FileName;
            imagePath = Path;
            //MessageBox.Show(Path);
            System.Drawing.Bitmap bitmap = new Bitmap(Path);
            pictureBox.Image = bitmap;
        }

        private void button_save_Click(object sender, EventArgs e)
        {
            MessageBox.Show("저장되었습니다.");
            clearControls();
        }
        private void checkForFullOfInfo()
        {
            if (string.Equals(imagePath, "") || string.Equals(name, "") || string.Equals(index, "") || string.Equals(power, "") || string.Equals(defence, "") || string.Equals(speed, "") || string.Equals(strength, "") || string.Equals(property, ""))
            {
                MessageBox.Show("데이터를 채우세요.");
            }
            else
            {
                Character tmp = new Character(imagePath, name, index, power, defence, speed, strength, property);
                Info.AddCharacterInfo(tmp);
                addFigure(tmp);
            }
        }

        private void clearControls()
        {
            checkForFullOfInfo();
            foreach (Control ctl in this.Controls)
            {
                if (typeof(System.Windows.Forms.TextBox) == ctl.GetType())
                {
                    ctl.Text = null;
                }
                if (typeof(System.Windows.Forms.PictureBox) == ctl.GetType())
                {
                    InitImage();
                }
                if (typeof(System.Windows.Forms.CheckedListBox) == ctl.GetType())
                {
                    foreach (int i in checkedListBox.CheckedIndices)
                    {
                        checkedListBox.SetItemCheckState(i, CheckState.Unchecked);
                    }
                }
            }
        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {
            index = textBox_index.Text;
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
            power = textBox_power.Text;
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            defence = textBox_defence.Text;
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            speed = textBox_speed.Text;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            strength = textBox_strength.Text;
        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {
            name = textBox_name.Text;
        }
        private void addFigure(Character figure)
        {
            TreeNodeCollection nodesToAdd = null;
            //MessageBox.Show(figure.Property);

            if (int.Parse(figure.Property) + 1 == FIRE)
            {
                nodesToAdd = treeView.Nodes[0].Nodes[0].Nodes;
            }
            else if (int.Parse(figure.Property) + 1 == WIND)
            {
                nodesToAdd = treeView.Nodes[0].Nodes[1].Nodes;
            }
            else if (int.Parse(figure.Property) + 1 == WATER)
            {
                nodesToAdd = treeView.Nodes[0].Nodes[2].Nodes;
            }
            else if (int.Parse(figure.Property) + 1 == LAND)
            {
                nodesToAdd = treeView.Nodes[0].Nodes[3].Nodes;
            }
            string s;
            s = figure.Name;
            nodesToAdd.Add(s);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Info.JsonWrite();
        }
    }
}
