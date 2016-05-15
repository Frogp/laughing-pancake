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
	root = CSLoader::createNode("BettleStartUI.csb");
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
	actionBettleStartUI = CSLoader::createTimeline("BettleStartUI.csb");
	root->runAction(actionBettleStartUI);
	Openging = actionBettleStartUI->getAnimationInfo("Openging");
	MatchingFound = actionBettleStartUI->getAnimationInfo("MatchingFound");
	m_Panel_1= static_cast<Layout *>(root->getChildByName("Panel_1"));
	m_Panel_1->retain();
	Layout *_Panel_2= static_cast<Layout *>(root->getChildByName("Panel_2"));
	_Panel_2->retain();
	m_Panel_2 = new CCBettleStartUI::Panel_2();
	m_Panel_2->root = _Panel_2;
	{
		m_Panel_2->m_Conneritem_3_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0"));
		m_Panel_2->m_Conneritem_3_0->retain();
		m_Panel_2->m_Conneritem_3_0_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0_0"));
		m_Panel_2->m_Conneritem_3_0_0->retain();
		m_Panel_2->m_Conneritem_3_0_0_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0_0_0"));
		m_Panel_2->m_Conneritem_3_0_0_0->retain();
		m_Panel_2->m_Conneritem_3_0_0_0_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem_3_0_0_0_0"));
		m_Panel_2->m_Conneritem_3_0_0_0_0->retain();
		m_Panel_2->m_Conneritem2_8= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem2_8"));
		m_Panel_2->m_Conneritem2_8->retain();
		m_Panel_2->m_Conneritem2_8_0= static_cast<cocos2d::Sprite *>(_Panel_2->getChildByName("Conneritem2_8_0"));
		m_Panel_2->m_Conneritem2_8_0->retain();
		m_Panel_2->m_BtCancel= static_cast<cocos2d::ui::Button* >(_Panel_2->getChildByName("BtCancel"));
		m_Panel_2->m_BtCancel->retain();
		m_Panel_2->m_Image_14_0= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_14_0"));
		m_Panel_2->m_Image_14_0->retain();
		m_Panel_2->m_Image_14_0_0= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_14_0_0"));
		m_Panel_2->m_Image_14_0_0->retain();
		m_Panel_2->m_Image_11= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_11"));
		m_Panel_2->m_Image_11->retain();
		m_Panel_2->m_Text_1= static_cast<cocos2d::ui::Text *>(_Panel_2->getChildByName("Text_1"));
		m_Panel_2->m_Text_1->retain();
		m_Panel_2->m_Text_3= static_cast<cocos2d::ui::Text *>(_Panel_2->getChildByName("Text_3"));
		m_Panel_2->m_Text_3->retain();
	}
	Layout *_Chain1= static_cast<Layout *>(root->getChildByName("Chain1"));
	_Chain1->retain();
	m_Chain1 = new CCBettleStartUI::Chain1();
	m_Chain1->root = _Chain1;
	{
		m_Chain1->m_Image_13= static_cast<cocos2d::ui::ImageView *>(_Chain1->getChildByName("Image_13"));
		m_Chain1->m_Image_13->retain();
		m_Chain1->m_Image_13_0= static_cast<cocos2d::ui::ImageView *>(_Chain1->getChildByName("Image_13_0"));
		m_Chain1->m_Image_13_0->retain();
		m_Chain1->m_Image_13_0_0= static_cast<cocos2d::ui::ImageView *>(_Chain1->getChildByName("Image_13_0_0"));
		m_Chain1->m_Image_13_0_0->retain();
	}
	Layout *_Chain2= static_cast<Layout *>(root->getChildByName("Chain2"));
	_Chain2->retain();
	m_Chain2 = new CCBettleStartUI::Chain2();
	m_Chain2->root = _Chain2;
	{
		m_Chain2->m_Image_13= static_cast<cocos2d::ui::ImageView *>(_Chain2->getChildByName("Image_13"));
		m_Chain2->m_Image_13->retain();
		m_Chain2->m_Image_13_0= static_cast<cocos2d::ui::ImageView *>(_Chain2->getChildByName("Image_13_0"));
		m_Chain2->m_Image_13_0->retain();
		m_Chain2->m_Image_13_0_0= static_cast<cocos2d::ui::ImageView *>(_Chain2->getChildByName("Image_13_0_0"));
		m_Chain2->m_Image_13_0_0->retain();
	}
	Layout *_Chain3= static_cast<Layout *>(root->getChildByName("Chain3"));
	_Chain3->retain();
	m_Chain3 = new CCBettleStartUI::Chain3();
	m_Chain3->root = _Chain3;
	{
		m_Chain3->m_Image_13= static_cast<cocos2d::ui::ImageView *>(_Chain3->getChildByName("Image_13"));
		m_Chain3->m_Image_13->retain();
		m_Chain3->m_Image_13_0= static_cast<cocos2d::ui::ImageView *>(_Chain3->getChildByName("Image_13_0"));
		m_Chain3->m_Image_13_0->retain();
		m_Chain3->m_Image_13_0_0= static_cast<cocos2d::ui::ImageView *>(_Chain3->getChildByName("Image_13_0_0"));
		m_Chain3->m_Image_13_0_0->retain();
	}
	Layout *_Chain4= static_cast<Layout *>(root->getChildByName("Chain4"));
	_Chain4->retain();
	m_Chain4 = new CCBettleStartUI::Chain4();
	m_Chain4->root = _Chain4;
	{
		m_Chain4->m_Image_13= static_cast<cocos2d::ui::ImageView *>(_Chain4->getChildByName("Image_13"));
		m_Chain4->m_Image_13->retain();
		m_Chain4->m_Image_13_0= static_cast<cocos2d::ui::ImageView *>(_Chain4->getChildByName("Image_13_0"));
		m_Chain4->m_Image_13_0->retain();
		m_Chain4->m_Image_13_0_0= static_cast<cocos2d::ui::ImageView *>(_Chain4->getChildByName("Image_13_0_0"));
		m_Chain4->m_Image_13_0_0->retain();
	}
}
