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
	cocostudio::timeline::ActionTimeline* actionBettleReadyUI = CSLoader::createTimeline("BettleReadyUI.csb");
	root->runAction(actionBettleReadyUI);
	SpacialAnation = actionBettleReadyUI->getAnimationInfo("SpacialAnation");
	MoveAni = actionBettleReadyUI->getAnimationInfo("MoveAni");
	m_Panel_5= static_cast<Layout *>(root->getChildByName("Panel_5"));
	m_Panel_5->retain();
	m_Image_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_1"));
	m_Image_1->retain();
	m_Button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1"));
	m_Button_1->retain();
	m_Button_1_0= static_cast<cocos2d::ui::Button* >(root->getChildByName("Button_1_0"));
	m_Button_1_0->retain();
	m_Text_1= static_cast<cocos2d::ui::Text *>(root->getChildByName("Text_1"));
	m_Text_1->retain();
}
