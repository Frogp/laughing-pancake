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
    public partial class CharacterTool : Form
    {
        private CharacterInfo Info;
        private int listCnt;
        private string imagePath;
        private string name;
        private string index;
        private string power;
        private string defence;
        private string speed;
        private string strength;
        public CharacterTool()
        {
            InitializeComponent();
            InitImage();
            Info = new CharacterInfo();
            listCnt = Info.ListCount();
            //listBox1.Items.Add("1");
            //listBox1.Items.Add("2");
            //listBox1.Items.Add("3");
            for (int i = 0; i < listCnt; i++)
            {
                Character tmp = Info.GetCharacter(i);
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
            System.Drawing.Bitmap bitmap = new Bitmap(Path);
            pictureBox1.Image = bitmap;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            clearControls();
        }
        private void checkForFullOfInfo()
        {
            if (string.Equals(imagePath, "") || string.Equals(name, "") || string.Equals(index, "") || string.Equals(power, "") || string.Equals(defence, "") || string.Equals(speed, "") || string.Equals(strength, ""))
            {
                MessageBox.Show("Some data may be empty PLZ retry it");
            }
            else
            {
                Character tmp = new Character(imagePath, name, index, power, defence, speed, strength);
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
            }
        }

        private void textBox_index_TextChanged(object sender, EventArgs e)
        {
            index = textBox_index.Text;
        }

        private void textBox_name_TextChanged(object sender, EventArgs e)
        {
            name = textBox_name.Text;
        }

        private void textBox_power_TextChanged(object sender, EventArgs e)
        {
            power = textBox_power.Text;
        }

        private void textBox_defence_TextChanged(object sender, EventArgs e)
        {
            defence = textBox_defence.Text;
        }

        private void textBox_speed_TextChanged(object sender, EventArgs e)
        {
            speed = textBox_speed.Text;
        }

        private void textBox_strength_TextChanged(object sender, EventArgs e)
        {
            strength = textBox_strength.Text;
        }
        private void addFigure(Character figure)
        {
            string s;
            s = figure.Index + ":" + figure.Name;
            listBox1.Items.Add(s);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            MessageBox.Show("OK Save all");
            Info.JsonWrite();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                string[] words = listBox1.SelectedItem.ToString().Split(':');

                listCnt = Info.ListCount();
                for (int i = 0; i < listCnt; i++)
                {
                    Character tmp = Info.GetCharacter(i);
                    if (words[0] == tmp.Index)
                    {
                        Info.removeMonster(words[0], listCnt);

                        try
                        {
                            if (listBox1.SelectedIndex >= 0)
                            {
                                listBox1.Items.RemoveAt(listBox1.SelectedIndex);
                            }
                        }
                        catch (Exception e1)
                        {
                            Console.WriteLine(e1);
                        }
                        break;
                    }
                }
            }
            catch (Exception e1)
            {
                Console.WriteLine(e1);
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Manual menu = new Manual();
            menu.ShowDialog();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            //if ((string)listBox1.SelectedItem == "Two")
                //MessageBox.Show((string)listBox1.SelectedItem);
                string[] words = listBox1.SelectedItem.ToString().Split(':');
                listCnt = Info.ListCount();
                for (int i = 0; i < listCnt; i++)
                {
                    Character tmp = Info.GetCharacter(i);
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
                        break;
                    }
                }
        }
    }
}
