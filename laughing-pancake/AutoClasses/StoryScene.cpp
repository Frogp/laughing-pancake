/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "StoryScene.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

StoryScene * StoryScene::instance;
StoryScene::StoryScene()
{
	root = CSLoader::createNode("StoryScene.csb");
	this->addChild(root, 0, 1);
	InitPage();
	StoryScene::instance = this;
}
StoryScene::StoryScene(Widget* _root)
{
	root = _root;
	InitPage();
	StoryScene::instance = this;
}
void StoryScene::InitPage()
{
	actionStoryScene = CSLoader::createTimeline("StoryScene.csb");
	root->runAction(actionStoryScene);
}
