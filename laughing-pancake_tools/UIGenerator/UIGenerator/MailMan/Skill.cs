using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UIGenerator.MailMan
{
    public class Skill
    {
        public int skillNumber;
        public string Title;
        public string describe;

        public List<EffectSlotNode> EffectList = new List<EffectSlotNode>();
    }
}
