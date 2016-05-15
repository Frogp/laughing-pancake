/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "BettleReadyUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

BettleReadyUI * BettleReadyUI::instance;
BettleReadyUI::BettleReadyUI()
{
	root = CSLoader::createNode("BettleReadyUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	BettleReadyUI::instance = this;
}
BettleReadyUI::BettleReadyUI(Widget* _root)
{
	root = _root;
	InitPage();
	BettleReadyUI::instance = this;
}
void BettleReadyUI::InitPage()
{
	actionBettleReadyUI = CSLoader::createTimeline("BettleReadyUI.csb");
	root->runAction(actionBettleReadyUI);
	Opening = actionBettleReadyUI->getAnimationInfo("Opening");
	Closed = actionBettleReadyUI->getAnimationInfo("Closed");
	m_Panel_24= static_cast<Layout *>(root->getChildByName("Panel_24"));
	m_Panel_24->retain();
	Layout *_Panel_2= static_cast<Layout *>(root->getChildByName("Panel_2"));
	_Panel_2->retain();
	m_Panel_2 = new CCBettleReadyUI::Panel_2();
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
		m_Panel_2->m_BtNormal= static_cast<cocos2d::ui::Button* >(_Panel_2->getChildByName("BtNormal"));
		m_Panel_2->m_BtNormal->retain();
		m_Panel_2->m_BtRank= static_cast<cocos2d::ui::Button* >(_Panel_2->getChildByName("BtRank"));
		m_Panel_2->m_BtRank->retain();
		m_Panel_2->m_BtCancel= static_cast<cocos2d::ui::Button* >(_Panel_2->getChildByName("BtCancel"));
		m_Panel_2->m_BtCancel->retain();
		m_Panel_2->m_Image_14= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_14"));
		m_Panel_2->m_Image_14->retain();
		m_Panel_2->m_Image_14_0= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_14_0"));
		m_Panel_2->m_Image_14_0->retain();
		m_Panel_2->m_Image_14_0_0= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_14_0_0"));
		m_Panel_2->m_Image_14_0_0->retain();
		m_Panel_2->m_Image_14_1= static_cast<cocos2d::ui::ImageView *>(_Panel_2->getChildByName("Image_14_1"));
		m_Panel_2->m_Image_14_1->retain();
	}
}
