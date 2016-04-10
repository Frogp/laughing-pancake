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
    public partial class MonsterTool : Form
    {
        private MonsterInfo Info;
        private int listCnt;
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
        public MonsterTool()
        {
            InitializeComponent();
            InitImage();
            Info = new MonsterInfo();
            //this.TopMost = true;
            treeView1.Nodes.Add("Character");
            treeView1.Nodes[0].Nodes.Add("FIRE");
            treeView1.Nodes[0].Nodes.Add("WIND");
            treeView1.Nodes[0].Nodes.Add("WATER");
            treeView1.Nodes[0].Nodes.Add("LAND");

            listCnt = Info.ListCount();
            for (int i = 0; i < listCnt; i++)
            {
                Monster tmp = Info.GetCharacter(i);
                addFigure(tmp);
            }
        }
        private void InitImage()
        {
            pictureBox1.Load(@"C:\Users\junghan\Desktop\CreateTools\imageSample.png");
            pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog open = new OpenFileDialog();
            open.ShowDialog();
            string Path = open.FileName;
            imagePath = Path;
            //MessageBox.Show(Path);
            System.Drawing.Bitmap bitmap = new Bitmap(Path);
            pictureBox1.Image = bitmap;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            clearControls();
        }
        private void checkForFullOfInfo()
        {
            if (string.Equals(imagePath, "") || string.Equals(name, "") || string.Equals(index, "") || string.Equals(power, "") || string.Equals(defence, "") || string.Equals(speed, "") || string.Equals(strength, "") || string.Equals(property, ""))
            {
                MessageBox.Show("Some data may be empty PLZ retry it");
            }
            else
            {
                Monster tmp = new Monster(imagePath, name, index, power, defence, speed, strength, property);
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
                    foreach (int i in checkedListBox1.CheckedIndices)
                    {
                        checkedListBox1.SetItemCheckState(i, CheckState.Unchecked);
                    }
                }
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            index = textBox_index.Text;
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            name = textBox_name.Text;
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            power = textBox_power.Text;
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
            defence = textBox_defence.Text;
        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {
            speed = textBox_speed.Text;
        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {
            strength = textBox_strength.Text;
        }

        private void textBox7_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox8_TextChanged(object sender, EventArgs e)
        {

        }
        private void addFigure(Monster figure)
        {
            TreeNodeCollection nodesToAdd = null;
            //MessageBox.Show(figure.Property);

            if (int.Parse(figure.Property) + 1 == FIRE)
            {
                nodesToAdd = treeView1.Nodes[0].Nodes[0].Nodes;
            }
            else if (int.Parse(figure.Property) + 1 == WIND)
            {
                nodesToAdd = treeView1.Nodes[0].Nodes[1].Nodes;
            }
            else if (int.Parse(figure.Property) + 1 == LAND)
            {
                nodesToAdd = treeView1.Nodes[0].Nodes[2].Nodes;
            }
            else if (int.Parse(figure.Property) + 1 == WATER)
            {
                nodesToAdd = treeView1.Nodes[0].Nodes[3].Nodes;
            }
            string s;
            s = figure.Index + ":" + figure.Name;
            nodesToAdd.Add(s);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            MessageBox.Show("OK Save all");
            Info.JsonWrite();
        }

        private void checkedListBox1_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            foreach (int i in checkedListBox1.CheckedIndices)
            {
                property = "" + i;
            }
        }
        private void button3_Click(object sender, EventArgs e)
        {
            TreeNode node = treeView1.SelectedNode;
            string[] words = node.Text.Split(':');
            Info.removeMonster(words[0], listCnt);
            node.Remove();
            return;
        }
        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {
            TreeNode node = treeView1.SelectedNode;
            string[] words = node.Text.Split(':');
            listCnt = Info.ListCount();
            for (int i = 0; i < listCnt; i++)
            {
                Monster tmp = Info.GetCharacter(i);
                if (words[0] == tmp.Index)
                {
                    textBox_index.Text = tmp.Index;
                    textBox_name.Text = tmp.Name;
                    textBox_defence.Text = tmp.Defence;
                    textBox_power.Text = tmp.Power;
                    textBox_speed.Text = tmp.Speed;
                    textBox_strength.Text = tmp.Strength;
                    pictureBox1.Load(tmp.ImagePath);
                    pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                    for (int j = 0; j < 4; j++)
                    {
                        if (j == int.Parse(tmp.Property)) checkedListBox1.SetItemCheckState(j, CheckState.Checked);
                        else checkedListBox1.SetItemCheckState(j, CheckState.Unchecked);
                    }
                    break;
                }
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Manual menu = new Manual();
            menu.ShowDialog();
        }
    }
}
