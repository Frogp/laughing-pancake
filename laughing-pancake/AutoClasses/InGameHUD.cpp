/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "InGameHUD.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

InGameHUD * InGameHUD::instance;
InGameHUD::InGameHUD()
{
	root = CSLoader::createNode("InGameHUD.csb");
	this->addChild(root, 0, 1);
	InitPage();
	InGameHUD::instance = this;
}
InGameHUD::InGameHUD(Widget* _root)
{
	root = _root;
	InitPage();
	InGameHUD::instance = this;
}
void InGameHUD::InitPage()
{
}
