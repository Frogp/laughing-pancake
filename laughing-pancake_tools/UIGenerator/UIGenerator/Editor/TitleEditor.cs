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

namespace UIGenerator
{
    public partial class TitleEditor : Form
    {
        public SkillListContanor sContanor = new SkillListContanor();

        public List<String> m_skillstring = new List<String>();


        SkillEffectContanor skContanor = new SkillEffectContanor();

        List<String> m_skilleffectstring = new List<String>();

        public ChrTitleContanor CharTitleCon = new ChrTitleContanor();

        List<String> m_CharTitleConstring = new List<String>();

        public TitleEditor()
        {
            InitializeComponent();


            System.IO.StreamReader sr;

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

            try
            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Titlelist.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["Titlelist"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    ChrTitle node = new ChrTitle();

                    int ChrTitleNumber = Convert.ToInt32(itemObj["ChrTitleNumber"].ToString());
                    node.ChrTitleNumber = ChrTitleNumber;

                    string Title = itemObj["Title"].ToString();
                    node.Title = Title;

                    int skillNumber = Convert.ToInt32(itemObj["skillNumber"].ToString());
                    node.skillNumber = skillNumber;

                    CharTitleCon.Titlelist.Add(node);


                    m_CharTitleConstring.Add(node.Title);
                }
                //listBox2.DataSource = m_skilleffectstring;

                listBox5.DataSource = null;
                listBox5.DataSource = m_CharTitleConstring;

                sr.Close();
            }
            catch
            {
                SaveFile();
            }
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
                for (int i = 0; i < data.EffectList.Count(); i++)
                {
                    foreach (SkillEffectNode node in skContanor.SkillEffect)
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

        private void button13_Click(object sender, EventArgs e)
        {
            
            ChrTitle NNnode = new ChrTitle();


            NNnode.ChrTitleNumber = CharTitleCon.Titlelist.Count+1;
            NNnode.Title = TitleName.Text;
            NNnode.skillNumber = Convert.ToInt32(UnitSkillnum.Text);

            CharTitleCon.Titlelist.Add(NNnode);

            m_CharTitleConstring.Add(NNnode.Title);

            listBox5.DataSource = null;
            listBox5.DataSource = m_CharTitleConstring;
            
        }


        public void SaveFile()
        {
            {
                string jsonString = JsonConvert.SerializeObject(CharTitleCon);


                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Titlelist.json", false))
                {
                    file.Write(jsonString);
                    file.Close();
                }
            }

        }

        private void button14_Click(object sender, EventArgs e)
        {
            int select = listBox5.SelectedIndex;

            if (select == -1)
                return;
            if (CharTitleCon.Titlelist.Count >= select)
            {
                ChrTitle NNnode = CharTitleCon.Titlelist[select];

                NNnode.ChrTitleNumber = Convert.ToInt32(TitleNumber.Text);
                NNnode.Title = TitleName.Text;
                NNnode.skillNumber = Convert.ToInt32(UnitSkillnum.Text);

                m_CharTitleConstring[select] = (NNnode.Title);

                listBox5.DataSource = null;
                listBox5.DataSource = m_CharTitleConstring;
            }
        }

        private void listBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox5.SelectedIndex;

            if (select == -1)
                return;
            if (CharTitleCon.Titlelist.Count >= select)
            {
                ChrTitle NNnode = CharTitleCon.Titlelist[select];

                TitleNumber.Text = NNnode.ChrTitleNumber.ToString();
                TitleName.Text = NNnode.Title.ToString();
                UnitSkillnum.Text = NNnode.skillNumber.ToString();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            SaveFile();
        }

        private void TitleEditor_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                     "타이틀 에디터",
                      MessageBoxButtons.YesNoCancel,
                      MessageBoxIcon.Information);
            if (resualt == DialogResult.No)
            {
            }
            else if (resualt == DialogResult.Yes)
            {
                SaveFile();
            }
            else
            {
                e.Cancel = true;
            }
        }
        
    }
}
