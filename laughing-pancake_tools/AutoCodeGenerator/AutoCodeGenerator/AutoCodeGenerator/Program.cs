using AutoCodeGenerator.CocosGenerator;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace AutoCodeGenerator
{
    class Program
    {

        static void Main(string[] args)
        {
            string InPutPath = "../../../../../../laughing-pancake/cocosstudio";
            if(args.Length == 1)
            {
                InPutPath = args[0];
            }
            string AbsolutOutputPath = "../../../../../../laughing-pancake/AutoClasses";
            if (args.Length == 2)
            {
                AbsolutOutputPath = args[1];
            }

            System.IO.DirectoryInfo di = new System.IO.DirectoryInfo(InPutPath);

            foreach (System.IO.FileInfo f in di.GetFiles())
            {
                if (f.Extension == ".csd")
                {
                    Console.ForegroundColor = ConsoleColor.White;
                    XmlDocument XmlDoc = new XmlDocument();
                    XmlDoc.Load(f.FullName);
                    cocosCCPgen gen = new cocosCCPgen();
                    gen.AnimationLoader(XmlDoc);
                    gen.widgetrootoader(XmlDoc);
                    gen.PathGenStart("");
                    gen.filename = f.Name;

                    Console.WriteLine(gen.filename);
                    gen.AbsolutOutputPath = AbsolutOutputPath;

                    string searchText = ".";
                    string ClassName = f.Name.Substring(0, f.Name.IndexOf(searchText));


                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(AbsolutOutputPath + "/" + ClassName + ".h", false))
                    {
                        file.Write(gen.ClassHaderGenerator());
                    }
                    
                    Console.WriteLine(AbsolutOutputPath + "/" + ClassName + ".h");

                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(AbsolutOutputPath + "/" + ClassName + ".cpp", false))
                    {
                        file.Write(gen.ClassCppGenerator());
                    }
                    Console.ForegroundColor = ConsoleColor.Blue;
                    Console.WriteLine(AbsolutOutputPath + "/" + ClassName + ".cpp");
                    

                }
            }

            
        }
    }
}
