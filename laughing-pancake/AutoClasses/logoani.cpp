/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "logoani.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

logoani * logoani::instance;
logoani::logoani()
{
	root = CSLoader::createNode("logoani.csb");
	this->addChild(root, 0, 1);
	InitPage();
	logoani::instance = this;
}
logoani::logoani(Widget* _root)
{
	root = _root;
	InitPage();
	logoani::instance = this;
}
void logoani::InitPage()
{
	actionlogoani = CSLoader::createTimeline("logoani.csb");
	root->runAction(actionlogoani);
	LogoPlay = actionlogoani->getAnimationInfo("LogoPlay");
	m_Sprite_5= static_cast<cocos2d::Sprite *>(root->getChildByName("Sprite_5"));
	m_Sprite_5->retain();
}
