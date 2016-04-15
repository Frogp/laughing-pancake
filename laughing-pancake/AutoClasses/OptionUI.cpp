/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "OptionUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

OptionUI * OptionUI::instance;
OptionUI::OptionUI()
{
	root = CSLoader::createNode("OptionUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	OptionUI::instance = this;
}
OptionUI::OptionUI(Widget* _root)
{
	root = _root;
	InitPage();
	OptionUI::instance = this;
}
void OptionUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionOptionUI = CSLoader::createTimeline("OptionUI.csb");
	root->runAction(actionOptionUI);
	Layout *_Panel_1= static_cast<Layout *>(root->getChildByName("Panel_1"));
	_Panel_1->retain();
	m_Panel_1 = new CCOptionUI::Panel_1();
	m_Panel_1->root = _Panel_1;
	{
		m_Panel_1->m_Image_1= static_cast<cocos2d::ui::ImageView *>(_Panel_1->getChildByName("Image_1"));
		m_Panel_1->m_Image_1->retain();
		m_Panel_1->m_Text_1= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_1"));
		m_Panel_1->m_Text_1->retain();
		m_Panel_1->m_Button_2= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("Button_2"));
		m_Panel_1->m_Button_2->retain();
		m_Panel_1->m_Slider_1= static_cast<cocos2d::ui::Slider *>(_Panel_1->getChildByName("Slider_1"));
		m_Panel_1->m_Slider_1->retain();
		m_Panel_1->m_Slider_1_0= static_cast<cocos2d::ui::Slider *>(_Panel_1->getChildByName("Slider_1_0"));
		m_Panel_1->m_Slider_1_0->retain();
		m_Panel_1->m_CheckBox_1= static_cast<CheckBox *>(_Panel_1->getChildByName("CheckBox_1"));
		m_Panel_1->m_CheckBox_1->retain();
		m_Panel_1->m_Text_3= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_3"));
		m_Panel_1->m_Text_3->retain();
		m_Panel_1->m_CheckBox_1_0= static_cast<CheckBox *>(_Panel_1->getChildByName("CheckBox_1_0"));
		m_Panel_1->m_CheckBox_1_0->retain();
		m_Panel_1->m_Text_3_0= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_3_0"));
		m_Panel_1->m_Text_3_0->retain();
		m_Panel_1->m_Text_5= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_5"));
		m_Panel_1->m_Text_5->retain();
		m_Panel_1->m_Text_5_0= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_5_0"));
		m_Panel_1->m_Text_5_0->retain();
	}
}
