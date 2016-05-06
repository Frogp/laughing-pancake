#ifndef __LOGOUI_H__
#define __LOGOUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "logoani.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class LogoUI : public cocos2d::Layer
{
public:
	LogoUI();
	LogoUI(Widget* _root);
	void InitPage();
public:
	logoani * m_FileNode_1;

	cocostudio::timeline::ActionTimeline* actionLogoUI;
	static LogoUI* Getinstance()
	{
		return LogoUI::instance;	}
	cocos2d::Node* root;
private:
	static LogoUI * instance;
};
#endif // __LOGOUI_H__