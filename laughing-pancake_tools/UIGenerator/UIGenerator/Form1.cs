using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using UIGenerator.Editor;

namespace UIGenerator
{
    public partial class Form1 : Form
    {
        public string json;
        public Form1()
        {
            InitializeComponent();
        }
        cocosCCPgen gen = new cocosCCPgen();

        private void Form1_Load(object sender, EventArgs e)
        {
            string gamePath;

            ToolSetting tools = SettingSingleton.Instance().m_toolsetting;

            try
            {
                System.IO.StreamReader sr = new System.IO.StreamReader("ToolData.json");
                json = sr.ReadToEnd();
                sr.Close();
                JObject obj = JObject.Parse(json);

                gamePath = obj["Projectpath"].ToString();
                tools.Projectpath = gamePath;

            }
            catch
            {
                FolderBrowserDialog dialog = new FolderBrowserDialog();
                dialog.ShowDialog();
                gamePath = dialog.SelectedPath;
                tools.Projectpath = gamePath;

                string jsonString = JsonConvert.SerializeObject(tools);


                using (System.IO.StreamWriter file = new System.IO.StreamWriter(System.IO.Directory.GetCurrentDirectory() + "ToolData.json", false))
                {
                    file.Write(jsonString);
                }

            }

            
            textBox5.Text = gamePath;

            textBox2.Text = gamePath + "\\Resources";

            textBox3.Text = gamePath + "\\AutoClass";

            textBox4.Text = gamePath + "\\Resources\\data\\UnitList.json";


        }

        private void button2_Click(object sender, EventArgs e)
        {

            System.IO.StreamReader sr = new System.IO.StreamReader(textBox1.Text);
            json = sr.ReadToEnd();    

            JObject obj = JObject.Parse(json);

            gen.AnimationLoader(obj);
            listBox1.DataSource = gen.AnimationList;

            gen.widgetrootoader(obj);
            gen.PathGenStart("");


            string searchText = ".json";
            string ClassName = textBox1.Text.Substring(0, textBox1.Text.IndexOf(searchText));
            using (System.IO.StreamWriter file = new System.IO.StreamWriter( ClassName + ".h" , true))
            {
                file.WriteLine(gen.ClassHaderGenerator());
            }

            using (System.IO.StreamWriter file = new System.IO.StreamWriter(ClassName + ".cpp", true))
            {
                file.WriteLine(gen.ClassCppGenerator());
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog open = new OpenFileDialog();
            open.Filter = "JSON File(*.json)|*.json";
            open.Title = "Chose Json File";
            if(open.ShowDialog() == DialogResult.OK)
            {
                textBox1.Text = open.FileName;
                gen.filename = open.SafeFileName;
                   
            }

        }

        private void button3_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog dialog = new FolderBrowserDialog();
            dialog.ShowDialog();
            textBox2.Text = dialog.SelectedPath;


        }

        private void button4_Click(object sender, EventArgs e)
        {
            System.IO.DirectoryInfo di = new System.IO.DirectoryInfo(textBox2.Text);

            foreach (System.IO.FileInfo f in di.GetFiles())
            {
                if (f.Extension == ".json")
                {
                    cocosCCPgen gen = new cocosCCPgen();
                    System.IO.StreamReader sr = new System.IO.StreamReader(f.FullName);
                    json = sr.ReadToEnd();

                    JObject obj = JObject.Parse(json);

                    gen.AnimationLoader(obj);
                    //listBox1.DataSource = gen.AnimationList;

                    gen.widgetrootoader(obj);
                    gen.PathGenStart("");
                    //listBox2.DataSource = gen.WidgetList;

                    gen.filename = f.Name;

                    gen.AbsolutOutputPath = textBox3.Text;

                    string searchText = ".";
                    string ClassName = f.Name.Substring(0, f.Name.IndexOf(searchText));


                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(textBox3.Text + "/" + ClassName + ".h", false))
                    {
                        file.Write(gen.ClassHaderGenerator());
                    }

                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(textBox3.Text + "/" + ClassName + ".cpp", false))
                    {
                        file.Write(gen.ClassCppGenerator());
                    }

                }
                listBox1.Items.Add(f.Name + f.Extension);
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog dialog = new FolderBrowserDialog();
            dialog.ShowDialog();
            textBox3.Text = dialog.SelectedPath;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            uniteditor editor = new uniteditor();
            editor.SetFile(textBox4.Text);
            editor.Show();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            OpenFileDialog open = new OpenFileDialog();
            open.Filter = "JSON File(*.json)|*.json";
            open.Title = "Chose Json File";
            if (open.ShowDialog() == DialogResult.OK)
            {
                textBox4.Text = open.FileName;
            }

        }

        private void button9_Click(object sender, EventArgs e)
        {
            SkillEditor editor = new SkillEditor();
            editor.Show();
        }

        private void button10_Click(object sender, EventArgs e)
        {
            TitleEditor editor = new TitleEditor();
            editor.Show();
        }

        private void button11_Click(object sender, EventArgs e)
        {
            GoodsEditor editor = new GoodsEditor();
            editor.Show();
        }

        private void button12_Click(object sender, EventArgs e)
        {
            dailyRwardEditor editor = new dailyRwardEditor();
            editor.Show();
        }

        private void button13_Click(object sender, EventArgs e)
        {
            QuestData editor = new QuestData();
            editor.Show();
        }

        private void button14_Click(object sender, EventArgs e)
        {
            WeeklyReardEditor editor = new WeeklyReardEditor();
            editor.Show();
        }

        private void button15_Click(object sender, EventArgs e)
        {
            Synthesis editor = new Synthesis();
            editor.Show();
        }

       
    }
}
