/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "LogoUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

LogoUI * LogoUI::instance;
LogoUI::LogoUI()
{
	root = CSLoader::createNode("LogoUI.csb");
	this->addChild(root, 0, 1);
	InitPage();
	LogoUI::instance = this;
}
LogoUI::LogoUI(Widget* _root)
{
	root = _root;
	InitPage();
	LogoUI::instance = this;
}
void LogoUI::InitPage()
{
	actionLogoUI = CSLoader::createTimeline("LogoUI.csb");
	root->runAction(actionLogoUI);
	m_FileNode_1= static_cast<logoani *>(root->getChildByName("FileNode_1"));
	m_FileNode_1->retain();
	m_LPlogoUI= static_cast<LPlogo *>(root->getChildByName("LPlogoUI"));
	m_LPlogoUI->retain();
}
