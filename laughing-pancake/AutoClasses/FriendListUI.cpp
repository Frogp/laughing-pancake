/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "FriendListUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

FriendListUI * FriendListUI::instance;
FriendListUI::FriendListUI()
{
	root = CSLoader::createNode("FriendListUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	FriendListUI::instance = this;
}
FriendListUI::FriendListUI(Widget* _root)
{
	root = _root;
	InitPage();
	FriendListUI::instance = this;
}
void FriendListUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionFriendListUI = CSLoader::createTimeline("FriendListUI.csb");
	root->runAction(actionFriendListUI);
}
