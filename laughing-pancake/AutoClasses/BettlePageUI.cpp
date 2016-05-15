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
	root = CSLoader::createNode("BettlePageUI.csb");
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
	actionBettlePageUI = CSLoader::createTimeline("BettlePageUI.csb");
	root->runAction(actionBettlePageUI);
	Oppening = actionBettlePageUI->getAnimationInfo("Oppening");
	Selection = actionBettlePageUI->getAnimationInfo("Selection");
	m_Panel_69= static_cast<Layout *>(root->getChildByName("Panel_69"));
	m_Panel_69->retain();
	Layout *_Panel_8= static_cast<Layout *>(root->getChildByName("Panel_8"));
	_Panel_8->retain();
	m_Panel_8 = new CCBettlePageUI::Panel_8();
	m_Panel_8->root = _Panel_8;
	{
		Layout *_Panel_2= static_cast<Layout *>(_Panel_8->getChildByName("Panel_2"));
		_Panel_2->retain();
		m_Panel_8->m_Panel_2 = new CCPanel_8::Panel_2();
		m_Panel_8->m_Panel_2->root = _Panel_2;
		{
			Layout *_Panel_1_0= static_cast<Layout *>(_Panel_2->getChildByName("Panel_1_0"));
			_Panel_1_0->retain();
			m_Panel_8->m_Panel_2->m_Panel_1_0 = new CCPanel_2::Panel_1_0();
			m_Panel_8->m_Panel_2->m_Panel_1_0->root = _Panel_1_0;
			{
				m_Panel_8->m_Panel_2->m_Panel_1_0->m_Conneritem3_18= static_cast<cocos2d::Sprite *>(_Panel_1_0->getChildByName("Conneritem3_18"));
				m_Panel_8->m_Panel_2->m_Panel_1_0->m_Conneritem3_18->retain();
				m_Panel_8->m_Panel_2->m_Panel_1_0->m_Conneritem3_18_0= static_cast<cocos2d::Sprite *>(_Panel_1_0->getChildByName("Conneritem3_18_0"));
				m_Panel_8->m_Panel_2->m_Panel_1_0->m_Conneritem3_18_0->retain();
				m_Panel_8->m_Panel_2->m_Panel_1_0->m_Text_1_0= static_cast<cocos2d::ui::Text *>(_Panel_1_0->getChildByName("Text_1_0"));
				m_Panel_8->m_Panel_2->m_Panel_1_0->m_Text_1_0->retain();
			}
			m_Panel_8->m_Panel_2->m_Conneritem_3_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0"));
			m_Panel_8->m_Panel_2->m_Conneritem_3_0->retain();
			m_Panel_8->m_Panel_2->m_Conneritem_3_0_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0_0"));
			m_Panel_8->m_Panel_2->m_Conneritem_3_0_0->retain();
			m_Panel_8->m_Panel_2->m_Conneritem_3_0_0_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0_0_0"));
			m_Panel_8->m_Panel_2->m_Conneritem_3_0_0_0->retain();
			m_Panel_8->m_Panel_2->m_Conneritem_3_0_0_0_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0_0_0_0"));
			m_Panel_8->m_Panel_2->m_Conneritem_3_0_0_0_0->retain();
			m_Panel_8->m_Panel_2->m_Conneritem2_8= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem2_8"));
			m_Panel_8->m_Panel_2->m_Conneritem2_8->retain();
			m_Panel_8->m_Panel_2->m_Conneritem2_8_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem2_8_0"));
			m_Panel_8->m_Panel_2->m_Conneritem2_8_0->retain();
			Layout *_ObjCharictor= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor"));
			_ObjCharictor->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor = new CCPanel_2::ObjCharictor();
			m_Panel_8->m_Panel_2->m_ObjCharictor->root = _ObjCharictor;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_Panel_1= static_cast<Layout *>(_ObjCharictor->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_1= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_1"));
			_ObjCharictor_1->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_1 = new CCPanel_2::ObjCharictor_1();
			m_Panel_8->m_Panel_2->m_ObjCharictor_1->root = _ObjCharictor_1;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_1->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_Panel_1= static_cast<Layout *>(_ObjCharictor_1->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_1->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_1->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_1->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_1->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_2= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_2"));
			_ObjCharictor_2->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_2 = new CCPanel_2::ObjCharictor_2();
			m_Panel_8->m_Panel_2->m_ObjCharictor_2->root = _ObjCharictor_2;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_2->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_Panel_1= static_cast<Layout *>(_ObjCharictor_2->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_2->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_2->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_2->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_2->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_3= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_3"));
			_ObjCharictor_3->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_3 = new CCPanel_2::ObjCharictor_3();
			m_Panel_8->m_Panel_2->m_ObjCharictor_3->root = _ObjCharictor_3;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_3->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_Panel_1= static_cast<Layout *>(_ObjCharictor_3->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_3->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_3->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_3->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_3->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_4= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_4"));
			_ObjCharictor_4->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_4 = new CCPanel_2::ObjCharictor_4();
			m_Panel_8->m_Panel_2->m_ObjCharictor_4->root = _ObjCharictor_4;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_4->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_Panel_1= static_cast<Layout *>(_ObjCharictor_4->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_4->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_4->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_4->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_4->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_5= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_5"));
			_ObjCharictor_5->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_5 = new CCPanel_2::ObjCharictor_5();
			m_Panel_8->m_Panel_2->m_ObjCharictor_5->root = _ObjCharictor_5;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_5->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_Panel_1= static_cast<Layout *>(_ObjCharictor_5->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_5->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_5->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_5->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_5->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_6= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_6"));
			_ObjCharictor_6->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_6 = new CCPanel_2::ObjCharictor_6();
			m_Panel_8->m_Panel_2->m_ObjCharictor_6->root = _ObjCharictor_6;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_6->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_Panel_1= static_cast<Layout *>(_ObjCharictor_6->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_6->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_6->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_6->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_6->m_FileNode_2->retain();
			}
			Layout *_ObjCharictor_7= static_cast<Layout *>(_Panel_2->getChildByName("ObjCharictor_7"));
			_ObjCharictor_7->retain();
			m_Panel_8->m_Panel_2->m_ObjCharictor_7 = new CCPanel_2::ObjCharictor_7();
			m_Panel_8->m_Panel_2->m_ObjCharictor_7->root = _ObjCharictor_7;
			{
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_BtClicker= static_cast<cocos2d::ui::Button* >(_ObjCharictor_7->getChildByName("BtClicker"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_BtClicker->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_Panel_1= static_cast<Layout *>(_ObjCharictor_7->getChildByName("Panel_1"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_Panel_1->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor_7->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor_7->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor_7->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor_7->m_FileNode_2->retain();
			}
		}
		m_Panel_8->m_btBack= static_cast<cocos2d::ui::Button* >(_Panel_8->getChildByName("btBack"));
		m_Panel_8->m_btBack->retain();
	}
}
