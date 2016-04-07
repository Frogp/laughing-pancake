#ifndef __FRIENDLIST_H__
#define __FRIENDLIST_H__
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
class FriendList : public cocos2d::Layer
{
public:
	FriendList();
	FriendList(Widget* _root);
	void InitPage();
public:

	static FriendList* Getinstance()
	{
		return FriendList::instance;	}
	cocos2d::Node* root;
private:
	static FriendList * instance;
};
#endif // __FRIENDLIST_H__