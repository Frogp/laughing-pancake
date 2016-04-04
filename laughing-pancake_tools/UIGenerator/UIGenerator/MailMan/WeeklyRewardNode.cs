using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UIGenerator.MailMan
{
    public class WeeklyRewardNode
    {
        public int FriendFrom;
        public int FriendTo;
        public List<int> Rewardlist = new List<int>();
        public string RewardName;

        public string RewardIcon1;
        public string RewardIcon2;
    }
}
