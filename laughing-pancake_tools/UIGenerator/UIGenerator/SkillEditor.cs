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
    public partial class SkillEditor : Form
    {
        public SkillEditor()
        {
            InitializeComponent();
        }


        SkillEffectContanor skContanor = new SkillEffectContanor();

        List<String> m_skilleffectstring = new List<String>();

        SkillListContanor sContanor = new SkillListContanor();

        List<String> m_skillstring = new List<String>();



        List<String> m_SkillHaveEffect = new List<String>();

        private void SkillEditor_Load(object sender, EventArgs e)
        {
            System.IO.StreamReader sr;
            try
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
                listBox2.DataSource = m_skilleffectstring;

                sr.Close();

            }
            catch
            {
                SaveFile();
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
                    listBox1.DataSource = m_skillstring;

                }
                
                sr.Close();
            }
            catch
            {
                SaveFile2();
                
            }
            
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (m_skilleffectstring.Count > select)
            {
                SkillEffectNode node = skContanor.SkillEffect[select];
                node.EffectName = EffectName.Text;
                node.EffectDiscription = EffectDiscription.Text;
                m_skilleffectstring[select] = node.EffectName;

                // Change the DataSource.
                listBox2.DataSource = null;
                listBox2.DataSource = m_skilleffectstring;
            }
        }

        public void SaveFile()
        {
            {
                string jsonString = JsonConvert.SerializeObject(skContanor);


                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\SkillEffectlist.json", false))
                {
                    file.Write(jsonString);

                    file.Close();
                }
            }
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

        private void button8_Click(object sender, EventArgs e)
        {

            SkillEffectNode node = new SkillEffectNode();
            node.EffectNum = m_skilleffectstring.Count+1;

            EffectNum.Text = (m_skilleffectstring.Count+1).ToString();
            EffectName.Text = "새 이펙트";
            EffectDiscription.Text = "새 이펙트 설명";
            EffectValue.Text = "0";

            node.EffectName = EffectName.Text;
            node.EffectDiscription = EffectDiscription.Text;
            skContanor.SkillEffect.Add(node);

            m_skilleffectstring.Add(node.EffectName);

            // Change the DataSource.
            listBox2.DataSource = null;
            listBox2.DataSource = m_skilleffectstring;
        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (m_skilleffectstring.Count > select)
            {
                SkillEffectNode data = skContanor.SkillEffect[select];
                EffectNum.Text = data.EffectNum.ToString();
                EffectName.Text = data.EffectName;
                EffectDiscription.Text = data.EffectDiscription;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (m_skilleffectstring.Count > select)
            {
                SkillEffectNode node = skContanor.SkillEffect[select];

                node.EffectName = EffectName.Text;
                node.EffectDiscription = EffectDiscription.Text;

                int select1 = listBox1.SelectedIndex;

                if (select1 == -1)
                    return;
                if (m_skilleffectstring.Count > select1)
                {
                    Skill data = sContanor.SkillList[select1];
                    EffectSlotNode enode = new EffectSlotNode();
                    enode.EffectSlot = node.EffectNum;
                    enode.EffectValue = Convert.ToDouble(EffectValue.Text);

                    m_SkillHaveEffect.Add(node.EffectName + "(" + EffectValue.Text + ")");

                    data.EffectList.Add(enode);
                }



                m_skilleffectstring[select1] = node.EffectName;


                // Change the DataSource.
                listBox3.DataSource = null;
                listBox3.DataSource = m_SkillHaveEffect;


            }
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (m_skilleffectstring.Count > select)
            {
                Skill node = sContanor.SkillList[select];
                node.Title = SkillTitle.Text;
                node.describe = SkillDescibe.Text;
                m_skillstring[select] = node.Title;

                // Change the DataSource.
                listBox1.DataSource = null;
                listBox1.DataSource = m_skillstring;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {


            Skill node = new Skill();
            node.skillNumber = m_skillstring.Count + 1;

            SkillNum.Text = (m_skillstring.Count + 1).ToString();
            SkillTitle.Text = "새 이펙트";
            SkillDescibe.Text = "새 이펙트 설명";

            node.describe = SkillTitle.Text;
            node.Title = SkillDescibe.Text;
            sContanor.SkillList.Add(node);

            m_skillstring.Add(node.Title);

            // Change the DataSource.
            listBox1.DataSource = null;
            listBox1.DataSource = m_skillstring;
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (m_skilleffectstring.Count > select)
            {
                Skill data = sContanor.SkillList[select];
                SkillNum.Text = data.skillNumber.ToString();
                SkillTitle.Text = data.Title;
                SkillDescibe.Text = data.describe;

                m_SkillHaveEffect.Clear();

                foreach (EffectSlotNode Seffect in data.EffectList)
                {
                    foreach (SkillEffectNode effect in skContanor.SkillEffect)
                    {
                        if (effect.EffectNum == Seffect.EffectSlot)
                        {
                            m_SkillHaveEffect.Add(String.Format(effect.EffectDiscription, Seffect.EffectValue));
                            break;
                        }
                    }
                }

                listBox3.DataSource = null;
                listBox3.DataSource = m_SkillHaveEffect;
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            SaveFile();
            SaveFile2();
        }

        private void SkillEditor_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                     "스킬 에디터",
                      MessageBoxButtons.YesNoCancel,
                      MessageBoxIcon.Information);
            if (resualt == DialogResult.No)
            {
            }
            else if (resualt == DialogResult.Yes)
            {
                SaveFile();
                SaveFile2();
            }
            else
            {
                e.Cancel = true;
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (m_skilleffectstring.Count > select)
            {
                Skill node = sContanor.SkillList[select];
                sContanor.SkillList.Remove(node);
                m_skillstring.Remove(node.Title);
            }

            // Change the DataSource.
            listBox3.DataSource = null;
            listBox3.DataSource = m_skillstring;
        }
    }
}
