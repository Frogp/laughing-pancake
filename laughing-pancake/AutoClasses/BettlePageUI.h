#ifndef __BETTLEPAGEUI_H__
#define __BETTLEPAGEUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BettlePageUI/Panel_2.h"
#include "BettlePageUI/Panel_3.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class BettlePageUI : public cocos2d::Layer
{
public:
	BettlePageUI();
	BettlePageUI(Widget* _root);
	void InitPage();
public:
	CCBettlePageUI::Panel_2 * m_Panel_2;
	cocos2d::Sprite * m_titlebox1_1;
	CCBettlePageUI::Panel_3 * m_Panel_3;
	cocos2d::Sprite * m_titlebox1_1_6;
	cocos2d::ui::Button*  m_BtNormal;
	cocos2d::ui::Button*  m_Button_1;
	cocos2d::ui::Button*  m_BtRank;
	cocos2d::ui::Text * m_Text_1;
	cocos2d::ui::Text * m_Text_1_0;

	cocostudio::timeline::ActionTimeline* actionBettlePageUI;
	static BettlePageUI* Getinstance()
	{
		return BettlePageUI::instance;	}
	cocos2d::Node* root;
private:
	static BettlePageUI * instance;
};
#endif // __BETTLEPAGEUI_H__