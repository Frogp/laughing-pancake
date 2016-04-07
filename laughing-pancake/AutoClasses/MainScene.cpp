/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "MainScene.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

MainScene * MainScene::instance;
MainScene::MainScene()
{
	root = CSLoader::createNode("res\\MainScene.csb");
	this->addChild(root, 0, 1);
	InitPage();
	MainScene::instance = this;
}
MainScene::MainScene(Widget* _root)
{
	root = _root;
	InitPage();
	MainScene::instance = this;
}
void MainScene::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionMainScene = CSLoader::createTimeline("res\\MainScene.csb");
	root->runAction(actionMainScene);
}
