using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net.Json;
namespace CreateTools
{
    class CharacterInfo
    {
        private List<Character> list;
        public CharacterInfo()
        {
            list = new List<Character>();
            JsonRead();
        }

        public void AddCharacterInfo(Character chr)
        {
            list.Add(chr);
        }
        public int ListCount()
        {
            return list.Count;
        }
        public Character GetCharacter(int x)
        {
            return list[x];
        }
        public void removeMonster(string words, int cnt)
        {
            for (int i = 0; i < list.Count; i++)
            {
                if (list[i].Index == words)
                {
                    list.RemoveAt(i);
                }
            }
        }
        public void JsonRead()
        {
            try
            {
                StreamReader sr = new StreamReader("../../../CharacterInfo.json");
                string JsonFile = "";
                while (sr.Peek() >= 0)
                {
                    JsonFile = JsonFile + sr.ReadLine();
                }
                JsonTextParser parser = new JsonTextParser();
                JsonObject configObj = parser.Parse(JsonFile);
                JsonObjectCollection config = (JsonObjectCollection)configObj;
                JsonArrayCollection items = (JsonArrayCollection)config["Character"];
                string a = "", b = "", c = "", d = "", e = "", f = "", g = "";
                foreach (JsonObjectCollection item in items)
                {
                    a = (string)item["imagePath"].GetValue();
                    b = (string)item["name"].GetValue();
                    c = (string)item["index"].GetValue();
                    d = (string)item["power"].GetValue();
                    e = (string)item["defence"].GetValue();
                    f = (string)item["speed"].GetValue();
                    g = (string)item["strength"].GetValue();
                    Character tmp = new Character(a, b, c, d, e, f, g);
                    list.Add(tmp);
                }
                sr.Close();
            }
            catch (IOException)
            {

            }
        }
        public void JsonWrite()
        {
            string JsonFile = "";
            StreamWriter sw = new StreamWriter("../../../CharacterInfo.json");

            JsonObjectCollection col = new JsonObjectCollection();
            JsonArrayCollection items = new JsonArrayCollection("Character");
            for (int i = 0; i < list.Count; i++)
            {
                JsonObjectCollection collection = new JsonObjectCollection();
                collection.Add(new JsonStringValue("imagePath", list[i].ImagePath));
                collection.Add(new JsonStringValue("name", list[i].Name));
                collection.Add(new JsonStringValue("index", list[i].Index));
                collection.Add(new JsonStringValue("power", list[i].Power));
                collection.Add(new JsonStringValue("defence", list[i].Defence));
                collection.Add(new JsonStringValue("speed", list[i].Speed));
                collection.Add(new JsonStringValue("strength", list[i].Strength));
                items.Add(collection);
            }
            col.Add(items);
            JsonFile = col.ToString();
            sw.Write(JsonFile);
            sw.Close();
        }

    }
}
