using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using UIGenerator.MailMan;

namespace UIGenerator
{
    public partial class uniteditor : Form
    {

        public string SavedPath;
        public string json;

        public List<String> issues = new List<String>();

        public List<String> UpgradeStringList = new List<String>();

        public List<String> m_UnitSkillString = new List<String>();

        public List<UnitChar> UnitCharList = new List<UnitChar>();

        public List<UnitPropertyNode> animationlist = new List<UnitPropertyNode>();

        public List<String> animationStringlist = new List<String>();

        public SkillListContanor sContanor = new SkillListContanor();

        public List<String> m_skillstring = new List<String>();

        SkillEffectContanor skContanor = new SkillEffectContanor();

        List<String> m_skilleffectstring = new List<String>();

        //
        public uniteditor()
        {
            InitializeComponent();
        }

        public void SetFile(String fileName)
        {


            System.IO.StreamReader sr ;


            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\SkillEffectlist.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["SkillEffect"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    SkillEffectNode node = new SkillEffectNode();

                    int EffectNum = Convert.ToInt32(itemObj["EffectNum"].ToString());
                    node.EffectNum = EffectNum;

                    string EffectName = itemObj["EffectName"].ToString();
                    node.EffectName = EffectName;

                    string EffectDiscription = itemObj["EffectDiscription"].ToString();
                    node.EffectDiscription = EffectDiscription;

                    m_skilleffectstring.Add(EffectName);

                    skContanor.SkillEffect.Add(node);

                }
                //listBox2.DataSource = m_skilleffectstring;

                sr.Close();
            }

            try
            {
                String json;

                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\SkillList.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                if (obj["SkillList"] == null)
                {

                }
                else
                {
                    JArray CharList = JArray.Parse(obj["SkillList"].ToString());
                    foreach (JObject itemObj in CharList)
                    {
                        Skill node = new Skill();

                        int skillNumber = Convert.ToInt32(itemObj["skillNumber"].ToString());
                        node.skillNumber = skillNumber;

                        string Title = itemObj["Title"].ToString();
                        node.Title = Title;

                        string describe = itemObj["describe"].ToString();
                        node.describe = describe;


                        if (itemObj["EffectList"] != null)
                        {
                            JArray UpgradeList = JArray.Parse(itemObj["EffectList"].ToString());
                            foreach (JObject upgradeNode in UpgradeList)
                            {
                                EffectSlotNode unode = new EffectSlotNode();

                                double EffectValue = Convert.ToDouble(upgradeNode["EffectValue"].ToString());
                                unode.EffectValue = EffectValue;

                                int EffectSlot = Convert.ToInt32(upgradeNode["EffectSlot"].ToString());
                                unode.EffectSlot = EffectSlot;


                                node.EffectList.Add(unode);
                            }

                        }

                        //

                        m_skillstring.Add(Title);

                        sContanor.SkillList.Add(node);

                    }
                    listBox4.DataSource = m_skillstring;

                }

                sr.Close();
            }
            catch
            {
                SaveFile2();

            }


            try
            {
                sr = new System.IO.StreamReader(fileName);
                json = sr.ReadToEnd();

                SavedPath = fileName;

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

                listBox1.DataSource = issues;

                sr.Close();
            }
            catch
            {

            }
            


            LoadAnimationfile();
        }

        public void SaveFile2()
        {
            {
                string jsonString = JsonConvert.SerializeObject(sContanor);


                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\SkillList.json", false))
                {
                    file.Write(jsonString);

                    file.Close();
                }
            }

        }

        public void LoadAnimationfile()
        {
            System.IO.StreamReader sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\CharAnimationInfo.json");
            json = sr.ReadToEnd();

            JObject obj = JObject.Parse(json);

            JArray CharList = JArray.Parse(obj["UnitProperty"].ToString());
            foreach (JObject itemObj in CharList)
            {
                UnitPropertyNode node = new UnitPropertyNode();

                int No = Convert.ToInt32(itemObj["No"].ToString());
                node.No = No;

                string FileName = itemObj["FileName"].ToString();
                node.FileName = FileName;

                string TargetName = itemObj["TargetName"].ToString();
                node.TargetName = TargetName;

                string Idle = itemObj["Idle"].ToString();
                node.Idle = Idle;

                string Walk = itemObj["Walk"].ToString();
                node.Walk = Walk;

                string Touch = itemObj["Touch"].ToString();
                node.Touch = Touch;

                string Spacial = itemObj["Spacial"].ToString();
                node.Spacial = Spacial;

                animationlist.Add(node);

                String NamePlace = "(" + No + ")" + TargetName + "/" + Idle;
                animationStringlist.Add(NamePlace);
            }

            listBox3.DataSource = animationStringlist;

            sr.Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            OpenFileDialog open = new OpenFileDialog();
            open.Filter = "JSON File(*.png)|*.png";
            open.Title = "Chose Png File";
            if (open.ShowDialog() == DialogResult.OK)
            {
                char_img.Text = open.FileName;
            }
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if(UnitCharList.Count >= select)
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
                pictureBox1.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" +"\\" + data.char_img);
                pictureBox2.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.unit_rankIcon);
                pictureBox3.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.char_icon);
                UpgradeStringList.Clear();
                for(int i = 0 ; i <data.UpgradeList.Count ; i++)
                {
                    String NodeName = "Level:\"" + data.UpgradeList[i].level + "\";" + "Cost:\"" + data.UpgradeList[i].Cost + "\";" + "dps:\"" + data.UpgradeList[i].dps + "\";";
                    UpgradeStringList.Add(NodeName);
                    UpgardeNode node = data.UpgradeList[i];

                    level.Text = data.UpgradeList[i].level.ToString();
                    Cost.Text = data.UpgradeList[i].Cost.ToString();
                    dps.Text = data.UpgradeList[i].dps.ToString();
                    HP.Text = data.UpgradeList[i].HP.ToString();

                    double dpsper = node.dps / node.Cost;

                    //dpspercost.Text = String.Format("{0:0}", dpsper);
                    dpspercost.Text = dpsper.ToString();
                }

                if (data.UpgradeList.Count != 0)
                {
                    // Change the DataSource.
                    listBox2.DataSource = null;
                    listBox2.DataSource = UpgradeStringList;
                }
                else
                {
                    listBox2.DataSource = null;

                    level.Text = "";
                    Cost.Text = "";
                    dps.Text = "";
                    dpspercost.Text = "DPS/COST (DPS 비용)";
                }

                m_UnitSkillString.Clear();
                for (int i = 0; i < data.Unitskilllist.Count; i++)
                {
                    Unitskill node = data.Unitskilllist[i];

                    String SkillName = "";
                    foreach (Skill Seffect in sContanor.SkillList)
                    {
                        if(Seffect.skillNumber == node.SkillNum)
                        {
                            SkillName = Seffect.Title;
                        }
                    }
                    m_UnitSkillString.Add("(" + node.SkillLevel + ")" + SkillName);

                    
                }
                listBox5.DataSource = null;
                listBox5.DataSource = m_UnitSkillString;



            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;

            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];
                data.unit_name = unit_name.Text;
                data.slot = Convert.ToInt32(slot.Text);
                data.gamemoney = Convert.ToInt32(gamemoney.Text);
                data.cash = Convert.ToInt32(cash.Text);
                data.unit_rankIcon = unit_rankIcon.Text;
                data.char_img = char_img.Text;
                data.char_icon = char_icon.Text;
                data.Ani_No = Convert.ToInt32(Ani_No.Text);
                data.rank = Convert.ToInt32(RankText.Text);
                issues[select] = data.unit_name + "(rank : " + data.rank.ToString() + ")";
                // Change the DataSource.
                listBox1.DataSource = null;
                listBox1.DataSource = issues;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            string newname = "새캐릭터";
            UnitChar node = new UnitChar();
            node.unit_name = newname;
            node.slot = UnitCharList.Count + 1;
            UnitCharList.Add(node);
            issues.Add(node.unit_name + "(rank : " + node.rank.ToString() + ")");

            // Change the DataSource.
            listBox1.DataSource = null;
            listBox1.DataSource = issues;
        }

        private void button1_Click(object sender, EventArgs e)
        {

            String NodeName = "Level:\"" + level.Text + "\";" + "Cost:\"" + Cost.Text + "\";" + "dps:\"" + dps.Text + "\";";
            UpgradeStringList.Add( NodeName);

            int select = listBox1.SelectedIndex;

            if (select == -1)
            {
                return;
            }
            if (UnitCharList.Count >= select)
            {
                if (level.Text == "" || Cost.Text == "" || dps.Text == "")
                    return;
                UnitChar data = UnitCharList[select];
                UpgardeNode node = new UpgardeNode();

                node.level = Convert.ToInt32(level.Text);
                node.Cost = Convert.ToDouble(Cost.Text);
                node.dps = Convert.ToDouble(dps.Text);
                data.UpgradeList.Add(node);
            }

            // Change the DataSource.
            listBox2.DataSource = null;
            listBox2.DataSource = UpgradeStringList;


        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];

                int select2 = listBox2.SelectedIndex;

                if (select2 == -1)
                    return;
                if (data.UpgradeList.Count >= select2)
                {
                    UpgardeNode node = data.UpgradeList[select2];
                    level.Text = node.level.ToString();
                    Cost.Text = node.Cost.ToString();
                    dps.Text = node.dps.ToString();
                    HP.Text = node.HP.ToString();

                    double dpsper =node.dps/node.Cost;

                    //dpspercost.Text = String.Format("{0:0}", dpsper);
                    dpspercost.Text = dpsper.ToString();
                }
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {

            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;

            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];

                int select2 = listBox2.SelectedIndex;

                if (select2 == -1)
                    return;

                if (data.UpgradeList.Count >= select2)
                {
                    
                    UpgardeNode node = data.UpgradeList[select2];
                    if (level.Text != "")
                        node.level = Convert.ToInt32(level.Text);
                    if (Cost.Text != "")
                        node.Cost = Convert.ToDouble(Cost.Text);
                    if (dps.Text != "")
                        node.dps = Convert.ToDouble(dps.Text);
                    if (HP.Text != "")
                        node.HP = Convert.ToInt32(HP.Text);

                    String NodeName = "Level:\"" + node.level + "\";" + "Cost:\"" + node.Cost + "\";" + "dps:\"" + node.dps + "\";";
                    UpgradeStringList[select2] = NodeName;
                }

              

                // Change the DataSource.
                listBox2.DataSource = null;
                listBox2.DataSource = UpgradeStringList;
            }
        }

        private void Onlyfloat_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!(char.IsDigit(e.KeyChar) || e.KeyChar == Convert.ToChar(Keys.Back) || e.KeyChar == '.'))
            {
                e.Handled = true;
            }
            else
            {
                if(e.KeyChar == '.')
                {
                    TextBox node = (TextBox)sender;

                    int firstCharacter = node.Text.IndexOf(".");

                    if (firstCharacter != -1)
                        e.Handled = true;
                }

            }
        }

        private void OnlyNumber_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!(char.IsDigit(e.KeyChar) || e.KeyChar == Convert.ToChar(Keys.Back)))
            {
                e.Handled = true;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {

          

            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                if (level.Text == "" || Cost.Text == "" || dps.Text == "")
                    return;
                UnitChar data = UnitCharList[select];

              
                if (data.UpgradeList.Count == 0)
                    return;

                UpgardeNode node = data.UpgradeList[data.UpgradeList.Count - 1];

                UpgardeNode NewNode = new UpgardeNode();

                NewNode.level = node.level + 1;
                NewNode.Cost = ((double)node.Cost * Convert.ToDouble(CostInc.Text));
                NewNode.dps = ((double)node.dps * Convert.ToDouble(dpsInc.Text));
                NewNode.HP = (int)(node.dps * Convert.ToDouble(HpInc.Text));
                data.UpgradeList.Add(NewNode);

                String NodeName = "Level:\"" + NewNode.level + "\";" + "Cost:\"" + NewNode.Cost + "\";" + "dps:\"" + NewNode.dps + "\";";
                UpgradeStringList.Add(NodeName);
            }

            // Change the DataSource.
            listBox2.DataSource = null;
            listBox2.DataSource = UpgradeStringList;
        }

        private void button3_Click(object sender, EventArgs e)
        {

            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;

            CharViewer editor = new CharViewer();
            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];
                editor.SetFile(data);
            }
            editor.Show();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            UnitList output = new UnitList();
            output.CharList = UnitCharList;
            string jsonString = JsonConvert.SerializeObject(output);


            using (System.IO.StreamWriter file = new System.IO.StreamWriter(SavedPath, false))
            {
                file.Write(jsonString);

                file.Close();
            }

        }

        private void button11_Click(object sender, EventArgs e)
        {
            OpenFileDialog open = new OpenFileDialog();
            open.Filter = "JSON File(*.png)|*.png";
            open.Title = "Chose Png File";
            if (open.ShowDialog() == DialogResult.OK)
            {
                unit_rankIcon.Text = open.FileName;
            }
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (animationlist.Count >= select)
            {
                UnitPropertyNode data = animationlist[select];

                No.Text = data.No.ToString();
                FileName.Text = data.FileName;
                TargetName.Text = data.TargetName;
                Idle.Text = data.Idle;
                Walk.Text = data.Walk;
                Touch.Text = data.Touch;
                Spacial.Text = data.Spacial;
            }
        }

        private void button10_Click(object sender, EventArgs e)
        {
            Ani_No.Text = No.Text;
        }

        private void listBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox4.SelectedIndex;

            if (select == -1)
                return;
            if (m_skillstring.Count >= select)
            {
                Skill data = sContanor.SkillList[select];
                SkillNum.Text = data.skillNumber.ToString();
                SkillTitle.Text = data.Title;
                SkillDescribe.Text = data.describe;

                String effectInfo = String.Empty;
                for(int i = 0  ; i < data.EffectList.Count() ; i ++)
                {
                    foreach( SkillEffectNode node in skContanor.SkillEffect)
                    {
                        if (data.EffectList[i].EffectSlot == node.EffectNum)
                        {
                            effectInfo += String.Format(node.EffectDiscription, data.EffectList[i].EffectValue);
                        }
                        
                    }
                    
                }
                EffectInfo.Text = effectInfo;
                
            }
        }

        private void listBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
            
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];

                int select5 = listBox5.SelectedIndex;

                if (select5 == -1)
                    return;
                if (m_skillstring.Count >= select5)
                {

                    Unitskill data5 = data.Unitskilllist[select5];
                    LevelLimit.Text = data5.SkillLevel.ToString();
                    UnitSkillnum.Text = data5.SkillNum.ToString();

                    String SkillName = "";
                    String effectInfo = String.Empty;
                    foreach (Skill Seffect in sContanor.SkillList)
                    {
                        if (Seffect.skillNumber == data5.SkillNum)
                        {
                            SkillName = Seffect.Title;

                            
                            for (int i = 0; i < Seffect.EffectList.Count(); i++)
                            {
                                foreach (SkillEffectNode node in skContanor.SkillEffect)
                                {
                                    if (Seffect.EffectList[i].EffectSlot == node.EffectNum)
                                    {
                                        effectInfo += String.Format(node.EffectDiscription, Seffect.EffectList[i].EffectValue);
                                    }
                                }

                            }
                        }
                    }

                    UnitEffectInfo.Text = effectInfo;
                    UnitSkillDescribe.Text = SkillName;
                }
            }
            
        }

        private void button13_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                UnitChar data = UnitCharList[select];

                Unitskill NNnode = new Unitskill();


                NNnode.SkillNum = Convert.ToInt32(UnitSkillnum.Text);
                NNnode.SkillLevel = Convert.ToInt32(LevelLimit.Text);

                data.Unitskilllist.Add(NNnode);

                m_UnitSkillString.Clear();

                for (int i = 0; i < data.Unitskilllist.Count; i++)
                {
                    Unitskill node = data.Unitskilllist[i];

                    String SkillName = "";
                    foreach (Skill Seffect in sContanor.SkillList)
                    {
                        if (Seffect.skillNumber == node.SkillNum)
                        {
                            SkillName = Seffect.Title;
                            
                        }
                    }
                    m_UnitSkillString.Add("(" + node.SkillLevel + ")" + SkillName);

                }

                listBox5.DataSource = null;
                listBox5.DataSource = m_UnitSkillString;
            }
           
        }

        private void button9_Click(object sender, EventArgs e)
        {
            int select = listBox4.SelectedIndex;

            if (select == -1)
                return;
            if (m_skillstring.Count >= select)
            {
                Skill data = sContanor.SkillList[select];
                UnitSkillnum.Text = data.skillNumber.ToString();
            }

             
        }

        private void uniteditor_Leave(object sender, EventArgs e)
        {

        }

        private void uniteditor_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                     "유닛 에디터",
                      MessageBoxButtons.YesNoCancel,
                      MessageBoxIcon.Information);
            if (resualt == DialogResult.No)
            {
            }
            else if (resualt == DialogResult.Yes)
            {
                UnitList output = new UnitList();
                output.CharList = UnitCharList;
                string jsonString = JsonConvert.SerializeObject(output);


                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SavedPath, false))
                {
                    file.Write(jsonString);

                    file.Close();
                }
            }
            else
            {
                e.Cancel = true;
            }
        }

        private void button14_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {

                UnitChar data = UnitCharList[select];

                int select5 = listBox5.SelectedIndex;

                if (select5 == -1)
                    return;

                if (data.UpgradeList.Count >= select5)
                {

                    Unitskill node = data.Unitskilllist[select5];
                    node.SkillNum = Convert.ToInt32(UnitSkillnum.Text);
                    node.SkillLevel = Convert.ToInt32(LevelLimit.Text);

                    String SkillName = "";
                    foreach (Skill Seffect in sContanor.SkillList)
                    {
                        if (Seffect.skillNumber == node.SkillNum)
                        {
                            SkillName = Seffect.Title;
                        }
                    }

                    String NodeName = "(" + node.SkillLevel + ")" + SkillName;
                    m_UnitSkillString[select5] = NodeName;
                }

             
                listBox5.DataSource = null;
                listBox5.DataSource = m_UnitSkillString;
            }
        }

        private void groupBox2_Enter(object sender, EventArgs e)
        {

        }
    }
}



