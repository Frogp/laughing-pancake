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
    public partial class dailyRwardEditor : Form
    {
        public ChrTitleContanor CharTitleCon = new ChrTitleContanor();

        List<String> m_CharTitleConstring = new List<String>();


        public List<UnitChar> UnitCharList = new List<UnitChar>();

        public List<String> issues = new List<String>();


        public List<ItemInfoNode> ItemInfoNodeList = new List<ItemInfoNode>();

        public List<String> m_ItemInfoNodestring = new List<String>();

        public List<RewardItemNode> RewardItemNodeList = new List<RewardItemNode>();

        public List<String> m_RewardItemNodeListtring = new List<String>();


        public List<DailyRewardNode> DailyRewardNodeList = new List<DailyRewardNode>();

        public List<String> m_DailyRewardNodeListtring = new List<String>();


        public dailyRwardEditor()
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
                sr = new System.IO.StreamReader(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\DailyRewards.json");
                json = sr.ReadToEnd();

                JObject obj = JObject.Parse(json);

                JArray CharList = JArray.Parse(obj["DailyRewards"].ToString());
                foreach (JObject itemObj in CharList)
                {
                    DailyRewardNode node = new DailyRewardNode();

                    int dayindex = Convert.ToInt32(itemObj["dayindex"].ToString());
                    node.dayindex = dayindex;

                    string Discription = itemObj["Discription"].ToString();
                    node.Discription = Discription;

                    string item_icon = itemObj["item_icon"].ToString();
                    node.item_icon = item_icon;

                    int GoodsIndex = Convert.ToInt32(itemObj["GoodsIndex"].ToString());
                    node.GoodsIndex = GoodsIndex;

                    DailyRewardNodeList.Add(node);

                    m_DailyRewardNodeListtring.Add(String.Format("{0}일차 : " + Discription, dayindex));


                }

                listBox1.DataSource = null;
                listBox1.DataSource = m_DailyRewardNodeListtring;


                sr.Close();
            }
            catch
            {
            }

            
        }

        private void label15_Click(object sender, EventArgs e)
        {

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

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (DailyRewardNodeList.Count >= select)
            {
                DailyRewardNode NNnode = DailyRewardNodeList[select];

                DayIndex.Text = NNnode.dayindex.ToString();
                Discription.Text = NNnode.Discription.ToString();
                item_icon.Text = NNnode.item_icon.ToString();
                GoodsIndex.Text = NNnode.GoodsIndex.ToString();
                string path = SettingSingleton.Instance().m_toolsetting.Projectpath;
                pictureBox2.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + NNnode.item_icon);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            DailyRewardNode NNnode = new DailyRewardNode();


            NNnode.dayindex = DailyRewardNodeList.Count + 1;
            NNnode.Discription = Discription.Text;
            NNnode.item_icon = item_icon.Text;
            NNnode.GoodsIndex = Convert.ToInt32(GoodsIndex.Text);

            DailyRewardNodeList.Add(NNnode);

            m_DailyRewardNodeListtring.Add(String.Format("{0}일차 : " + Discription.Text, NNnode.dayindex));

            listBox1.DataSource = null;
            listBox1.DataSource = m_DailyRewardNodeListtring;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (RewardItemNodeList.Count >= select)
            {
                DailyRewardNode NNnode = DailyRewardNodeList[select];

                NNnode.dayindex = Convert.ToInt32(DayIndex.Text);
                NNnode.Discription = Discription.Text;
                NNnode.item_icon = item_icon.Text;
                NNnode.GoodsIndex = Convert.ToInt32(GoodsIndex.Text);

                DailyRewardNodeList[select] = NNnode;
                m_DailyRewardNodeListtring[select] = String.Format("{0}일차 : " + Discription.Text, NNnode.dayindex);

                listBox1.DataSource = null;
                listBox1.DataSource = m_DailyRewardNodeListtring;
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

                GoodsIndex.Text = NNnode.RewardNum.ToString();

                Discription.Text = NNnode.ItemName.ToString();

            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            SaveFile();
        }

        public void SaveFile()
        {
            {


                DailyRewardNodeContanor con = new DailyRewardNodeContanor();
                con.DailyRewards = DailyRewardNodeList;
                string jsonString = JsonConvert.SerializeObject(con);
                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\DailyRewards.json", false))
                {
                    file.Write(jsonString);
                    file.Close();
                }
            }

        }

        private void dailyRwardEditor_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                    "일일 보상 에디터",
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
