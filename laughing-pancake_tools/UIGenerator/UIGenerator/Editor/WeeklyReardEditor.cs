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
    public partial class WeeklyReardEditor : Form
    {
        public ChrTitleContanor CharTitleCon = new ChrTitleContanor();

        List<String> m_CharTitleConstring = new List<String>();


        public List<UnitChar> UnitCharList = new List<UnitChar>();

        public List<String> issues = new List<String>();


        public List<ItemInfoNode> ItemInfoNodeList = new List<ItemInfoNode>();

        public List<String> m_ItemInfoNodestring = new List<String>();

        public List<RewardItemNode> RewardItemNodeList = new List<RewardItemNode>();

        public List<String> m_RewardItemNodeListtring = new List<String>();


        public List<int> WeekRewardItemNodeList = new List<int>();
        public List<String> m_WeekRewardItemNodeListstring = new List<String>();


        public List<WeeklyRewardNode> WeeklyRewardNodeList = new List<WeeklyRewardNode>();
        public List<String> m_WeeklyRewardNodeListtring = new List<String>();

        public WeeklyReardEditor()
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

                //listBox1.DataSource = null;
                //listBox1.DataSource = m_ItemInfoNodestring;

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


                sr.Close();
            }
            catch
            {
            }



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

                sr.Close();
            }
            catch
            {

            }


            try
            {
                String json;
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\WeeklyRewards.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["WeeklyRewards"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    WeeklyRewardNode node = new WeeklyRewardNode();

                    int FriendFrom = Convert.ToInt32(itemObj["FriendFrom"].ToString());
                    node.FriendFrom = FriendFrom;

                    int FriendTo = Convert.ToInt32(itemObj["FriendTo"].ToString());
                    node.FriendTo = FriendTo;


                    JArray Rewardlist = JArray.Parse(itemObj["Rewardlist"].ToString());
                    foreach (int ints in Rewardlist)
                    {
                        node.Rewardlist.Add(ints);
                    }

                    string RewardName = itemObj["RewardName"].ToString();
                    node.RewardName = RewardName;

                    string RewardIcon1 = itemObj["RewardIcon1"].ToString();
                    node.RewardIcon1 = RewardIcon1;
                    string RewardIcon2 = itemObj["RewardIcon2"].ToString();
                    node.RewardIcon2 = RewardIcon2;



                    WeeklyRewardNodeList.Add(node);


                    m_WeeklyRewardNodeListtring.Add(
                        "(" + node.FriendFrom.ToString() + " ~ " + node.FriendTo.ToString() + ") "
                        + node.RewardName);
                        }
                listBox1.DataSource = m_WeeklyRewardNodeListtring;


                sr.Close();
            }
            catch
            {
            }

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
             int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (WeekRewardItemNodeList.Count >= select)
            {
                WeeklyRewardNode NNnode = WeeklyRewardNodeList[select];

                FriendFrom.Text = NNnode.FriendFrom.ToString();
                FriendTo.Text = NNnode.FriendTo.ToString();
                WeekRewardItemNodeList = NNnode.Rewardlist;
                RewardName.Text = NNnode.RewardName.ToString();
                RewardIcon1.Text = NNnode.RewardIcon1.ToString();
                RewardIcon2.Text = NNnode.RewardIcon2.ToString();

                m_WeekRewardItemNodeListstring.Clear();
                foreach( int windex in WeekRewardItemNodeList)
                {
                    foreach(RewardItemNode rnode in RewardItemNodeList)
                    {
                        if (rnode.RewardNum == windex) 
                            m_WeekRewardItemNodeListstring.Add(rnode.ItemName);
                    }
                }

                string path = SettingSingleton.Instance().m_toolsetting.Projectpath;
                pictureBox1.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + NNnode.RewardIcon1);
                pictureBox2.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + NNnode.RewardIcon2);



                listBox3.DataSource = null;
                listBox3.DataSource = m_WeekRewardItemNodeListstring;

            }
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

                WeekRewardItemNodeList.Add(NNnode.RewardNum);;
                m_WeekRewardItemNodeListstring.Add(NNnode.ItemName);
            }
            listBox3.DataSource = null;
            listBox3.DataSource = m_WeekRewardItemNodeListstring;
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (WeekRewardItemNodeList.Count >= select)
            {
                weekRewardindex.Text = WeekRewardItemNodeList[select].ToString();
                weekRewardindexR.Text = m_WeekRewardItemNodeListstring[select];
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            bool isFrist = true;
            string Resault = "";
            foreach (int wre in WeekRewardItemNodeList)
            {
                foreach(RewardItemNode NNnode in RewardItemNodeList)
                {
                    if( NNnode.RewardNum != wre)
                    {
                        continue;
                    }
                    if (NNnode.ChrNum != 0)
                    {
                        foreach (UnitChar cnode in UnitCharList)
                        {
                            if (cnode.slot == NNnode.ChrNum)
                            {
                                if (isFrist == true)
                                    isFrist = false;
                                else
                                    Resault += " + ";
                                Resault += cnode.unit_name;
                            }
                        }
                    }


                    if (NNnode.TitleNum != 0)
                    {
                        foreach (ChrTitle cnode in CharTitleCon.Titlelist)
                        {
                            if (cnode.ChrTitleNumber == NNnode.TitleNum)
                            {
                                if (isFrist == true)
                                    isFrist = false;
                                else
                                    Resault += " + ";
                                Resault += cnode.Title;
                            }
                        }
                    }


                    if (NNnode.ItemNum != 0)
                    {
                        foreach (ItemInfoNode cnode in ItemInfoNodeList)
                        {
                            if (cnode.ItemIndex == NNnode.ItemNum)
                            {
                                if (isFrist == true)
                                    isFrist = false;
                                else
                                    Resault += " + ";

                                Resault += cnode.itemtitle + " " + NNnode.ItemSize.ToString() + "개";
                                
                            }
                        }
                    }
                    

                }
            }

            RewardName.Text = Resault;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            WeeklyRewardNode NNnode = new WeeklyRewardNode();


            NNnode.FriendFrom = Convert.ToInt32(FriendFrom.Text);
            NNnode.FriendTo = Convert.ToInt32(FriendTo.Text);
            NNnode.Rewardlist = WeekRewardItemNodeList;
            NNnode.RewardName = RewardName.Text;

            NNnode.RewardIcon1 = RewardIcon1.Text;
            NNnode.RewardIcon2 = RewardIcon2.Text;

            WeeklyRewardNodeList.Add(NNnode);

            m_WeeklyRewardNodeListtring.Add(
                "(" + NNnode.FriendFrom.ToString() + " ~ " + NNnode.FriendTo.ToString() + ") "
                + NNnode.RewardName);

            listBox1.DataSource = null;
            listBox1.DataSource = m_WeeklyRewardNodeListtring;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (WeeklyRewardNodeList.Count >= select)
            {
                WeeklyRewardNode NNnode = WeeklyRewardNodeList[select];

                NNnode.FriendFrom = Convert.ToInt32(FriendFrom.Text);
                NNnode.FriendTo = Convert.ToInt32(FriendTo.Text);
                NNnode.Rewardlist = WeekRewardItemNodeList;
                NNnode.RewardName = RewardName.Text;
                NNnode.RewardIcon1 = RewardIcon1.Text;
                NNnode.RewardIcon2 = RewardIcon2.Text;


                WeeklyRewardNodeList[select] = NNnode;
                m_WeeklyRewardNodeListtring[select] = 
                    "(" + NNnode.FriendFrom.ToString() + " ~ " + NNnode.FriendTo.ToString() + ") "
                    + NNnode.RewardName;

                listBox1.DataSource = null;
                listBox1.DataSource = m_WeeklyRewardNodeListtring;
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            SaveFile();
        }


        public void SaveFile()
        {
            {


                WeeklyRewardNodeContanor con = new WeeklyRewardNodeContanor();
                con.WeeklyRewards = WeeklyRewardNodeList;
                string jsonString = JsonConvert.SerializeObject(con);
                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\WeeklyRewards.json", false))
                {
                    file.Write(jsonString);
                    file.Close();
                }
            }

        }

        private void WeeklyReardEditor_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                     "주간 보상 에디터",
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

        private void button3_Click(object sender, EventArgs e)
        {
            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (WeeklyRewardNodeList.Count >= select)
            {
                WeekRewardItemNodeList.RemoveAt(select);
                m_WeekRewardItemNodeListstring.RemoveAt(select);

                listBox3.DataSource = null;
                listBox3.DataSource = m_WeekRewardItemNodeListstring;
            }
        }
    }
}
