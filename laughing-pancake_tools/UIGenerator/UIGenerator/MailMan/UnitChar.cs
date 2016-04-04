using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UIGenerator.MailMan;

namespace UIGenerator
{
    public class UnitChar
    {
        public UnitChar()
        {
            unit_name = "NEW";
            slot = 1;
            gamemoney = 200;
            cash = 50;
            rank = 1;
            unit_rankIcon = "img/ui/icon/rankicon1.png";
            char_img = "img/ui/chr/1h_img.png";
            char_icon = "img/ui/chr/1h_icon.png";
            UpgradeList = new List<UpgardeNode>();
            Unitskilllist = new List<Unitskill>();
        }
        public String unit_name;
        public int slot;
        public int gamemoney;
        public int cash;
        public int Ani_No;
        public int rank;
        public List<UpgardeNode> UpgradeList;
        public List<Unitskill> Unitskilllist;

        public String unit_rankIcon;
        public String char_img;
        public String char_icon;
    }
}
