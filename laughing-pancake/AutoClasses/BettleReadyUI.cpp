/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "BettleReadyUI.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
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
	SpacialAnation = cocostudio::ActionManagerEx::getInstance()->getActionByName("BettleReadyUI.json", "SpacialAnation");
	SpacialAnation->retain();
	SpacialAnationfunc = CCCallFunc::create(this, callfunc_selector(BettleReadyUI::SpacialAnationfuncEnd));
	SpacialAnationfunc->retain();
	MoveAni = cocostudio::ActionManagerEx::getInstance()->getActionByName("BettleReadyUI.json", "MoveAni");
	MoveAni->retain();
	MoveAnifunc = CCCallFunc::create(this, callfunc_selector(BettleReadyUI::MoveAnifuncEnd));
	MoveAnifunc->retain();
	m_Button_1= static_cast<>(root->getChildByTag(635103060));
	m_Button_1->retain();
	m_Image_2= static_cast<>(root->getChildByTag(-280553190));
	m_Image_2->retain();
	m_CheckBox_1= static_cast<>(root->getChildByTag(1267753020));
	m_CheckBox_1->retain();
	_Panel_1= static_cast<>(root->getChildByName("Panel_1"));
	_Panel_1->retain();
	m_Panel_1 = new CCBettleReadyUI::Panel_1();
	m_Panel_1->root = _Panel_1;
	{
		m_Panel_1->m_Slider_1= static_cast<>(_Panel_1->getChildByTag(-1875028351));
		m_Panel_1->m_Slider_1->retain();
	}
	m_Text_1= static_cast<>(root->getChildByTag(-689019365));
	m_Text_1->retain();
	_ListView_1= static_cast<>(root->getChildByName("ListView_1"));
	_ListView_1->retain();
	m_ListView_1 = new CCBettleReadyUI::ListView_1();
	m_ListView_1->root = _ListView_1;
	{
		m_ListView_1->m_Text_1_0= static_cast<>(_ListView_1->getChildByTag(1136938198));
		m_ListView_1->m_Text_1_0->retain();
		m_ListView_1->m_Text_3= static_cast<>(_ListView_1->getChildByTag(-680704444));
		m_ListView_1->m_Text_3->retain();
		m_ListView_1->m_Text_4= static_cast<>(_ListView_1->getChildByTag(1767550487));
		m_ListView_1->m_Text_4->retain();
	}
}
void BettleReadyUI::SpacialAnationfuncEnd()
{
	SpacialAnation->stop();
}
void BettleReadyUI::MoveAnifuncEnd()
{
	MoveAni->stop();
}
