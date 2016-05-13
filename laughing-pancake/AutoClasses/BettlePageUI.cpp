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
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_DeckName= static_cast<cocos2d::ui::Text *>(_ObjCharictor->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_ObjCharictor->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_FileNode_2= static_cast<cocos2d::Node *>(_ObjCharictor->getChildByName("FileNode_2"));
				m_Panel_8->m_Panel_2->m_ObjCharictor->m_FileNode_2->retain();
			}
			Layout *_Pn_2= static_cast<Layout *>(_Panel_2->getChildByName("Pn_2"));
			_Pn_2->retain();
			m_Panel_8->m_Panel_2->m_Pn_2 = new CCPanel_2::Pn_2();
			m_Panel_8->m_Panel_2->m_Pn_2->root = _Pn_2;
			{
				m_Panel_8->m_Panel_2->m_Pn_2->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_2->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_2->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_2->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_2->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_2->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_2->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_2->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_2->m_FileNode_2_0->retain();
			}
			Layout *_Pn_3= static_cast<Layout *>(_Panel_2->getChildByName("Pn_3"));
			_Pn_3->retain();
			m_Panel_8->m_Panel_2->m_Pn_3 = new CCPanel_2::Pn_3();
			m_Panel_8->m_Panel_2->m_Pn_3->root = _Pn_3;
			{
				m_Panel_8->m_Panel_2->m_Pn_3->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_3->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_3->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_3->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_3->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_3->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_3->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_3->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_3->m_FileNode_2_0->retain();
			}
			Layout *_Pn_4= static_cast<Layout *>(_Panel_2->getChildByName("Pn_4"));
			_Pn_4->retain();
			m_Panel_8->m_Panel_2->m_Pn_4 = new CCPanel_2::Pn_4();
			m_Panel_8->m_Panel_2->m_Pn_4->root = _Pn_4;
			{
				m_Panel_8->m_Panel_2->m_Pn_4->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_4->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_4->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_4->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_4->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_4->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_4->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_4->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_4->m_FileNode_2_0->retain();
			}
			Layout *_Pn_5= static_cast<Layout *>(_Panel_2->getChildByName("Pn_5"));
			_Pn_5->retain();
			m_Panel_8->m_Panel_2->m_Pn_5 = new CCPanel_2::Pn_5();
			m_Panel_8->m_Panel_2->m_Pn_5->root = _Pn_5;
			{
				m_Panel_8->m_Panel_2->m_Pn_5->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_5->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_5->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_5->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_5->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_5->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_5->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_5->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_5->m_FileNode_2_0->retain();
			}
			Layout *_Pn_6= static_cast<Layout *>(_Panel_2->getChildByName("Pn_6"));
			_Pn_6->retain();
			m_Panel_8->m_Panel_2->m_Pn_6 = new CCPanel_2::Pn_6();
			m_Panel_8->m_Panel_2->m_Pn_6->root = _Pn_6;
			{
				m_Panel_8->m_Panel_2->m_Pn_6->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_6->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_6->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_6->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_6->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_6->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_6->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_6->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_6->m_FileNode_2_0->retain();
			}
			Layout *_Pn_7= static_cast<Layout *>(_Panel_2->getChildByName("Pn_7"));
			_Pn_7->retain();
			m_Panel_8->m_Panel_2->m_Pn_7 = new CCPanel_2::Pn_7();
			m_Panel_8->m_Panel_2->m_Pn_7->root = _Pn_7;
			{
				m_Panel_8->m_Panel_2->m_Pn_7->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_7->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_7->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_7->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_7->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_7->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_7->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_7->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_7->m_FileNode_2_0->retain();
			}
			Layout *_Pn_8= static_cast<Layout *>(_Panel_2->getChildByName("Pn_8"));
			_Pn_8->retain();
			m_Panel_8->m_Panel_2->m_Pn_8 = new CCPanel_2::Pn_8();
			m_Panel_8->m_Panel_2->m_Pn_8->root = _Pn_8;
			{
				m_Panel_8->m_Panel_2->m_Pn_8->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_8->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_8->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_8->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_8->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_8->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_8->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_8->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_8->m_FileNode_2_0->retain();
			}
			Layout *_Pn_9= static_cast<Layout *>(_Panel_2->getChildByName("Pn_9"));
			_Pn_9->retain();
			m_Panel_8->m_Panel_2->m_Pn_9 = new CCPanel_2::Pn_9();
			m_Panel_8->m_Panel_2->m_Pn_9->root = _Pn_9;
			{
				m_Panel_8->m_Panel_2->m_Pn_9->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_9->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_9->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_9->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_9->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_9->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_9->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_9->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_9->m_FileNode_2_0->retain();
			}
			Layout *_Pn_10= static_cast<Layout *>(_Panel_2->getChildByName("Pn_10"));
			_Pn_10->retain();
			m_Panel_8->m_Panel_2->m_Pn_10 = new CCPanel_2::Pn_10();
			m_Panel_8->m_Panel_2->m_Pn_10->root = _Pn_10;
			{
				m_Panel_8->m_Panel_2->m_Pn_10->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_10->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_10->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_10->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_10->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_10->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_10->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_10->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_10->m_FileNode_2_0->retain();
			}
			Layout *_Pn_11= static_cast<Layout *>(_Panel_2->getChildByName("Pn_11"));
			_Pn_11->retain();
			m_Panel_8->m_Panel_2->m_Pn_11 = new CCPanel_2::Pn_11();
			m_Panel_8->m_Panel_2->m_Pn_11->root = _Pn_11;
			{
				m_Panel_8->m_Panel_2->m_Pn_11->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_11->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_11->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_11->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_11->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_11->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_11->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_11->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_11->m_FileNode_2_0->retain();
			}
			Layout *_Pn_12= static_cast<Layout *>(_Panel_2->getChildByName("Pn_12"));
			_Pn_12->retain();
			m_Panel_8->m_Panel_2->m_Pn_12 = new CCPanel_2::Pn_12();
			m_Panel_8->m_Panel_2->m_Pn_12->root = _Pn_12;
			{
				m_Panel_8->m_Panel_2->m_Pn_12->m_DeckName= static_cast<cocos2d::ui::Text *>(_Pn_12->getChildByName("DeckName"));
				m_Panel_8->m_Panel_2->m_Pn_12->m_DeckName->retain();
				m_Panel_8->m_Panel_2->m_Pn_12->m_ImgChar= static_cast<cocos2d::ui::ImageView *>(_Pn_12->getChildByName("ImgChar"));
				m_Panel_8->m_Panel_2->m_Pn_12->m_ImgChar->retain();
				m_Panel_8->m_Panel_2->m_Pn_12->m_FileNode_2_0= static_cast<cocos2d::Node *>(_Pn_12->getChildByName("FileNode_2_0"));
				m_Panel_8->m_Panel_2->m_Pn_12->m_FileNode_2_0->retain();
			}
		}
		m_Panel_8->m_btBack= static_cast<cocos2d::ui::Button* >(_Panel_8->getChildByName("btBack"));
		m_Panel_8->m_btBack->retain();
	}
}
