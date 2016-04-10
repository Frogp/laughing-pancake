/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "InGameHUD.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

InGameHUD * InGameHUD::instance;
InGameHUD::InGameHUD()
{
	root = CSLoader::createNode("res\\InGameHUD.csb");
	this->addChild(root, 0, 1);
	InitPage();
	InGameHUD::instance = this;
}
InGameHUD::InGameHUD(Widget* _root)
{
	root = _root;
	InitPage();
	InGameHUD::instance = this;
}
void InGameHUD::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionInGameHUD = CSLoader::createTimeline("res\\InGameHUD.csb");
	root->runAction(actionInGameHUD);
	m_Menu= static_cast<cocos2d::ui::Button* >(root->getChildByName("Menu"));
	m_Menu->retain();
	m_LoadingBar_2= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("LoadingBar_2"));
	m_LoadingBar_2->retain();
	m_Button_2= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_2"));
	m_Button_2->retain();
	m_Button_2_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_2_0"));
	m_Button_2_0->retain();
	m_Button_2_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_2_1"));
	m_Button_2_1->retain();
	m_Button_2_2= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_2_2"));
	m_Button_2_2->retain();
	m_Button_2_3= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_2_3"));
	m_Button_2_3->retain();
	m_loadingbar_back_1= static_cast<cocos2d::Sprite *>(root->getChildByName("loadingbar_back_1"));
	m_loadingbar_back_1->retain();
	m_LoadingBar_1= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("LoadingBar_1"));
	m_LoadingBar_1->retain();
}
