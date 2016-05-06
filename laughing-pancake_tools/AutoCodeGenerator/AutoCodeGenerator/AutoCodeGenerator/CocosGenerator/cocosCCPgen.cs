using AutoCodeGenerator.CocosGenerator.Childe;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Xml;

namespace AutoCodeGenerator.CocosGenerator
{
    public class cocosCCPgen
    {
        public List<string> AnimationList = new List<string>();
        public List<string> WidgetList = new List<string>();
        List<Widgetnode> Widgetlist = new List<Widgetnode>();

        public string headerGen = "";
        public string CppGen = "";
        public string filename;


        /// <summary>
        /// 절대 주소
        /// </summary>
        public string AbsolutOutputPath;


        public void AnimationLoader(XmlDocument reader)
        {
            List<string> issues = AnimationList;
            XmlNodeList FirstNode = reader.SelectNodes("GameFile/Content/Content/AnimationList");

            foreach (XmlNode xn in FirstNode)
            {
                foreach (XmlNode xn2 in xn.ChildNodes)
                {
                    string animationName = xn2.Attributes["Name"].Value;
                    issues.Add(animationName);
                }
            }
        }




        public void widgetrootoader(XmlDocument reader)
        {

            List<Widgetnode> Widgetnodes = new List<Widgetnode>();
            XmlNode FirstNode = reader.SelectSingleNode("GameFile/Content/Content/ObjectData/Children");

            if (FirstNode == null)
                return;

            foreach (XmlNode xn in FirstNode.ChildNodes)
            {
                Widgetnode root = new Widgetnode();
                root.classname = xn.Attributes["ctype"].Value;
                if(root.classname == "ProjectNodeObjectData")
                {
                    foreach ( XmlNode chiled in xn.ChildNodes)
                    {
                        if (chiled.Name == "FileData")
                        {
                            root.OutName = chiled.Attributes["Path"].Value;
                            root.OutName = root.OutName.Substring(0,root.OutName.IndexOf(".csd"));
                        }
                    }
                }
                string name = xn.Attributes["Name"].Value;
                //string stag = xn.Attributes["ActionTag"].Value.ToString();
                //int tag = Convert.ToInt32(stag);
                int tag = 0;

                if (name != "")
                {
                    root.original_name = name;

                    string Pattern = @"^[0-9]*$";
                    string First = name[0].ToString();
                    if (Regex.IsMatch(First, Pattern))
                    {
                        name = name.Insert(0, "m_");
                    }

                    root.name = name;
                    root.tag = tag;
                    Widgetnodes.Add(root);
                }

                foreach (XmlNode chiled in xn.ChildNodes)
                {
                    if (chiled.Name == "Children")
                    {
                        widgetnodeLoader(root, chiled);
                    }
                }
            }

            Widgetlist = Widgetnodes;
        }

        public void widgetnodeLoader(Widgetnode root, XmlNode obj)
        {
            XmlNode FirstNode = obj;
            root.child = new List<Widgetnode>();
            foreach (XmlNode xn in FirstNode.ChildNodes)
            {
                Widgetnode node = new Widgetnode();
                node.classname = xn.Attributes["ctype"].Value;
                string name = xn.Attributes["Name"].Value;
                //string stag = xn.Attributes["ActionTag"].Value.ToString();
                //int tag = Convert.ToInt32(stag);
                int tag = 0;
                if (name != "")
                {
                    node.original_name = name;

                    string Pattern = @"^[0-9]*$";
                    string First = name[0].ToString();
                    if (Regex.IsMatch(First, Pattern))
                    {
                        name = name.Insert(0, "m_");
                    }

                    node.name = name;
                    node.tag = tag;
                    root.child.Add(node);
                }

                foreach (XmlNode chiled in xn.ChildNodes)
                {
                    if (chiled.Name == "Children")
                    {
                        widgetnodeLoader(node, chiled);
                    }
                }
            }

        }

        public void PathGenStart(string name)
        {
            PathGen(name, Widgetlist);
        }

        public void PathGen(string name, List<Widgetnode> root)
        {
            if (root == null)
                return;
            foreach (Widgetnode itemObj in root)
            {

                if (name == "")
                {
                    WidgetList.Add(itemObj.name);
                    PathGen(itemObj.name, itemObj.child);
                }
                else
                {
                    WidgetList.Add(name + "." + itemObj.name);
                    PathGen(name + "." + itemObj.name, itemObj.child);
                }

            }
        }

        public string GenChildName(List<Widgetnode> root)
        {

            string original = filename;
            string searchText = ".";
            string widgetname = original.Substring(0, original.IndexOf(searchText));

            if (root == null)
                return "";

            string outputstring = "";
            foreach (Widgetnode itemObj in root)
            {

                if (itemObj.child == null)
                {
                    string classname = itemObj.classname;
                    string widgetclass = "";

                    widgetclass = "\t" + GetClassName(itemObj);

                    outputstring += widgetclass + " " + "m_" + itemObj.name + ";\n";

                    if (itemObj.name == "chr_rank_icon" || itemObj.name == "rank_icon" || itemObj.name == "chr_rankicon")
                    {
                        //Armature* armature = NULL;
                        outputstring += "\t" + "Armature* " + "armature_" + itemObj.name + ";\n";
                    }

                    if (itemObj.name == "chr_img")
                    {
                        outputstring += "\t" + "Armature* " + "armature = NULL; \n";
                    }

                    continue;
                }

                string ClassName = itemObj.name;



                if (itemObj.child != null)
                {
                    string headerGenStart = "";
                    headerGenStart = "";
                    headerGenStart = "#ifndef __CC" + widgetname.ToUpper() + "_" + ClassName.ToUpper() + "_" + itemObj.name.ToUpper() + "_H__\n";
                    headerGenStart += "#define __CC" + widgetname.ToUpper() + "_" + ClassName.ToUpper() + "_" + itemObj.name.ToUpper() + "_H__\n";
                    headerGenStart += "#include \"cocos2d.h\"\n";
                    headerGenStart += "#include \"ui/CocosGUI.h\"\n";
                    //

                    headerGenStart += GenChildIncludeName(1, itemObj);

                    headerGenStart += "\n";
                    headerGenStart += "USING_NS_CC;\n";
                    headerGenStart += "using namespace cocos2d;\n";
                    headerGenStart += "using namespace ui;\n";
                    headerGenStart += "\n";
                    headerGenStart += "/// <summary>\n";
                    headerGenStart += "/// 디자이너 지원에 필요한 메서드입니다.\n";
                    headerGenStart += "/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.\n";
                    headerGenStart += "/// </summary>\n";

                    headerGenStart += "namespace CC" + widgetname + "{\n";

                    headerGenStart += "class " + ClassName + " : public CCObject\n";
                    headerGenStart += "{\n";

                    headerGenStart += "public:\n";
                    headerGenStart += "\t" + ClassName + "() {}\n";

                    headerGenStart += "public:\n";

                    //headerGenStart += GenChildName(itemObj.child);
                    headerGenStart += SubClassHeaderGenerator(widgetname, itemObj);
                    headerGenStart += "cocos2d::Node * root;\n";

                    headerGenStart += "};\n";

                    headerGenStart += "}\n";
                    headerGenStart += "#endif // __CC" + widgetname.ToUpper() + "_" + ClassName.ToUpper() + "_H__";


                    outputstring += "\tCC" + widgetname + "::" + ClassName + " * " + "m_" + ClassName + ";\n";



                    bool exists = System.IO.Directory.Exists(AbsolutOutputPath + "/" + widgetname);

                    if (!exists)
                        System.IO.Directory.CreateDirectory(AbsolutOutputPath + "/" + widgetname);

                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(AbsolutOutputPath + "/" + widgetname + "/" + ClassName + ".h", false))
                    {
                        file.Write(headerGenStart);
                    }


                }
                else //(itemObj.child == null)
                {


                    continue;
                }


            }

            return outputstring;
        }


        public string SubClassHeaderGenerator(string widgetname, Widgetnode Parnet)
        {

            if (Parnet.child == null)
                return "";


            string original = filename;
            string searchText = ".";
            string Origenpath = original.Substring(0, original.IndexOf(searchText));


            string header = "";
            foreach (Widgetnode itemObj in Parnet.child)
            {
                if (itemObj.child == null)
                {
                    string classname = itemObj.classname;
                    string widgetclass = "";

                    widgetclass = "\t" + GetClassName(itemObj);

                    header += widgetclass + " " + "m_" + itemObj.name + ";\n";

                    if (itemObj.name == "chr_rank_icon" || itemObj.name == "rank_icon" || itemObj.name == "chr_rankicon")
                    {
                        //Armature* armature = NULL;
                        header += "\t" + "Armature* " + "armature_" + itemObj.name + ";\n";
                    }

                    if (itemObj.name == "chr_img")
                    {
                        header += "\t" + "Armature* " + "armature = NULL; \n";
                    }

                    continue;
                }

                string ClassName = itemObj.name;
                string headerGenStart = "";
                headerGenStart = "";
                headerGenStart = "#ifndef __CC" + widgetname.ToUpper() + "_" + Parnet.name.ToUpper() + "_" + itemObj.name.ToUpper() + "_H__\n";
                headerGenStart += "#define __CC" + widgetname.ToUpper() + "_" + Parnet.name.ToUpper() + "_" + itemObj.name.ToUpper() + "_H__\n";
                headerGenStart += "#include \"cocos2d.h\"\n";
                headerGenStart += "#include \"ui/CocosGUI.h\"\n";
                headerGenStart += "#include \"cocostudio/CocoStudio.h\"\n";

                headerGenStart += GenChildIncludeName(1, itemObj);

                headerGenStart += "\n";
                headerGenStart += "USING_NS_CC;\n";
                headerGenStart += "using namespace cocos2d;\n";
                headerGenStart += "using namespace ui;\n";
                headerGenStart += "\n";
                headerGenStart += "/// <summary>\n";
                headerGenStart += "/// 디자이너 지원에 필요한 메서드입니다.\n";
                headerGenStart += "/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.\n";
                headerGenStart += "/// </summary>\n";

                headerGenStart += "namespace CC" + Parnet.name + "{\n";

                headerGenStart += "class " + ClassName + " : public CCObject\n";
                headerGenStart += "{\n";

                headerGenStart += "public:\n";
                headerGenStart += "\t" + ClassName + "() {}\n";
                //headerGenStart += "\t" + ClassName + "(Widget* _root);\n";
                headerGenStart += "public:\n";

                //headerGenStart += GenChildName(itemObj.child);
                headerGenStart += SubClassHeaderGenerator(Parnet.name, itemObj);
                headerGenStart += "\tcocos2d::Node* root;\n";

                headerGenStart += "};\n";

                headerGenStart += "}\n";
                headerGenStart += "#endif // __CC" + widgetname.ToUpper() + "_" + ClassName.ToUpper() + "_H__";





                if (itemObj.child != null)
                {

                    header += "\tCC" + Parnet.name + "::" + itemObj.name + " * " + "m_" + itemObj.name + ";\n";

                    bool exists = System.IO.Directory.Exists(AbsolutOutputPath + "/" + Parnet.name);

                    if (!exists)
                        System.IO.Directory.CreateDirectory(AbsolutOutputPath + "/" + Parnet.name);

                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(AbsolutOutputPath + "/" + Parnet.name + "/" + itemObj.name + ".h", false))
                    {
                        file.Write(headerGenStart);
                    }


                }
                else //(itemObj.child == null)
                {
                    continue;
                }

            }



            return header;
        }

        public string GetClassName(Widgetnode itemObj)
        {

            string classname = itemObj.classname.Substring(0, itemObj.classname.IndexOf("ObjectData"));
            //
            string widgetclass = "";
            if (string.Equals(classname, "Button") == true)
            {
                widgetclass = "cocos2d::ui::Button* ";
            }
            else if (string.Equals(classname, "CheckBox") == true)
            {
                widgetclass = "CheckBox *";
            }
            else if (string.Equals(classname, "Label") == true ||
                string.Equals(classname, "Text") == true)
            {
                widgetclass = "cocos2d::ui::Text *";
            }
            else if (string.Equals(classname, "LabelAtlas") == true)
            {
                widgetclass = "cocos2d::ui::TextAtlas *";
            }
            else if (string.Equals(classname, "LoadingBar") == true)
            {
                widgetclass = "cocos2d::ui::LoadingBar *";
            }
            else if (string.Equals(classname, "ScrollView") == true)
            {
                widgetclass = "cocos2d::ui::ScrollView *";
            }
            else if (string.Equals(classname, "TextArea") == true ||
                string.Equals(classname, "TextAreaObjectData") == true)
            {
                widgetclass = "cocos2d::ui::Text *";
            }
            else if (string.Equals(classname, "TextButton") == true)
            {
                widgetclass = "cocos2d::ui::Button *";
            }
            else if (string.Equals(classname, "TextField") == true)
            {
                widgetclass = "cocos2d::ui::TextField *";
            }
            else if (string.Equals(classname, "ImageView") == true)
            {
                widgetclass = "cocos2d::ui::ImageView *";
            }
            else if (string.Equals(classname, "Panel") == true)
            {
                widgetclass = "Layout *";
            }
            else if (string.Equals(classname, "Slider") == true)
            {
                widgetclass = "cocos2d::ui::Slider *";
            }
            else if (string.Equals(classname, "LabelBMFont") == true)
            {
                widgetclass = "cocos2d::ui::TextBMFont *";
            }
            else if (string.Equals(classname, "DragPanel") == true)
            {
                widgetclass = "cocos2d::ui::ScrollView *";
            }
            else if (string.Equals(classname, "PageView") == true)
            {
                widgetclass = "cocos2d::ui::PageView *";
            }
            else if (string.Equals(classname, "ListView") == true)
            {
                widgetclass = "ListView *";
            }
            else if (string.Equals(classname, "CustomParticleWidget") == true)
            {
                widgetclass = "CustomParticleWidget *";
            }//
            else if (string.Equals(classname, "ProjectNode") == true)
            {
                widgetclass = itemObj.OutName + " *";
            }
            else if (string.Equals(classname, "GameMap") == true)
            {
                widgetclass = "cocos2d::TMXTiledMap *";
            }
            else if (string.Equals(classname, "ArmatureNode") == true)
            {
                widgetclass = "cocostudio::Armature *";
            }
            else if (string.Equals(classname, "Sprite") == true)
            {
                widgetclass = "cocos2d::Sprite *";
            }
            else if (string.Equals(classname, "Particle") == true)
            {
                widgetclass = "cocos2d::ParticleSystem *";
            }
            else //if (string.Equals(classname, "Particle") == true)
            {
                widgetclass = "cocos2d::Node *";
            }
            //
            return widgetclass;
        }

        public string GenAniName(List<string> root)
        {
            string outputstring = "";

            
            foreach (string itemObj in root)
            {
                //outputstring += "/////////////" + itemObj + "ANIMATION/////////////\n";
                outputstring += "\tcocostudio::timeline::AnimationInfo " + itemObj + ";\n";
                //outputstring += "\tCCCallFunc* " + itemObj + "func;\n";
                //outputstring += "\tvoid " + itemObj + "funcEnd();\n";
                //outputstring += "\n";
            }
            return outputstring;
        }


        public string ClassHaderGenerator()
        {
            string original = filename;
            string searchText = ".";
            string ClassName = original.Substring(0, original.IndexOf(searchText));
            headerGen = "";
            headerGen = "#ifndef __" + ClassName.ToUpper() + "_H__\n";
            headerGen += "#define __" + ClassName.ToUpper() + "_H__\n";
            headerGen += "#include \"cocos2d.h\"\n";
            headerGen += "#include \"cocostudio/CocoStudio.h\"\n";
            headerGen += "#include \"ui/CocosGUI.h\"\n";

            headerGen += GenChildIncludeName(Widgetlist);

            headerGen += "\n";
            headerGen += "USING_NS_CC;\n";
            headerGen += "using namespace cocos2d;\n";
            headerGen += "using namespace ui;\n";
            headerGen += "\n";
            headerGen += "/// <summary>\n";
            headerGen += "/// 디자이너 지원에 필요한 메서드입니다.\n";
            headerGen += "/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.\n";
            headerGen += "/// </summary>\n";

            headerGen += "class " + ClassName + " : public cocos2d::Layer\n";
            headerGen += "{\n";

            headerGen += "public:\n";
            headerGen += "\t" + ClassName + "();\n";
            headerGen += "\t" + ClassName + "(Widget* _root);\n";
            headerGen += "\tvoid InitPage();\n";

            headerGen += "public:\n";

            headerGen += GenChildName(Widgetlist);

            headerGen += "\n";

            headerGen += "\tcocostudio::timeline::ActionTimeline* action" + ClassName + ";\n";

            headerGen += GenAniName(AnimationList);

            headerGen += "\tstatic " + ClassName + "* Getinstance()\n";
            headerGen += "\t{\n";
            headerGen += "\t\treturn " + ClassName + "::instance;";
            headerGen += "\t}\n";


            headerGen += "\tcocos2d::Node* root;\n";

            headerGen += "private:\n";

            headerGen += "\tstatic " + ClassName + " * instance;\n";
            headerGen += "};\n";
            headerGen += "#endif // __" + ClassName.ToUpper() + "_H__";

            return headerGen;
        }

        public string GenChildIncludeName(List<Widgetnode> root)
        {

            string original = filename;
            string searchText = ".";
            string ClassName = original.Substring(0, original.IndexOf(searchText));

            if (root == null)
                return "";

            string outputstring = "";
            foreach (Widgetnode itemObj in root)
            {
                if (itemObj.child == null)
                {
                    if (itemObj.OutName != null)
                    {
                        outputstring += "#include \"" + itemObj.OutName + ".h\"\n";
                    }
                    continue;
                }
                else
                {
                    outputstring += "#include \"" + ClassName + "/" + itemObj.name + ".h\"\n";
                    //outputstring += SubClassIncludeHeaderGenerator(ClassName, itemObj);
                }


            }

            return outputstring;
        }
        public string GenChildIncludeName(int depth, Widgetnode root)
        {

            string original = filename;
            string searchText = ".";
            string ClassName = original.Substring(0, original.IndexOf(searchText));

            if (root == null)
                return "";

            string outputstring = "";
            foreach (Widgetnode itemObj in root.child)
            {
                if (itemObj.child == null)
                {
                    continue;
                }
                else
                {
                    outputstring += "#include \"";

                    for (int i = 0; i < depth; i++)
                        outputstring += "../";
                    outputstring += root.name + "/" + itemObj.name + ".h\"\n";
                    //outputstring += SubClassIncludeHeaderGenerator(ClassName, itemObj);
                }


            }
            return outputstring;
        }

        public string SubClassIncludeHeaderGenerator(string widgetname, Widgetnode Parnet)
        {
            string header = "";
            if (Parnet.child == null)
                return header;

            foreach (Widgetnode itemObj in Parnet.child)
            {
                if (itemObj.child != null)
                {
                    header += "#include \"" + Parnet.name + "/" + itemObj.name + ".h\"\n";

                    header += SubClassIncludeHeaderGenerator(itemObj.name, itemObj);
                }
            }
            return header;
        }


        public string ClassCppGenerator()
        {
            string original = filename;
            string searchText = ".";
            string ClassName = original.Substring(0, original.IndexOf(searchText));

            CppGen += "/// <summary>\n";
            CppGen += "/// 디자이너 지원에 필요한 메서드입니다.\n";
            CppGen += "/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.\n";
            CppGen += "/// </summary>\n";

            CppGen += "#include \"" + ClassName + ".h\"\n";
            CppGen += "\n";
            CppGen += "USING_NS_CC;\n";
            CppGen += "using namespace cocos2d;\n";
            CppGen += "using namespace ui;\n";
            CppGen += "\n";

            CppGen += ClassName + " * " + ClassName + "::instance;\n";


            CppGen += ClassMakerGenerator(ClassName);


            return CppGen;

        }

        public string ClassMakerGenerator(string ClassName)
        {
            string gen = "";
            // auto rootNode = CSLoader::createNode("MainScene.csb");
            //addChild(rootNode);
            gen += ClassName + "::" + ClassName + "()\n";
            gen += "{\n";
            gen += "\troot = CSLoader::createNode(\"" + ClassName + ".csb\");\n";
            gen += "\tthis->addChild(root, 0, 1);\n";
            gen += "\tInitPage();\n";
            gen += "\t" + ClassName + "::instance = this;\n";
            gen += "}\n";

            gen += ClassName + "::" + ClassName + "(Widget* _root)\n";
            gen += "{\n";
            gen += "\troot = _root;\n";
            gen += "\tInitPage();\n";
            gen += "\t" + ClassName + "::instance = this;\n";
            gen += "}\n";

            gen += ClassInitGenerator(ClassName);

            gen += GenAniName(ClassName);
            return gen;
        }

        public string ClassInitGenerator(string ClassName)
        {
            string gen = "";

            gen += "void " + ClassName + "::InitPage()\n";
            gen += "{\n";

            gen += GenAniNameInit(ClassName);
            gen += GenNodeNameInit(0, Widgetlist);

            gen += "}\n";

            return gen;
        }

        public string GenAniNameInit(string ClassName)
        {


            string outputstring = "";
            outputstring += "\taction" + ClassName + " = CSLoader::createTimeline(\"" + ClassName + ".csb\");\n";
            outputstring += "\t" + "root->runAction(action" + ClassName + ");\n";

            foreach (string itemObj in AnimationList)
            {
                //actionBettleReadyUI->getAnimationInfo("test").
                outputstring += "\t" + itemObj + " = action" + ClassName + "->getAnimationInfo(" + "\"" + itemObj + "\");\n";

                //outputstring += "\t" + itemObj + " = CSLoader::createTimeline(\"res\\" + ClassName + ".csb\");\n";
                //outputstring += "\t" + "root->runAction(" + itemObj + ");\n";
                //outputstring += "\t" + itemObj + "func = CCCallFunc::create(this, callfunc_selector(" + ClassName + "::" + itemObj + "funcEnd));\n";
                //outputstring += "\t" + itemObj + "func->retain();\n";
            }
            return outputstring;
        }


        public string GenNodeNameInit(int depth, List<Widgetnode> root)
        {
            if (root == null)
                return "";

            string original = filename;
            string searchText = ".";
            string ClassName = original.Substring(0, original.IndexOf(searchText));

            string gen = "";

            if (depth != 0)
            {
                for (int i = 0; i < depth; i++)
                {
                    gen += "\t";
                }
                gen += "{\n";
            }

            foreach (Widgetnode itemObj in root)
            {

                string classname = itemObj.classname;
                string widgetclass = "";

                for (int i = -1; i < depth; i++)
                {
                    widgetclass += "\t";
                }
                string outputclassname = GetClassName(itemObj);

                if (itemObj.child == null)
                {
                    //widgetclass += /*outputclassname +*/ itemObj.name + "= static_cast<" + outputclassname + ">(root->getChildByName(\"" + itemObj.name + "\"));\n";
                    if (itemObj.tag != 0)
                    {
                        widgetclass += /*outputclassname +*/ "m_" + itemObj.name + "= static_cast<" + outputclassname + ">(root->getChildByTag(" + itemObj.tag + "));\n";

                        if (classname == "Button")
                        {
                            for (int i = -1; i < depth; i++)
                            {
                                widgetclass += "\t";
                            }
                            widgetclass += "m_" + itemObj.name + "->getTitleRenderer()->enableShadow(cocos2d::Color4B(0, 0, 0, 80),cocos2d::Size(2,-2),2);\n";
                        }

                        if (itemObj.name == "chr_rank_icon" || itemObj.name == "rank_icon" || itemObj.name == "chr_rankicon")
                        {

                            string Rankiconpath = /*outputclassname +*/"m_" + itemObj.name;
                            string armaturepath = /*outputclassname +*/ "armature_" + itemObj.name;

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += Rankiconpath + "->setVisible(false); ";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo(\"ani/rank_icon.ExportJson\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + " = Armature::create(\"rank_icon\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->getAnimation()->play(\"rank1\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setZOrder(" + Rankiconpath + "->getZOrder()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setVisible(true);\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setPosition(" + Rankiconpath + "->getPosition()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setScale(" + Rankiconpath + "->getScale()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "root" + "->" + "addChild(" + armaturepath + ");\n";
                        }
                    }
                    else
                    {
                        widgetclass += /*outputclassname +*/ "m_" + itemObj.name + "= static_cast<" + outputclassname + ">(root->getChildByName(\"" + itemObj.original_name + "\"));\n";

                        if (classname == "Button")
                        {
                            for (int i = -1; i < depth; i++)
                            {
                                widgetclass += "\t";
                            }
                            widgetclass += "m_" + itemObj.name + "->getTitleRenderer()->enableShadow(cocos2d::Color4B(0, 0, 0, 80),cocos2d::Size(2,-2),2);\n";
                        }

                        if (itemObj.name == "chr_rank_icon" || itemObj.name == "rank_icon" || itemObj.name == "chr_rankicon")
                        {

                            string Rankiconpath = "m_" + itemObj.name;
                            string armaturepath = "armature_" + itemObj.name;

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "m_" + itemObj.name + "->setVisible(false); ";


                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo(\"ani/rank_icon.ExportJson\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + " = Armature::create(\"rank_icon\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->getAnimation()->play(\"rank1\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setZOrder(" + Rankiconpath + "->getZOrder()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setVisible(true);\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setPosition(" + Rankiconpath + "->getPosition()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setScale(" + Rankiconpath + "->getScale()" + ");\n";


                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "root" + "->" + "addChild(" + armaturepath + ");\n";
                        }
                    }
                }
                else
                {
                    widgetclass += outputclassname + "_" + itemObj.name + "= static_cast<" + outputclassname + ">(root->getChildByName(\"" + itemObj.original_name + "\"));\n";

                    if (classname == "Button")
                    {
                        for (int i = -1; i < depth; i++)
                        {
                            widgetclass += "\t";
                        }

                        widgetclass += "_" + itemObj.name + "->getTitleRenderer()->enableShadow(cocos2d::Color4B(0, 0, 0, 80),cocos2d::Size(2,-2),2);\n";
                    }
                }

                for (int i = -1; i < depth; i++)
                {
                    widgetclass += "\t";
                }
                if (itemObj.child != null)
                {
                    widgetclass += "_" + itemObj.name + "->retain();\n";

                    for (int i = -1; i < depth; i++)
                    {
                        widgetclass += "\t";
                    }
                    widgetclass += "m_" + itemObj.name + " = new CC" + ClassName + "::" + itemObj.name + "();\n";

                    for (int i = -1; i < depth; i++)
                    {
                        widgetclass += "\t";
                    }
                    widgetclass += "m_" + itemObj.name + "->root = _" + itemObj.name + ";\n";
                }
                else
                {

                    widgetclass += "m_" + itemObj.name + "->retain();\n";
                }
                gen += widgetclass;

                gen += GenNodeNameInit(depth + 1, "", itemObj);
            }

            if (depth != 0)
            {
                for (int i = 0; i < depth; i++)
                {
                    gen += "\t";
                }
                gen += "}\n";
            }
            //Widget* messagebox = static_cast<Widget*>(root->getChildByName("messagebox"));
            //messagebox->retain();
            return gen;
        }

        public string GenNodeNameInit(int depth, string objectpath, Widgetnode root)
        {


            if (root.child == null)
                return "";

            string original = filename;
            string searchText = ".";
            string OriginalClass = original.Substring(0, original.IndexOf(searchText));

            string gen = "";

            if (depth != 0)
            {
                for (int i = 0; i < depth; i++)
                {
                    gen += "\t";
                }
                gen += "{\n";
            }

            foreach (Widgetnode itemObj in root.child)
            {

                string classname = itemObj.classname;
                string widgetclass = "";

                for (int i = -1; i < depth; i++)
                {
                    widgetclass += "\t";
                }
                string outputclassname = GetClassName(itemObj);

                if (itemObj.child == null)
                {
                    if (objectpath != "")
                    {
                        //widgetclass += /*outputclassname +*/ itemObj.name + "= static_cast<" + outputclassname + ">(root->getChildByName(\"" + itemObj.name + "\"));\n";
                        if (itemObj.tag != 0)
                            widgetclass += /*outputclassname +*/objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + "= static_cast<" + outputclassname + ">(_" + root.name + "->getChildByTag(" + itemObj.tag + "));\n";
                        else
                            widgetclass += /*outputclassname +*/objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + "= static_cast<" + outputclassname + ">(_" + root.name + "->getChildByName(\"" + itemObj.original_name + "\"));\n";

                        if (classname == "Button")
                        {
                            for (int i = -1; i < depth; i++)
                            {
                                widgetclass += "\t";
                            }
                            widgetclass += objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + "->getTitleRenderer()->enableShadow(cocos2d::Color4B(0, 0, 0, 80),cocos2d::Size(2,-2),2);\n";
                        }

                        if (itemObj.name == "chr_rank_icon" || itemObj.name == "rank_icon" || itemObj.name == "chr_rankicon")
                        {
                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += /*outputclassname +*/objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + "->setVisible(false); ";

                            string Rankiconpath = /*outputclassname +*/objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name;
                            string armaturepath = /*outputclassname +*/objectpath + "->" + "m_" + root.name + "->" + "armature_" + itemObj.name;

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo(\"ani/rank_icon.ExportJson\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + " = Armature::create(\"rank_icon\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->getAnimation()->play(\"rank1\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setZOrder(" + Rankiconpath + "->getZOrder()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setVisible(true);\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setPosition(" + Rankiconpath + "->getPosition()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setScale(" + Rankiconpath + "->getScale()" + ");\n";


                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += objectpath + "->" + "m_" + root.name + "->root->" + "addChild(" + armaturepath + ");\n";
                        }
                    }
                    else
                    {
                        if (itemObj.tag != 0)
                            widgetclass += /*outputclassname +*/"m_" + root.name + "->" + "m_" + itemObj.name + "= static_cast<" + outputclassname + ">(_" + root.name + "->getChildByTag(" + itemObj.tag + "));\n";
                        else
                            widgetclass += /*outputclassname +*/"m_" + root.name + "->" + "m_" + itemObj.name + "= static_cast<" + outputclassname + ">(_" + root.name + "->getChildByName(\"" + itemObj.original_name + "\"));\n";

                        if (classname == "Button")
                        {
                            for (int i = -1; i < depth; i++)
                            {
                                widgetclass += "\t";
                            }
                            widgetclass += "m_" + root.name + "->" + "m_" + itemObj.name + "->getTitleRenderer()->enableShadow(cocos2d::Color4B(0, 0, 0, 80),cocos2d::Size(2,-2),2);\n";
                        }



                        if (itemObj.name == "chr_rank_icon" || itemObj.name == "rank_icon" || itemObj.name == "chr_rankicon")
                        {
                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += /*outputclassname +*/"m_" + root.name + "->" + "m_" + itemObj.name + "->setVisible(false);\n";

                            string Rankiconpath = /*outputclassname +*/ "m_" + root.name + "->" + "m_" + itemObj.name;
                            string armaturepath = /*outputclassname +*/"m_" + root.name + "->" + "armature_" + itemObj.name;

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo(\"ani/rank_icon.ExportJson\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + " = Armature::create(\"rank_icon\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->getAnimation()->play(\"rank1\");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setZOrder(" + Rankiconpath + "->getZOrder()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setVisible(true);\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setPosition(" + Rankiconpath + "->getPosition()" + ");\n";

                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += armaturepath + "->setScale(" + Rankiconpath + "->getScale()" + ");\n";


                            for (int i = -1; i < depth; i++) { widgetclass += "\t"; }
                            widgetclass += "m_" + root.name + "->root->" + "addChild(" + armaturepath + ");\n";
                        }

                    }
                }
                else
                {
                    widgetclass += outputclassname + "_" + itemObj.name + "= static_cast<" + outputclassname + ">(_" + root.name + "->getChildByName(\"" + itemObj.original_name + "\"));\n";
                }
                for (int i = -1; i < depth; i++)
                {
                    widgetclass += "\t";
                }
                if (itemObj.child != null)
                {
                    widgetclass += "_" + itemObj.name + "->retain();\n";

                    for (int i = -1; i < depth; i++)
                    {
                        widgetclass += "\t";
                    }

                    if (objectpath != "")
                    {
                        widgetclass += objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + " = new CC" + root.name + "::" + itemObj.name + "();\n";
                    }
                    else
                    {
                        widgetclass += "m_" + root.name + "->" + "m_" + itemObj.name + " = new CC" + root.name + "::" + itemObj.name + "();\n";
                    }

                    for (int i = -1; i < depth; i++)
                    {
                        widgetclass += "\t";
                    }

                    if (objectpath != "")
                    {
                        widgetclass += objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + "->root = _" + itemObj.name + ";\n";
                    }
                    else
                    {
                        widgetclass += "m_" + root.name + "->" + "m_" + itemObj.name + "->root = _" + itemObj.name + ";\n";
                    }
                }
                else
                {
                    if (objectpath != "")
                    {
                        widgetclass += objectpath + "->" + "m_" + root.name + "->" + "m_" + itemObj.name + "->retain();\n";
                    }
                    else
                    {
                        widgetclass += "m_" + root.name + "->" + "m_" + itemObj.name + "->retain();\n";
                    }
                }


                gen += widgetclass;

                if (objectpath == "")
                {
                    gen += GenNodeNameInit(depth + 1, "m_" + root.name, itemObj);
                }
                else
                {
                    gen += GenNodeNameInit(depth + 1, objectpath + "->" + "m_" + root.name, itemObj);
                }

            }

            if (depth != 0)
            {
                for (int i = 0; i < depth; i++)
                {
                    gen += "\t";
                }
                gen += "}\n";
            }
            //Widget* messagebox = static_cast<Widget*>(root->getChildByName("messagebox"));
            //messagebox->retain();
            return gen;
        }


        public string GenAniName(string ClassName)
        {
            //string outputstring = "";
            //
            //foreach (string itemObj in AnimationList)
            //{
            //
            //    outputstring += "void " + ClassName + "::" + itemObj + "funcEnd()\n";
            //    outputstring += "{\n";
            //    outputstring += "\t" + itemObj + "->stop();\n";
            //    outputstring += "}\n";
            //}

            //return outputstring;
            //do noting
            return "";
        }





    }
}
