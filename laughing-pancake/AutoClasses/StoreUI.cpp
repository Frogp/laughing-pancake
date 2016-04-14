/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "StoreUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

StoreUI * StoreUI::instance;
StoreUI::StoreUI()
{
	root = CSLoader::createNode("StoreUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	StoreUI::instance = this;
}
StoreUI::StoreUI(Widget* _root)
{
	root = _root;
	InitPage();
	StoreUI::instance = this;
}
void StoreUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionStoreUI = CSLoader::createTimeline("StoreUI.csb");
	root->runAction(actionStoreUI);
}
