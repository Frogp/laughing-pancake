using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace IdontWantScale
{
    class Point
    {
        public float x;
        public float y;
    }
    class Program
    {
        

        static void Main(string[] args)
        {
            string InPutPath = "../../../../../../laughing-pancake/cocosstudio";
            if (args.Length == 1)
            {
                InPutPath = args[0];
            }
            System.IO.DirectoryInfo di = new System.IO.DirectoryInfo(InPutPath);
            System.IO.FileInfo[] f2 = di.GetFiles();
            foreach (System.IO.FileInfo f in di.GetFiles())
            {
                Console.ForegroundColor = ConsoleColor.White;
                if (f.Extension == ".csd")
                {
         
                    XmlDocument XmlDoc = new XmlDocument();
                    XmlDoc.Load(f.FullName);
                    Console.WriteLine(f.FullName);
                    XmlNode FirstNode = XmlDoc.SelectSingleNode("GameFile/Content/Content/ObjectData/Children");
                    if (FirstNode == null)
                        continue;

                    foreach (XmlNode xn in FirstNode.ChildNodes)
                    {
                        if (xn.Name == "AbstractNodeData")
                        {
                            Point size = new Point();
                            Point scale = new Point();
                            foreach (XmlNode chiled in xn.ChildNodes)
                            {
                                if (chiled.Name == "Size")
                                {
                                    size.x = float.Parse( chiled.Attributes["X"].Value, CultureInfo.InvariantCulture.NumberFormat);
                                    size.y = float.Parse(chiled.Attributes["Y"].Value, CultureInfo.InvariantCulture.NumberFormat);
                                }
                                if (chiled.Name == "Scale")
                                {
                                    scale.x = float.Parse(chiled.Attributes["ScaleX"].Value, CultureInfo.InvariantCulture.NumberFormat);
                                    scale.y = float.Parse(chiled.Attributes["ScaleY"].Value, CultureInfo.InvariantCulture.NumberFormat);
                                    chiled.Attributes["ScaleX"].Value = ((float)1).ToString();
                                    chiled.Attributes["ScaleY"].Value = ((float)1).ToString();
                                }
                            }
                            foreach (XmlNode chiled in xn.ChildNodes)
                            {
                                if (chiled.Name == "Size")
                                {
                                    Point real = new Point();
                                    chiled.Attributes["X"].Value = (size.x * scale.x).ToString();
                                    chiled.Attributes["Y"].Value = (size.y * scale.y).ToString();
                                }
                            }
                            foreach (XmlNode chiled in xn.ChildNodes)
                            {
                                if (chiled.Name == "Children")
                                {

                                    widgetnodeLoader(chiled);
                                }
                            }
                        }
                    }

                    XmlDoc.Save(f.FullName );
                }
                else
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine(f.FullName);
                }
            }

        }

        private static void widgetnodeLoader(XmlNode obj)
        {

            foreach (XmlNode xn in obj.ChildNodes)
            {
                if (xn.Name == "AbstractNodeData")
                {
                    Point size = new Point();
                    Point scale = new Point();
                    foreach (XmlNode chiled in xn.ChildNodes)
                    {
                        if (chiled.Name == "Size")
                        {
                            size.x = float.Parse(chiled.Attributes["X"].Value, CultureInfo.InvariantCulture.NumberFormat);
                            size.y = float.Parse(chiled.Attributes["Y"].Value, CultureInfo.InvariantCulture.NumberFormat);
                        }
                        if (chiled.Name == "Scale")
                        {
                            scale.x = float.Parse(chiled.Attributes["ScaleX"].Value, CultureInfo.InvariantCulture.NumberFormat);
                            scale.y = float.Parse(chiled.Attributes["ScaleY"].Value, CultureInfo.InvariantCulture.NumberFormat);
                            chiled.Attributes["ScaleX"].Value = ((float)1).ToString();
                            chiled.Attributes["ScaleY"].Value = ((float)1).ToString();
                        }
                    }
                    foreach (XmlNode chiled in xn.ChildNodes)
                    {
                        if (chiled.Name == "Size")
                        {
                            Point real = new Point();
                            chiled.Attributes["X"].Value = (size.x * scale.x).ToString();
                            chiled.Attributes["Y"].Value = (size.y * scale.y).ToString();
                        }
                    }
                    foreach (XmlNode chiled in xn.ChildNodes)
                    {
                        if (chiled.Name == "Children")
                        {
                            widgetnodeLoader(chiled);
                        }
                    }
                }
            }
        }







    }
}
