/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "MessageBoxUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

MessageBoxUI * MessageBoxUI::instance;
MessageBoxUI::MessageBoxUI()
{
	root = CSLoader::createNode("MessageBoxUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	MessageBoxUI::instance = this;
}
MessageBoxUI::MessageBoxUI(Widget* _root)
{
	root = _root;
	InitPage();
	MessageBoxUI::instance = this;
}
void MessageBoxUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionMessageBoxUI = CSLoader::createTimeline("MessageBoxUI.csb");
	root->runAction(actionMessageBoxUI);
	Layout *_Panel_1= static_cast<Layout *>(root->getChildByName("Panel_1"));
	_Panel_1->retain();
	m_Panel_1 = new CCMessageBoxUI::Panel_1();
	m_Panel_1->root = _Panel_1;
	{
		m_Panel_1->m_Button_3= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("Button_3"));
		m_Panel_1->m_Button_3->retain();
		m_Panel_1->m_Button_3_0= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("Button_3_0"));
		m_Panel_1->m_Button_3_0->retain();
		m_Panel_1->m_Image_1= static_cast<cocos2d::ui::ImageView *>(_Panel_1->getChildByName("Image_1"));
		m_Panel_1->m_Image_1->retain();
		m_Panel_1->m_Text_1= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_1"));
		m_Panel_1->m_Text_1->retain();
		m_Panel_1->m_Text_2= static_cast<cocos2d::ui::Text *>(_Panel_1->getChildByName("Text_2"));
		m_Panel_1->m_Text_2->retain();
		m_Panel_1->m_Button_2= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("Button_2"));
		m_Panel_1->m_Button_2->retain();
	}
}
