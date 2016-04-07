/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "InGameOptionUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

InGameOptionUI * InGameOptionUI::instance;
InGameOptionUI::InGameOptionUI()
{
	root = CSLoader::createNode("res\\InGameOptionUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	InGameOptionUI::instance = this;
}
InGameOptionUI::InGameOptionUI(Widget* _root)
{
	root = _root;
	InitPage();
	InGameOptionUI::instance = this;
}
void InGameOptionUI::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionInGameOptionUI = CSLoader::createTimeline("res\\InGameOptionUI.csb");
	root->runAction(actionInGameOptionUI);
}
