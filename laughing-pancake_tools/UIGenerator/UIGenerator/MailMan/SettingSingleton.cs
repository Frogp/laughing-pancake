using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UIGenerator
{
    public class SettingSingleton
    {
        public ToolSetting m_toolsetting;

        private static SettingSingleton _instance;
 
        //  'protected' 로 생성자를 만듦
        protected SettingSingleton()
        {
            m_toolsetting = new ToolSetting();
        }
 
        // 'static'으로 메서드를 생성
        public static SettingSingleton Instance()
        {
      
          //다중쓰레드에서는 정상적으로 동작안하는 코드입니다.
          //다중 쓰레드 경우에는 동기화가 필요합니다.
          if (_instance == null)
          {
              _instance = new SettingSingleton();
             
          }

          //다중 쓰레드 환경일 경우 Lock 필요
          //if (_instance == null)
          //{
          //  lock(_instance)<br>
          //  {
          //     _instance = new Singleton();
          //  }
          //}
 
          return _instance;
        }
    }
}
