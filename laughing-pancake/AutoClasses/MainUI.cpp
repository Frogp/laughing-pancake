/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "MainUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

MainUI * MainUI::instance;
MainUI::MainUI()
{
	root = CSLoader::createNode("res\\MainUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	MainUI::instance = this;
}
MainUI::MainUI(Widget* _root)
{
	root = _root;
	InitPage();
	MainUI::instance = this;
}
void MainUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionMainUI = CSLoader::createTimeline("res\\MainUI.csb");
	root->runAction(actionMainUI);
	m_Image_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_1"));
	m_Image_1->retain();
	m_Button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1"));
	m_Button_1->retain();
	m_Button_1_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0"));
	m_Button_1_0->retain();
	m_Button_1_0_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0"));
	m_Button_1_0_0->retain();
	m_BtBettle= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtBettle"));
	m_BtBettle->retain();
	m_Button_1_0_0_0_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0_0_0"));
	m_Button_1_0_0_0_0->retain();
	m_Button_1_0_0_0_0_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0_0_0_0"));
	m_Button_1_0_0_0_0_0->retain();
	m_Button_1_0_0_0_0_0_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0_0_0_0_0"));
	m_Button_1_0_0_0_0_0_0->retain();
	m_Button_1_0_0_0_0_0_0_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0_0_0_0_0_0"));
	m_Button_1_0_0_0_0_0_0_0->retain();
	m_Button_1_0_0_0_0_0_0_0_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0_0_0_0_0_0_0"));
	m_Button_1_0_0_0_0_0_0_0_0->retain();
	m_Button_1_0_0_0_0_0_0_0_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0_0_0_0_0_0_0_1"));
	m_Button_1_0_0_0_0_0_0_0_1->retain();
}
