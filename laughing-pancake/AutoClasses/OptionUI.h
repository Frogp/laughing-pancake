#ifndef __OPTIONUI_H__
#define __OPTIONUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "OptionUI/Panel_1.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class OptionUI : public cocos2d::Layer
{
public:
	OptionUI();
	OptionUI(Widget* _root);
	void InitPage();
public:
	CCOptionUI::Panel_1 * m_Panel_1;

	cocostudio::timeline::ActionTimeline* actionOptionUI;
	static OptionUI* Getinstance()
	{
		return OptionUI::instance;	}
	cocos2d::Node* root;
private:
	static OptionUI * instance;
};
#endif // __OPTIONUI_H__