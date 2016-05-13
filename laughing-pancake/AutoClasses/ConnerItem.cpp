/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "ConnerItem.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

ConnerItem * ConnerItem::instance;
ConnerItem::ConnerItem()
{
	root = CSLoader::createNode("ConnerItem.csb");
	this->addChild(root, 0, 1);
	InitPage();
	ConnerItem::instance = this;
}
ConnerItem::ConnerItem(Widget* _root)
{
	root = _root;
	InitPage();
	ConnerItem::instance = this;
}
void ConnerItem::InitPage()
{
	actionConnerItem = CSLoader::createTimeline("ConnerItem.csb");
	root->runAction(actionConnerItem);
	ClickAnimation = actionConnerItem->getAnimationInfo("ClickAnimation");
	IdleAnimation = actionConnerItem->getAnimationInfo("IdleAnimation");
	m_Sprite_1= static_cast<cocos2d::Sprite *>(root->getChildByName("Sprite_1"));
	m_Sprite_1->retain();
}
