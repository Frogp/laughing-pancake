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
	root = CSLoader::createNode("MainUI.csb");
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
	actionMainUI = CSLoader::createTimeline("MainUI.csb");
	root->runAction(actionMainUI);
	Oppening = actionMainUI->getAnimationInfo("Oppening");
	m_background= static_cast<cocos2d::Sprite *>(root->getChildByName("background"));
	m_background->retain();
	m_BtAdventure= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtAdventure"));
	m_BtAdventure->retain();
	cocos2d::Node *_Node_1_0= static_cast<cocos2d::Node *>(root->getChildByName("Node_1_0"));
	_Node_1_0->retain();
	m_Node_1_0 = new CCMainUI::Node_1_0();
	m_Node_1_0->root = _Node_1_0;
	{
		m_Node_1_0->m_deco1_1_1= static_cast<cocos2d::Sprite *>(_Node_1_0->getChildByName("deco1_1_1"));
		m_Node_1_0->m_deco1_1_1->retain();
		m_Node_1_0->m_deco1_1_0_0= static_cast<cocos2d::Sprite *>(_Node_1_0->getChildByName("deco1_1_0_0"));
		m_Node_1_0->m_deco1_1_0_0->retain();
		m_Node_1_0->m_deco1_1_2_0= static_cast<cocos2d::Sprite *>(_Node_1_0->getChildByName("deco1_1_2_0"));
		m_Node_1_0->m_deco1_1_2_0->retain();
		m_Node_1_0->m_deco1_1_0_1_0= static_cast<cocos2d::Sprite *>(_Node_1_0->getChildByName("deco1_1_0_1_0"));
		m_Node_1_0->m_deco1_1_0_1_0->retain();
	}
	m_BtBettle= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtBettle"));
	m_BtBettle->retain();
	cocos2d::Node *_Node_1= static_cast<cocos2d::Node *>(root->getChildByName("Node_1"));
	_Node_1->retain();
	m_Node_1 = new CCMainUI::Node_1();
	m_Node_1->root = _Node_1;
	{
		m_Node_1->m_deco1_1_1= static_cast<cocos2d::Sprite *>(_Node_1->getChildByName("deco1_1_1"));
		m_Node_1->m_deco1_1_1->retain();
		m_Node_1->m_deco1_1_0_0= static_cast<cocos2d::Sprite *>(_Node_1->getChildByName("deco1_1_0_0"));
		m_Node_1->m_deco1_1_0_0->retain();
		m_Node_1->m_deco1_1_2_0= static_cast<cocos2d::Sprite *>(_Node_1->getChildByName("deco1_1_2_0"));
		m_Node_1->m_deco1_1_2_0->retain();
		m_Node_1->m_deco1_1_0_1_0= static_cast<cocos2d::Sprite *>(_Node_1->getChildByName("deco1_1_0_1_0"));
		m_Node_1->m_deco1_1_0_1_0->retain();
	}
	m_BtFriends= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtFriends"));
	m_BtFriends->retain();
	m_BtAchiv= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtAchiv"));
	m_BtAchiv->retain();
	m_BtLevel= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtLevel"));
	m_BtLevel->retain();
	m_BtMoney= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtMoney"));
	m_BtMoney->retain();
	m_BtOption= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtOption"));
	m_BtOption->retain();
}
