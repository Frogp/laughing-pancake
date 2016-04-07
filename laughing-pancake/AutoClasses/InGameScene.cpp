/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "InGameScene.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

InGameScene * InGameScene::instance;
InGameScene::InGameScene()
{
	root = CSLoader::createNode("res\\InGameScene.csb");
	this->addChild(root, 0, 1);
	InitPage();
	InGameScene::instance = this;
}
InGameScene::InGameScene(Widget* _root)
{
	root = _root;
	InitPage();
	InGameScene::instance = this;
}
void InGameScene::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionInGameScene = CSLoader::createTimeline("res\\InGameScene.csb");
	root->runAction(actionInGameScene);
	m_Map_3= static_cast<cocos2d::TMXTiledMap *>(root->getChildByName("Map_3"));
	m_Map_3->retain();
}
