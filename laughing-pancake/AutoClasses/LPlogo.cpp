/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "LPlogo.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

LPlogo * LPlogo::instance;
LPlogo::LPlogo()
{
	root = CSLoader::createNode("LPlogo.csb");
	this->addChild(root, 0, 1);
	InitPage();
	LPlogo::instance = this;
}
LPlogo::LPlogo(Widget* _root)
{
	root = _root;
	InitPage();
	LPlogo::instance = this;
}
void LPlogo::InitPage()
{
	actionLPlogo = CSLoader::createTimeline("LPlogo.csb");
	root->runAction(actionLPlogo);
	LPlogoAni = actionLPlogo->getAnimationInfo("LPlogoAni");
	m_Sprite_1= static_cast<cocos2d::Sprite *>(root->getChildByName("Sprite_1"));
	m_Sprite_1->retain();
}
