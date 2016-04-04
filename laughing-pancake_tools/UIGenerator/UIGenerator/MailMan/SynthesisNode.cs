using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UIGenerator.MailMan
{
    public class SynthesisNode
    {
        public SynthesisNode()
        {

        }
        public int index;
        public string name;

        public List<CharGradeNode> UpgradList = new List<CharGradeNode>();
    }
}
