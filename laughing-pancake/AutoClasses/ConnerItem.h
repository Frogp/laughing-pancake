#ifndef __CONNERITEM_H__
#define __CONNERITEM_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class ConnerItem : public cocos2d::Layer
{
public:
	ConnerItem();
	ConnerItem(Widget* _root);
	void InitPage();
public:
	cocos2d::Sprite * m_Sprite_1;

	cocostudio::timeline::ActionTimeline* actionConnerItem;
	cocostudio::timeline::AnimationInfo ClickAnimation;
	cocostudio::timeline::AnimationInfo IdleAnimation;
	static ConnerItem* Getinstance()
	{
		return ConnerItem::instance;	}
	cocos2d::Node* root;
private:
	static ConnerItem * instance;
};
#endif // __CONNERITEM_H__