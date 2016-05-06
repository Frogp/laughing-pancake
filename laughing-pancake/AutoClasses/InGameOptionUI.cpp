/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "InGameOptionUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

InGameOptionUI * InGameOptionUI::instance;
InGameOptionUI::InGameOptionUI()
{
	root = CSLoader::createNode("InGameOptionUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	InGameOptionUI::instance = this;
}
InGameOptionUI::InGameOptionUI(Widget* _root)
{
	root = _root;
	InitPage();
	InGameOptionUI::instance = this;
}
void InGameOptionUI::InitPage()
{
	actionInGameOptionUI = CSLoader::createTimeline("InGameOptionUI.csb");
	root->runAction(actionInGameOptionUI);
	m_Panel_1= static_cast<Layout *>(root->getChildByName("Panel_1"));
	m_Panel_1->retain();
	m_Button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1"));
	m_Button_1->retain();
	m_CheckBox_1= static_cast<CheckBox *>(root->getChildByName("CheckBox_1"));
	m_CheckBox_1->retain();
	m_Text_1= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1"));
	m_Text_1->retain();
	m_CheckBox_1_0= static_cast<CheckBox *>(root->getChildByName("CheckBox_1_0"));
	m_CheckBox_1_0->retain();
	m_Text_1_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1_0"));
	m_Text_1_0->retain();
	m_Slider_1= static_cast<cocos2d::ui::Slider *>(root->getChildByName("Slider_1"));
	m_Slider_1->retain();
	m_Slider_1_0= static_cast<cocos2d::ui::Slider *>(root->getChildByName("Slider_1_0"));
	m_Slider_1_0->retain();
	m_titlebox1_1= static_cast<cocos2d::Sprite *>(root->getChildByName("titlebox1_1"));
	m_titlebox1_1->retain();
	m_close= static_cast<cocos2d::ui::Button* >(root->getChildByName("close"));
	m_close->retain();
	m_Surrender= static_cast<cocos2d::ui::Button* >(root->getChildByName("Surrender"));
	m_Surrender->retain();
}
