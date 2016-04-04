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
using UIGenerator.MailMan;

namespace UIGenerator.Editor
{
    public partial class Synthesis : Form
    {

        public List<String> issues = new List<String>();

        public List<UnitChar> UnitCharList = new List<UnitChar>();

        public List<String> SynthesisListstring = new List<String>();

        public List<SynthesisNode> SynthesisList = new List<SynthesisNode>();

        public List<String> upgradeList = new List<String>();

        public Synthesis()
        {
            InitializeComponent();
        }

        
        private void Synthesis_Load(object sender, EventArgs e)
        {
            System.IO.StreamReader sr;
            String json;

            {

                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\UnitList.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["CharList"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    UnitChar node = new UnitChar();
                    string unit_name = itemObj["unit_name"].ToString();

                    node.unit_name = unit_name;

                    int slot = Convert.ToInt32(itemObj["slot"].ToString());
                    node.slot = slot;

                    int gamemoney = Convert.ToInt32(itemObj["gamemoney"].ToString());
                    node.gamemoney = gamemoney;

                    int cash = Convert.ToInt32(itemObj["cash"].ToString());
                    node.cash = cash;



                    if (itemObj["Ani_No"] != null)
                    {
                        int Ani_No = Convert.ToInt32(itemObj["Ani_No"].ToString());
                        node.Ani_No = Ani_No;
                    }

                    string unit_rankIcon = itemObj["unit_rankIcon"].ToString();
                    node.unit_rankIcon = unit_rankIcon;

                    string char_img = itemObj["char_img"].ToString();
                    node.char_img = char_img;
                    string char_icon = itemObj["char_icon"].ToString();
                    node.char_icon = char_icon;

                    string ranktext = itemObj["rank"].ToString();
                    node.rank = Convert.ToInt32(ranktext);

                    if (itemObj["UpgradeList"] != null)
                    {
                        JArray UpgradeList = JArray.Parse(itemObj["UpgradeList"].ToString());
                        foreach (JObject upgradeNode in UpgradeList)
                        {
                            UpgardeNode unode = new UpgardeNode();

                            int level = Convert.ToInt32(upgradeNode["level"].ToString());
                            unode.level = level;

                            double Cost = Convert.ToDouble(upgradeNode["Cost"].ToString());
                            unode.Cost = Cost;

                            double dps = Convert.ToDouble(upgradeNode["dps"].ToString());
                            unode.dps = dps;

                            int HP = Convert.ToInt32(upgradeNode["HP"].ToString());
                            unode.HP = HP;

                            node.UpgradeList.Add(unode);
                        }
                    }

                    if (itemObj["Unitskilllist"] != null)
                    {
                        JArray Unitskilllist = JArray.Parse(itemObj["Unitskilllist"].ToString());
                        foreach (JObject upgradeNode in Unitskilllist)
                        {
                            Unitskill unode = new Unitskill();

                            int SkillLevel = Convert.ToInt32(upgradeNode["SkillLevel"].ToString());
                            unode.SkillLevel = SkillLevel;

                            int SkillNum = Convert.ToInt32(upgradeNode["SkillNum"].ToString());
                            unode.SkillNum = SkillNum;

                            node.Unitskilllist.Add(unode);
                        }
                    }
                    issues.Add(unit_name + "(rank : " + node.rank.ToString() + ")");
                    UnitCharList.Add(node);

                }
            }

            
            {
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Synthesis.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                if (obj["SynthesisNode"] == null)
                {

                }
                else
                {
                    JArray CharList = JArray.Parse(obj["SynthesisNode"].ToString());
                    foreach (JObject itemObj in CharList)
                    {
                        SynthesisNode node = new SynthesisNode();

                        int index = Convert.ToInt32(itemObj["index"].ToString());
                        node.index = index;

                        string name = itemObj["name"].ToString();
                        node.name = name;


                        if (itemObj["UpgradList"] != null)
                        {
                            JArray UpgradeList = JArray.Parse(itemObj["UpgradList"].ToString());
                            foreach (JObject upgradeNode in UpgradeList)
                            {
                                CharGradeNode unode = new CharGradeNode();

                                int _index = Convert.ToInt32(upgradeNode["index"].ToString());
                                unode.index = _index;

                                int charslot = Convert.ToInt32(upgradeNode["charslot"].ToString());
                                unode.charslot = charslot;

                                int cost = Convert.ToInt32(upgradeNode["cost"].ToString());
                                unode.cost = cost;

                                node.UpgradList.Add(unode);
                            }

                        }
                        SynthesisList.Add(node);
                        SynthesisListstring.Add(String.Format("({0})" + node.name, node.index));

                    }
                    

                    listBox2.DataSource = null;
                    listBox2.DataSource = SynthesisListstring;

                }

                sr.Close();
            }



            listBox1.DataSource = issues;

            sr.Close();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];
                unit_name.Text = data.unit_name.ToString();
                slot.Text = data.slot.ToString();
                gamemoney.Text = data.gamemoney.ToString();
                cash.Text = data.cash.ToString();
                unit_rankIcon.Text = data.unit_rankIcon.ToString();
                char_img.Text = data.char_img.ToString();
                Ani_No.Text = data.Ani_No.ToString();
                char_icon.Text = data.char_icon;
                RankText.Text = data.rank.ToString();
                //SettingSingleton.Instance().m_toolsetting
                string path = SettingSingleton.Instance().m_toolsetting.Projectpath;
                pictureBox1.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.char_img);
                pictureBox2.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.unit_rankIcon);
                pictureBox3.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.char_icon);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            SynthesisNode NNnode = new SynthesisNode();


            NNnode.index = SynthesisList.Count + 1;
            NNnode.name = synthesisName.Text;

            SynthesisList.Add(NNnode);

            SynthesisListstring.Add(String.Format("({0})" + NNnode.name, NNnode.index));

            listBox2.DataSource = null;
            listBox2.DataSource = SynthesisListstring;
        }

        private void button5_Click(object sender, EventArgs e)
        {

            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (SynthesisList.Count >= select)
            {
                SynthesisNode data = SynthesisList[select];
                SynthesisList[select] = data;
                SynthesisListstring[select] = (String.Format("({0})" + data.name, data.index));


                CharGradeNode NNnode = new CharGradeNode();
                
                NNnode.index = data.UpgradList.Count + 1;
                NNnode.charslot = Convert.ToInt32( upgradeSlot.Text );
                NNnode.cost = Convert.ToInt32(SynthesisCost.Text);

                data.UpgradList.Add(NNnode);
                upgradeList.Add("(" + upgraderank.Text + ")" + upgradeName.Text);

                listBox3.DataSource = null;
                listBox3.DataSource = upgradeList;
            }

        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (SynthesisList.Count >= select)
            {
                SynthesisNode data = SynthesisList[select];
                synthesisindex.Text = data.index.ToString();
                synthesisName.Text = data.name.ToString();


                upgradeList.Clear();

                

                foreach (CharGradeNode upnode in data.UpgradList)
                {
                    foreach (UnitChar chr in UnitCharList)
                    {
                        if (chr.slot == upnode.charslot)
                        {
                            upgradeList.Add("("+upnode.index.ToString()+")" + chr.unit_name.ToString());
                            break;
                        }
                    }
                    
                }
                listBox3.DataSource = null;
                listBox3.DataSource = upgradeList;

            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (SynthesisList.Count >= select)
            {
                SynthesisNode data = SynthesisList[select];
                data.name = synthesisName.Text;
                SynthesisList[select] = data;
                SynthesisListstring[select] = (String.Format("({0})" + data.name, data.index));
            }

            listBox2.DataSource = null;
            listBox2.DataSource = SynthesisListstring;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];
                upgradeName.Text = data.unit_name.ToString();
                upgradeSlot.Text = data.slot.ToString();
                upgraderank.Text = data.rank.ToString();
            }
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (SynthesisList.Count >= select)
            {
                SynthesisNode data = SynthesisList[select];
                data.name = synthesisName.Text;
                SynthesisList[select] = data;
                SynthesisListstring[select] = (String.Format("({0})" + data.name, data.index));

                int select3 = listBox3.SelectedIndex;

                if (select3 == -1)
                    return;
                if (data.UpgradList.Count >= select3)
                {
                    CharGradeNode upnode = data.UpgradList[select3];
                    foreach (UnitChar chr in UnitCharList)
                    {
                        if(chr.slot == upnode.charslot)
                        {
                            upgradeName.Text = chr.unit_name.ToString();
                            upgradeSlot.Text = chr.slot.ToString();
                            upgraderank.Text = chr.rank.ToString();
                            SynthesisCost.Text = upnode.cost.ToString();
                            break;
                        }
                    }
                    
                }

               
                listBox3.DataSource = null;
                listBox3.DataSource = upgradeList;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (SynthesisList.Count >= select)
            {
                SynthesisNode data = SynthesisList[select];
                data.name = synthesisName.Text;
                SynthesisList[select] = data;
                SynthesisListstring[select] = (String.Format("({0})" + data.name, data.index));

                int select3 = listBox3.SelectedIndex;

                if (select3 == -1)
                    return;
                if (data.UpgradList.Count >= select3)
                {
                    data.UpgradList.RemoveAt(select3);
                    upgradeList.RemoveAt(select3);
                }


                listBox3.DataSource = null;
                listBox3.DataSource = upgradeList;
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            SynthesisContanor output = new SynthesisContanor();
            output.SynthesisNode = SynthesisList;
            string jsonString = JsonConvert.SerializeObject(output);


            using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Synthesis.json", false))
            {
                file.Write(jsonString);

                file.Close();
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (SynthesisList.Count >= select)
            {
                SynthesisNode data = SynthesisList[select];
                SynthesisList[select] = data;


                int select3 = listBox3.SelectedIndex;

                if (select3 == -1)
                    return;
                if (data.UpgradList.Count >= select3)
                {
                    data.UpgradList[select3].charslot = Convert.ToInt32(upgradeSlot.Text);
                    data.UpgradList[select3].cost = Convert.ToInt32(SynthesisCost.Text);
                    upgradeList[select3] = "(" + upgraderank.Text + ")" + upgradeName.Text;
                }


                listBox3.DataSource = null;
                listBox3.DataSource = upgradeList;
            }
        }

    }
}
