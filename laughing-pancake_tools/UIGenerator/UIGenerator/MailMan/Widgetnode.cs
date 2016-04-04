using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UIGenerator
{
    public class Widgetnode
    {
        public List<Widgetnode> child;
        public string classname;
        public string name;
        public string original_name;
        public int tag;
    }
}
