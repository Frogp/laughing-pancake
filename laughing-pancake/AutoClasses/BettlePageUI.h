#ifndef __BETTLEPAGEUI_H__
#define __BETTLEPAGEUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BettlePageUI/Panel_8.h"

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
	CCBettlePageUI::Panel_8 * m_Panel_8;

	cocostudio::timeline::ActionTimeline* actionBettlePageUI;
	cocostudio::timeline::AnimationInfo Oppening;
	static BettlePageUI* Getinstance()
	{
		return BettlePageUI::instance;	}
	cocos2d::Node* root;
private:
	static BettlePageUI * instance;
};
#endif // __BETTLEPAGEUI_H__