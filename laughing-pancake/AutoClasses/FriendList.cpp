/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "FriendList.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

FriendList * FriendList::instance;
FriendList::FriendList()
{
	root = CSLoader::createNode("FriendList.csb");
	this->addChild(root, 0, 1);
	InitPage();
	FriendList::instance = this;
}
FriendList::FriendList(Widget* _root)
{
	root = _root;
	InitPage();
	FriendList::instance = this;
}
void FriendList::InitPage()
{
	actionFriendList = CSLoader::createTimeline("FriendList.csb");
	root->runAction(actionFriendList);
}
