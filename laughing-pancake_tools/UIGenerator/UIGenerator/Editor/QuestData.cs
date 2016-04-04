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
    public partial class QuestData : Form
    {
        public ChrTitleContanor CharTitleCon = new ChrTitleContanor();

        List<String> m_CharTitleConstring = new List<String>();


        public List<UnitChar> UnitCharList = new List<UnitChar>();

        public List<String> issues = new List<String>();


        public List<ItemInfoNode> ItemInfoNodeList = new List<ItemInfoNode>();

        public List<String> m_ItemInfoNodestring = new List<String>();

        public List<RewardItemNode> RewardItemNodeList = new List<RewardItemNode>();

        public List<String> m_RewardItemNodeListtring = new List<String>();


        public List<ConditionNode> ConditionNodeList = new List<ConditionNode>();

        public List<String> m_ConditionNodeListtring = new List<String>();



        public List<QuestNode> QuestNodeList = new List<QuestNode>();

        public List<String> m_QuestNodeListtring = new List<String>();

        public QuestData()
        {
            InitializeComponent();
            System.IO.StreamReader sr;


            try
            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Items.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["Items"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    ItemInfoNode node = new ItemInfoNode();

                    int ItemIndex = Convert.ToInt32(itemObj["ItemIndex"].ToString());
                    node.ItemIndex = ItemIndex;

                    string itemtitle = itemObj["itemtitle"].ToString();
                    node.itemtitle = itemtitle;

                    string description = itemObj["description"].ToString();
                    node.description = description;

                    ItemInfoNodeList.Add(node);

                    m_ItemInfoNodestring.Add(node.itemtitle);
                }
                //listBox2.DataSource = m_skilleffectstring;


                sr.Close();
            }
            catch
            {
                
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

                //listBox5.DataSource = null;
                //listBox5.DataSource = m_CharTitleConstring;

                sr.Close();
            }
            catch
            {
            }
            try
            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Conditions.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["Conditions"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    ConditionNode node = new ConditionNode();

                    int ConditionNum = Convert.ToInt32(itemObj["ConditionNum"].ToString());
                    node.ConditionNum = ConditionNum;

                    string ConditionName = itemObj["ConditionName"].ToString();
                    node.ConditionName = ConditionName;

                    string ConditionDescription = itemObj["ConditionDescription"].ToString();
                    node.ConditionDescription = ConditionDescription;

                    ConditionNodeList.Add(node);


                    m_ConditionNodeListtring.Add(node.ConditionDescription);
                }

                listBox5.DataSource = null;
                listBox5.DataSource = m_ConditionNodeListtring;

                //listBox2.DataSource = m_skilleffectstring;

                //listBox5.DataSource = null;
                //listBox5.DataSource = m_CharTitleConstring;

                sr.Close();
            }
            catch
            {
            }

            //


            try
            {
                String json;
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

                //listBox3.DataSource = issues;

                sr.Close();
            }
            catch
            {

            }

            try
            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Rewarditems.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["RewardItems"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    RewardItemNode node = new RewardItemNode();

                    int RewardNum = Convert.ToInt32(itemObj["RewardNum"].ToString());
                    node.RewardNum = RewardNum;

                    string ItemName = itemObj["ItemName"].ToString();
                    node.ItemName = ItemName;

                    int ChrNum = Convert.ToInt32(itemObj["ChrNum"].ToString());
                    node.ChrNum = ChrNum;

                    int TitleNum = Convert.ToInt32(itemObj["TitleNum"].ToString());
                    node.TitleNum = TitleNum;

                    int ItemNum = Convert.ToInt32(itemObj["ItemNum"].ToString());
                    node.ItemNum = ItemNum;

                    int ItemSize = Convert.ToInt32(itemObj["ItemSize"].ToString());
                    node.ItemSize = ItemSize;


                    RewardItemNodeList.Add(node);

                    m_RewardItemNodeListtring.Add(node.ItemName);
                }
                //listBox2.DataSource = m_skilleffectstring;

                listBox2.DataSource = null;
                listBox2.DataSource = m_RewardItemNodeListtring;

                sr.Close();
            }
            catch
            {
            }


            try
            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\QuestNodes.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["QuestNodes"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    QuestNode node = new QuestNode();

                    int QuestIndex = Convert.ToInt32(itemObj["QuestIndex"].ToString());
                    node.QuestIndex = QuestIndex;

                    string QuestTitle = itemObj["QuestTitle"].ToString();
                    node.QuestTitle = QuestTitle;

                    string QuestDiscription = itemObj["QuestDiscription"].ToString();
                    node.QuestDiscription = QuestDiscription;

                    int ConditionIndex = Convert.ToInt32(itemObj["ConditionIndex"].ToString());
                    node.ConditionIndex = ConditionIndex;

                    double ConditionValue = Convert.ToDouble(itemObj["ConditionValue"].ToString());
                    node.ConditionValue = ConditionValue;

                    string QuestTypeImg = itemObj["QuestTypeImg"].ToString();
                    node.QuestTypeImg = QuestTypeImg;

                    string QuestTypeTitle = itemObj["QuestTypeTitle"].ToString();
                    node.QuestTypeTitle = QuestTypeTitle;

                    int TitleReward = Convert.ToInt32(itemObj["TitleReward"].ToString());
                    node.TitleReward = TitleReward;
                    int ItemReward = Convert.ToInt32(itemObj["ItemReward"].ToString());
                    node.ItemReward = ItemReward;

                    string ItemRewardImg = itemObj["ItemRewardImg"].ToString();
                    node.ItemRewardImg = ItemRewardImg;
                    


                    QuestNodeList.Add(node);

                    m_QuestNodeListtring.Add(node.QuestTitle);
                }
                //listBox2.DataSource = m_skilleffectstring;

                listBox3.DataSource = null;
                listBox3.DataSource = m_QuestNodeListtring;

                sr.Close();
            }
            catch
            {
            }


            //
        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (RewardItemNodeList.Count >= select)
            {
                ChrNumR.Text = String.Empty;
                TitleNumR.Text = String.Empty;
                ItemNumR.Text = String.Empty;
                RewardItemNode NNnode = RewardItemNodeList[select];

                ItemNumber.Text = NNnode.RewardNum.ToString();
                ItemName.Text = NNnode.ItemName.ToString();

                ChrNum.Text = NNnode.ChrNum.ToString();

                if (ChrNum.Text != "")
                {
                    foreach (UnitChar cnode in UnitCharList)
                    {
                        if (cnode.slot == Convert.ToInt32(ChrNum.Text))
                        {
                            ChrNumR.Text = cnode.unit_name;
                            radioButton1.Checked = true;
                        }
                    }
                }


                //ChrTitle NNnode = CharTitleCon.Titlelist[select];

                TitleNum.Text = NNnode.TitleNum.ToString();

                if (TitleNum.Text != "")
                {
                    foreach (ChrTitle cnode in CharTitleCon.Titlelist)
                    {
                        if (cnode.ChrTitleNumber == Convert.ToInt32(TitleNum.Text))
                        {
                            TitleNumR.Text = cnode.Title;
                            radioButton2.Checked = true;
                        }
                    }
                }


                ItemNum.Text = NNnode.ItemNum.ToString();

                if (ItemNum.Text != "")
                {
                    foreach (ItemInfoNode cnode in ItemInfoNodeList)
                    {
                        if (cnode.ItemIndex == Convert.ToInt32(ItemNum.Text))
                        {
                            ItemNumR.Text = cnode.itemtitle;
                            radioButton3.Checked = true;
                        }
                    }
                }
                ItemCount.Text = NNnode.ItemSize.ToString();



            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (RewardItemNodeList.Count >= select)
            {

                RewardItemNode NNnode = RewardItemNodeList[select];
                if (ChrNum.Text != "0")
                {
                    return;
                }
                if (TitleNum.Text != "0")
                {
                    TitleReward.Text = NNnode.RewardNum.ToString();
                    TitleRewardR.Text = NNnode.ItemName;
                }
                if (ItemNum.Text != "0")
                {
                    ItemRewardR.Text = NNnode.ItemName;
                    ItemReward.Text = NNnode.RewardNum.ToString();
                }
                
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            ConditionNode NNnode = new ConditionNode();


            NNnode.ConditionNum = ConditionNodeList.Count + 1;
            NNnode.ConditionName = ConditionName.Text;
            NNnode.ConditionDescription = ConditionDescription.Text;

            ConditionNodeList.Add(NNnode);

            m_ConditionNodeListtring.Add(NNnode.ConditionDescription);

            listBox5.DataSource = null;
            listBox5.DataSource = m_ConditionNodeListtring;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            
            int select = listBox5.SelectedIndex;

            if (select == -1)
                return;
            if (ConditionNodeList.Count >= select)
            {
                ConditionNode NNnode = ConditionNodeList[select];

                NNnode.ConditionNum = Convert.ToInt32(ConditionNum.Text);
                NNnode.ConditionName = ConditionName.Text;
                NNnode.ConditionDescription = ConditionDescription.Text;

                ConditionNodeList[select] = NNnode;
                m_ConditionNodeListtring[select] = NNnode.ConditionDescription;

                listBox5.DataSource = null;
                listBox5.DataSource = m_ConditionNodeListtring;
            }
        }

        public void SaveFile()
        {
            ConditionNodeContanor con = new ConditionNodeContanor();
            con.Conditions = ConditionNodeList;
            string jsonString = JsonConvert.SerializeObject(con);
            using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Conditions.json", false))
            {
                file.Write(jsonString);
                file.Close();
            }
          
        }

        public void SaveFile2()
        {
            QuestNodeContanor con = new QuestNodeContanor();
            con.QuestNodes = QuestNodeList;
            string jsonString = JsonConvert.SerializeObject(con);
            using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\QuestNodes.json", false))
            {
                file.Write(jsonString);
                file.Close();
            }

        }

        private void button6_Click(object sender, EventArgs e)
        {
            QuestNode NNnode = new QuestNode();


            NNnode.QuestIndex = QuestNodeList.Count + 1;
            NNnode.QuestTitle = QuestTitle.Text;
            NNnode.QuestDiscription = QuestDiscription.Text;
            NNnode.ConditionIndex = Convert.ToInt32(ConditionIndex.Text);
            NNnode.ConditionValue = Convert.ToDouble(ConditionValue.Text);
            NNnode.QuestTypeImg = QuestTypeImg.Text;
            NNnode.QuestTypeTitle = QuestTypeTitle.Text;
            NNnode.TitleReward = Convert.ToInt32(TitleReward.Text);
            NNnode.ItemReward = Convert.ToInt32(ItemReward.Text);
            NNnode.ItemRewardImg = ItemRewardImg.Text;

            QuestNodeList.Add(NNnode);

            m_QuestNodeListtring.Add(NNnode.QuestTitle);

            listBox3.DataSource = null;
            listBox3.DataSource = m_QuestNodeListtring;
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (QuestNodeList.Count >= select)
            {
                QuestNode NNnode = QuestNodeList[select];

                QuestIndex.Text = NNnode.QuestIndex.ToString();
                QuestTitle.Text = NNnode.QuestTitle.ToString();
                QuestDiscription.Text = NNnode.QuestDiscription.ToString();
                ConditionIndex.Text = NNnode.ConditionIndex.ToString();

                foreach(ConditionNode CNnode in ConditionNodeList)
                {
                    if( CNnode.ConditionNum == NNnode.ConditionIndex)
                    {

                        ConditionIndexR.Text = String.Format(CNnode.ConditionDescription, NNnode.ConditionValue);
                    }

                }

                ConditionValue.Text = NNnode.ConditionValue.ToString();
                QuestTypeImg.Text = NNnode.QuestTypeImg.ToString();
                QuestTypeTitle.Text = NNnode.QuestTypeTitle.ToString();
                QuestDiscription.Text = NNnode.QuestDiscription.ToString();
                TitleReward.Text = NNnode.TitleReward.ToString();
                ItemReward.Text = NNnode.ItemReward.ToString();

                ItemRewardImg.Text = NNnode.ItemRewardImg.ToString();

                string path = SettingSingleton.Instance().m_toolsetting.Projectpath;
                pictureBox2.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + NNnode.QuestTypeImg);
                pictureBox1.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + NNnode.ItemRewardImg);
                foreach(RewardItemNode rNnode in RewardItemNodeList)
                {

                    if (NNnode.TitleReward == rNnode.RewardNum)
                    {
                        TitleReward.Text = rNnode.RewardNum.ToString();
                        TitleRewardR.Text = rNnode.ItemName;
                    }

                    if (NNnode.ItemReward == rNnode.RewardNum)
                    {
                        ItemRewardR.Text = rNnode.ItemName;
                        ItemReward.Text = rNnode.RewardNum.ToString();
                    }
                }
            }
        }

        private void listBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox5.SelectedIndex;

            if (select == -1)
                return;
            if (ConditionNodeList.Count >= select)
            {
                ConditionNode NNnode = ConditionNodeList[select];

                ConditionNum.Text = NNnode.ConditionNum.ToString();
                ConditionName.Text = NNnode.ConditionName.ToString();
                ConditionDescription.Text = NNnode.ConditionDescription.ToString();

            }
        }

        private void button4_Click(object sender, EventArgs e)
        {


            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (QuestNodeList.Count >= select)
            {
                QuestNode NNnode = QuestNodeList[select];

                NNnode.QuestIndex = Convert.ToInt32(QuestIndex.Text);
                NNnode.QuestTitle = QuestTitle.Text;
                NNnode.QuestDiscription = QuestDiscription.Text;

                NNnode.ConditionIndex = Convert.ToInt32(ConditionIndex.Text);
                NNnode.ConditionValue = Convert.ToDouble(ConditionValue.Text);
                NNnode.QuestTypeImg = QuestTypeImg.Text;
                NNnode.QuestTypeTitle = QuestTypeTitle.Text;

                NNnode.TitleReward = Convert.ToInt32(TitleReward.Text);
                NNnode.ItemReward = Convert.ToInt32(ItemReward.Text);
                NNnode.ItemRewardImg = ItemRewardImg.Text;

                QuestNodeList[select] = NNnode;
                m_QuestNodeListtring[select] = NNnode.QuestTitle;

                listBox3.DataSource = null;
                listBox3.DataSource = m_QuestNodeListtring;
            }
        }


        private void button2_Click(object sender, EventArgs e)
        {
            int select = listBox5.SelectedIndex;

            if (select == -1)
                return;
            if (ConditionNodeList.Count >= select)
            {
                ConditionNode NNnode = ConditionNodeList[select];
                ConditionIndex.Text = NNnode.ConditionNum.ToString();
                ConditionIndexR.Text = NNnode.ConditionDescription.ToString();

            }
        }



        private void button9_Click(object sender, EventArgs e)
        {
            SaveFile();
            SaveFile2();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void QuestData_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                    "퀘스트 에디터",
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

       
       
       

       
       

       
    }
}
