/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "BettlePageUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

BettlePageUI * BettlePageUI::instance;
BettlePageUI::BettlePageUI()
{
	root = CSLoader::createNode("res\\BettlePageUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	BettlePageUI::instance = this;
}
BettlePageUI::BettlePageUI(Widget* _root)
{
	root = _root;
	InitPage();
	BettlePageUI::instance = this;
}
void BettlePageUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionBettlePageUI = CSLoader::createTimeline("res\\BettlePageUI.csb");
	root->runAction(actionBettlePageUI);
	Layout *_Panel_2= static_cast<Layout *>(root->getChildByName("Panel_2"));
	_Panel_2->retain();
	m_Panel_2 = new CCBettlePageUI::Panel_2();
	m_Panel_2->root = _Panel_2;
	{
		ListView *_ListView_1= static_cast<ListView *>(_Panel_2->getChildByName("ListView_1"));
		_ListView_1->retain();
		m_Panel_2->m_ListView_1 = new CCPanel_2::ListView_1();
		m_Panel_2->m_ListView_1->root = _ListView_1;
		{
			Layout *_Panel_1= static_cast<Layout *>(_ListView_1->getChildByName("Panel_1"));
			_Panel_1->retain();
			m_Panel_2->m_ListView_1->m_Panel_1 = new CCListView_1::Panel_1();
			m_Panel_2->m_ListView_1->m_Panel_1->root = _Panel_1;
			{
				m_Panel_2->m_ListView_1->m_Panel_1->m_Button_1_0= static_cast<cocos2d::ui::Button* >(_Panel_1->getChildByName("Button_1_0"));
				m_Panel_2->m_ListView_1->m_Panel_1->m_Button_1_0->retain();
			}
		}
	}
	m_titlebox1_1= static_cast<cocos2d::Sprite *>(root->getChildByName("titlebox1_1"));
	m_titlebox1_1->retain();
	Layout *_Panel_3= static_cast<Layout *>(root->getChildByName("Panel_3"));
	_Panel_3->retain();
	m_Panel_3 = new CCBettlePageUI::Panel_3();
	m_Panel_3->root = _Panel_3;
	{
		ListView *_ListView_2= static_cast<ListView *>(_Panel_3->getChildByName("ListView_2"));
		_ListView_2->retain();
		m_Panel_3->m_ListView_2 = new CCPanel_3::ListView_2();
		m_Panel_3->m_ListView_2->root = _ListView_2;
		{
			Layout *_Panel_4= static_cast<Layout *>(_ListView_2->getChildByName("Panel_4"));
			_Panel_4->retain();
			m_Panel_3->m_ListView_2->m_Panel_4 = new CCListView_2::Panel_4();
			m_Panel_3->m_ListView_2->m_Panel_4->root = _Panel_4;
			{
				m_Panel_3->m_ListView_2->m_Panel_4->m_Button_2= static_cast<cocos2d::ui::Button* >(_Panel_4->getChildByName("Button_2"));
				m_Panel_3->m_ListView_2->m_Panel_4->m_Button_2->retain();
			}
		}
		ListView *_ListView_2_0= static_cast<ListView *>(_Panel_3->getChildByName("ListView_2_0"));
		_ListView_2_0->retain();
		m_Panel_3->m_ListView_2_0 = new CCPanel_3::ListView_2_0();
		m_Panel_3->m_ListView_2_0->root = _ListView_2_0;
		{
			Layout *_Panel_4= static_cast<Layout *>(_ListView_2_0->getChildByName("Panel_4"));
			_Panel_4->retain();
			m_Panel_3->m_ListView_2_0->m_Panel_4 = new CCListView_2_0::Panel_4();
			m_Panel_3->m_ListView_2_0->m_Panel_4->root = _Panel_4;
			{
				m_Panel_3->m_ListView_2_0->m_Panel_4->m_Button_2= static_cast<cocos2d::ui::Button* >(_Panel_4->getChildByName("Button_2"));
				m_Panel_3->m_ListView_2_0->m_Panel_4->m_Button_2->retain();
			}
		}
		ListView *_ListView_2_1= static_cast<ListView *>(_Panel_3->getChildByName("ListView_2_1"));
		_ListView_2_1->retain();
		m_Panel_3->m_ListView_2_1 = new CCPanel_3::ListView_2_1();
		m_Panel_3->m_ListView_2_1->root = _ListView_2_1;
		{
			Layout *_Panel_4= static_cast<Layout *>(_ListView_2_1->getChildByName("Panel_4"));
			_Panel_4->retain();
			m_Panel_3->m_ListView_2_1->m_Panel_4 = new CCListView_2_1::Panel_4();
			m_Panel_3->m_ListView_2_1->m_Panel_4->root = _Panel_4;
			{
				m_Panel_3->m_ListView_2_1->m_Panel_4->m_Button_2= static_cast<cocos2d::ui::Button* >(_Panel_4->getChildByName("Button_2"));
				m_Panel_3->m_ListView_2_1->m_Panel_4->m_Button_2->retain();
			}
		}
		ListView *_ListView_2_2= static_cast<ListView *>(_Panel_3->getChildByName("ListView_2_2"));
		_ListView_2_2->retain();
		m_Panel_3->m_ListView_2_2 = new CCPanel_3::ListView_2_2();
		m_Panel_3->m_ListView_2_2->root = _ListView_2_2;
		{
			Layout *_Panel_4= static_cast<Layout *>(_ListView_2_2->getChildByName("Panel_4"));
			_Panel_4->retain();
			m_Panel_3->m_ListView_2_2->m_Panel_4 = new CCListView_2_2::Panel_4();
			m_Panel_3->m_ListView_2_2->m_Panel_4->root = _Panel_4;
			{
				m_Panel_3->m_ListView_2_2->m_Panel_4->m_Button_2= static_cast<cocos2d::ui::Button* >(_Panel_4->getChildByName("Button_2"));
				m_Panel_3->m_ListView_2_2->m_Panel_4->m_Button_2->retain();
			}
		}
	}
	m_titlebox1_1_6= static_cast<cocos2d::Sprite *>(root->getChildByName("titlebox1_1_6"));
	m_titlebox1_1_6->retain();
	m_BtNormal= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtNormal"));
	m_BtNormal->retain();
	m_Button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1"));
	m_Button_1->retain();
	m_BtRank= static_cast<cocos2d::ui::Button* >(root->getChildByName("BtRank"));
	m_BtRank->retain();
	m_Text_1= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1"));
	m_Text_1->retain();
	m_Text_1_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1_0"));
	m_Text_1_0->retain();
}
