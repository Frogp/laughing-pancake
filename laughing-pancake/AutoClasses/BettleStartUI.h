#ifndef __BETTLESTARTUI_H__
#define __BETTLESTARTUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BettleStartUI/Panel_2.h"
#include "BettleStartUI/Chain1.h"
#include "BettleStartUI/Chain2.h"
#include "BettleStartUI/Chain3.h"
#include "BettleStartUI/Chain4.h"

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
	Layout * m_Panel_1;
	CCBettleStartUI::Panel_2 * m_Panel_2;
	CCBettleStartUI::Chain1 * m_Chain1;
	CCBettleStartUI::Chain2 * m_Chain2;
	CCBettleStartUI::Chain3 * m_Chain3;
	CCBettleStartUI::Chain4 * m_Chain4;

	cocostudio::timeline::ActionTimeline* actionBettleStartUI;
	cocostudio::timeline::AnimationInfo Openging;
	cocostudio::timeline::AnimationInfo MatchingFound;
	static BettleStartUI* Getinstance()
	{
		return BettleStartUI::instance;	}
	cocos2d::Node* root;
private:
	static BettleStartUI * instance;
};
#endif // __BETTLESTARTUI_H__