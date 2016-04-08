#ifndef __BETTLESTARTUI_H__
#define __BETTLESTARTUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BettleStartUI/Panel_1.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class BettleStartUI : public cocos2d::Layer
{
public:
	BettleStartUI();
	BettleStartUI(Widget* _root);
	void InitPage();
public:
	CCBettleStartUI::Panel_1 * m_Panel_1;
	cocos2d::ui::Button*  m_Button_1;
	cocos2d::ui::Button*  m_Button_1_0;

	static BettleStartUI* Getinstance()
	{
		return BettleStartUI::instance;	}
	cocos2d::Node* root;
private:
	static BettleStartUI * instance;
};
#endif // __BETTLESTARTUI_H__