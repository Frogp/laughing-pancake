/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "GameResualtUI.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

GameResualtUI * GameResualtUI::instance;
GameResualtUI::GameResualtUI()
{
	root = CSLoader::createNode("res\GameResualtUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	GameResualtUI::instance = this;
}
GameResualtUI::GameResualtUI(Widget* _root)
{
	root = _root;
	InitPage();
	GameResualtUI::instance = this;
}
void GameResualtUI::InitPage()
{
}
