/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "LoadingScene.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

LoadingScene * LoadingScene::instance;
LoadingScene::LoadingScene()
{
	root = CSLoader::createNode("LoadingScene.csb");
	this->addChild(root, 0, 1);
	InitPage();
	LoadingScene::instance = this;
}
LoadingScene::LoadingScene(Widget* _root)
{
	root = _root;
	InitPage();
	LoadingScene::instance = this;
}
void LoadingScene::InitPage()
{
	actionLoadingScene = CSLoader::createTimeline("LoadingScene.csb");
	root->runAction(actionLoadingScene);
}
