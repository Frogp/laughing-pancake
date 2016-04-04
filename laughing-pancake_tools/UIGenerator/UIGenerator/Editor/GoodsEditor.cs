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
    public partial class GoodsEditor : Form
    {
        public ChrTitleContanor CharTitleCon = new ChrTitleContanor();

        List<String> m_CharTitleConstring = new List<String>();


        public List<UnitChar> UnitCharList = new List<UnitChar>();

        public List<String> issues = new List<String>();


        public List<ItemInfoNode> ItemInfoNodeList = new List<ItemInfoNode>();

        public List<String> m_ItemInfoNodestring = new List<String>();

        public List<RewardItemNode> RewardItemNodeList = new List<RewardItemNode>();

        public List<String> m_RewardItemNodeListtring = new List<String>();

        public GoodsEditor()
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

                listBox1.DataSource = null;
                listBox1.DataSource = m_ItemInfoNodestring;

                sr.Close();
            }
            catch
            {
                SaveFile();
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
                SaveFile2();
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

                listBox3.DataSource = issues;

                sr.Close();
            }
            catch
            {

            }
            
        }



        public void SaveFile()
        {
            {
                

                ItemInfoContanor con = new ItemInfoContanor();
                con.Items = ItemInfoNodeList;
                string jsonString = JsonConvert.SerializeObject(con);
                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Items.json", false))
                {
                    file.Write(jsonString);
                    file.Close();
                }
            }

        }

        public void SaveFile2()
        {
            {


                RewardItemContanor con = new RewardItemContanor();
                con.RewardItems = RewardItemNodeList;
                string jsonString = JsonConvert.SerializeObject(con);
                using (System.IO.StreamWriter file = new System.IO.StreamWriter(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources\\data\\Rewarditems.json", false))
                {
                    file.Write(jsonString);
                    file.Close();
                }
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
            int select = listBox5.SelectedIndex;

            if (select == -1)
                return;
            if (CharTitleCon.Titlelist.Count >= select)
            {
                ChrNumR.Text = String.Empty;
                TitleNumR.Text = String.Empty;
                ItemNumR.Text = String.Empty;

                ChrTitle NNnode = CharTitleCon.Titlelist[select];
                TitleNum.Text = NNnode.ChrTitleNumber.ToString();
                ChrNum.Text = "0";
                ItemNum.Text = "0";

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
            }
           
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            int select = listBox3.SelectedIndex;

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
                //SettingSingleton.Instance().m_toolsetting
                string path = SettingSingleton.Instance().m_toolsetting.Projectpath;
                pictureBox1.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.char_img);
                pictureBox2.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.unit_rankIcon);
                pictureBox3.Load(SettingSingleton.Instance().m_toolsetting.Projectpath + "\\Resources" + "\\" + data.char_icon);

            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int select = listBox3.SelectedIndex;

            if (select == -1)
                return;
            if (UnitCharList.Count >= select)
            {
                UnitChar NNnode = UnitCharList[select];

                ChrNumR.Text = String.Empty;
                TitleNumR.Text = String.Empty;
                ItemNumR.Text = String.Empty;

                ChrNum.Text = NNnode.slot.ToString();
                TitleNum.Text = "0";
                ItemNum.Text = "0";

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
            }
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (ItemInfoNodeList.Count >= select)
            {
                ItemInfoNode NNnode = ItemInfoNodeList[select];

                ItemIndex.Text = NNnode.ItemIndex.ToString();
                itemtitle.Text = NNnode.itemtitle.ToString();
                itemdescription.Text = NNnode.description.ToString();
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            ItemInfoNode NNnode = new ItemInfoNode();


            NNnode.ItemIndex = ItemInfoNodeList.Count + 1;
            NNnode.itemtitle = itemtitle.Text;
            NNnode.description = itemdescription.Text;

            ItemInfoNodeList.Add(NNnode);

            m_ItemInfoNodestring.Add(NNnode.itemtitle);

            listBox1.DataSource = null;
            listBox1.DataSource = m_ItemInfoNodestring;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (ItemInfoNodeList.Count >= select)
            {
                ItemInfoNode NNnode = ItemInfoNodeList[select];

                NNnode.ItemIndex = Convert.ToInt32(ItemIndex.Text);
                NNnode.itemtitle = itemtitle.Text;
                NNnode.description = itemdescription.Text;

                ItemInfoNodeList[select] = NNnode;
                m_ItemInfoNodestring[select] = NNnode.itemtitle;

                listBox1.DataSource = null;
                listBox1.DataSource = m_ItemInfoNodestring;
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            SaveFile();
            SaveFile2();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int select = listBox1.SelectedIndex;

            if (select == -1)
                return;
            if (ItemInfoNodeList.Count >= select)
            {
                ChrNumR.Text = String.Empty;
                TitleNumR.Text = String.Empty;
                ItemNumR.Text = String.Empty;

                ItemInfoNode NNnode = ItemInfoNodeList[select];
                ItemNum.Text = NNnode.ItemIndex.ToString();
                TitleNum.Text = "0";
                ChrNum.Text = "0";


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

        private void button13_Click(object sender, EventArgs e)
        {
            RewardItemNode NNnode = new RewardItemNode();


            NNnode.RewardNum = RewardItemNodeList.Count + 1;
            NNnode.ItemName = ItemName.Text;
            if (ChrNum.Text != "")
            {
                NNnode.ChrNum = Convert.ToInt32(ChrNum.Text);
            }
            else if (TitleNum.Text != "")
            {
                NNnode.TitleNum = Convert.ToInt32(TitleNum.Text);
            }
            else if (ItemNum.Text != "")
            {
                NNnode.ItemNum = Convert.ToInt32(ItemNum.Text);
            }
            NNnode.ItemSize = Convert.ToInt32(ItemCount.Text);

            RewardItemNodeList.Add(NNnode);

            m_RewardItemNodeListtring.Add(NNnode.ItemName);

            listBox2.DataSource = null;
            listBox2.DataSource = m_RewardItemNodeListtring;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            int select = listBox2.SelectedIndex;

            if (select == -1)
                return;
            if (RewardItemNodeList.Count >= select)
            {
                RewardItemNode NNnode = RewardItemNodeList[select];

                NNnode.RewardNum = Convert.ToInt32(ItemNumber.Text);
                NNnode.ItemName = ItemName.Text;
                if (ChrNum.Text != "0")
                {
                    NNnode.TitleNum = 0;
                    NNnode.ItemNum = 0;
                    NNnode.ChrNum = Convert.ToInt32(ChrNum.Text);
                }
                else if (TitleNum.Text != "0")
                {
                    NNnode.ChrNum = 0;
                    NNnode.ItemNum = 0;
                    NNnode.TitleNum = Convert.ToInt32(TitleNum.Text);
                }
                else if (ItemNum.Text != "0")
                {
                    NNnode.ChrNum = 0;
                    NNnode.TitleNum = 0;
                    NNnode.ItemNum = Convert.ToInt32(ItemNum.Text);
                }
                NNnode.ItemSize = Convert.ToInt32(ItemCount.Text);

                RewardItemNodeList[select] = NNnode;
                m_RewardItemNodeListtring[select] = NNnode.ItemName;

                listBox2.DataSource = null;
                listBox2.DataSource = m_RewardItemNodeListtring;
            }
        }

        private void GoodsEditor_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult resualt = MessageBox.Show("저장 후 종료하시겠습니까?",
                    "상품 에디터",
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
