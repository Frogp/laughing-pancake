/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "LogoScene.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

LogoScene * LogoScene::instance;
LogoScene::LogoScene()
{
	root = CSLoader::createNode("LogoScene.csb");
	this->addChild(root, 0, 1);
	InitPage();
	LogoScene::instance = this;
}
LogoScene::LogoScene(Widget* _root)
{
	root = _root;
	InitPage();
	LogoScene::instance = this;
}
void LogoScene::InitPage()
{
	cocostudio::timeline::ActionTimeline* actionLogoScene = CSLoader::createTimeline("LogoScene.csb");
	root->runAction(actionLogoScene);
	m_FileNode_1= static_cast<logoani *>(root->getChildByName("FileNode_1"));
	m_FileNode_1->retain();
}
