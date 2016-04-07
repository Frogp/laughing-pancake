/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "BettleStartUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

BettleStartUI * BettleStartUI::instance;
BettleStartUI::BettleStartUI()
{
	root = CSLoader::createNode("res\\BettleStartUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	BettleStartUI::instance = this;
}
BettleStartUI::BettleStartUI(Widget* _root)
{
	root = _root;
	InitPage();
	BettleStartUI::instance = this;
}
void BettleStartUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionBettleStartUI = CSLoader::createTimeline("res\\BettleStartUI.csb");
	root->runAction(actionBettleStartUI);
	Layout *_Panel_1= static_cast<Layout *>(root->getChildByName("Panel_1"));
	_Panel_1->retain();
	m_Panel_1 = new CCBettleStartUI::Panel_1();
	m_Panel_1->root = _Panel_1;
	{
		Layout *_Panel_2= static_cast<Layout *>(_Panel_1->getChildByName("Panel_2"));
		_Panel_2->retain();
		m_Panel_1->m_Panel_2 = new CCPanel_1::Panel_2();
		m_Panel_1->m_Panel_2->root = _Panel_2;
		{
			m_Panel_1->m_Panel_2->m_Image_3= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_3"));
			m_Panel_1->m_Panel_2->m_Image_3->retain();
		}
		Layout *_Panel_2_0= static_cast<Layout *>(_Panel_1->getChildByName("Panel_2_0"));
		_Panel_2_0->retain();
		m_Panel_1->m_Panel_2_0 = new CCPanel_1::Panel_2_0();
		m_Panel_1->m_Panel_2_0->root = _Panel_2_0;
		{
			m_Panel_1->m_Panel_2_0->m_Image_5= static_cast<cocos2d::ui::ImageView *>(_Panel_2_0->getChildByName("Image_5"));
			m_Panel_1->m_Panel_2_0->m_Image_5->retain();
			m_Panel_1->m_Panel_2_0->m_Text_1= static_cast<cocos2d::ui::Text *>(_Panel_2_0->getChildByName("Text_1"));
			m_Panel_1->m_Panel_2_0->m_Text_1->retain();
		}
		m_Panel_1->m_Button_1= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("Button_1"));
		m_Panel_1->m_Button_1->retain();
		m_Panel_1->m_BtStart= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("BtStart"));
		m_Panel_1->m_BtStart->retain();
	}
}
