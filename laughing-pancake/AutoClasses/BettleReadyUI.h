#ifndef __BETTLEREADYUI_H__
#define __BETTLEREADYUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BettleReadyUI/Panel_2.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class BettleReadyUI : public cocos2d::Layer
{
public:
	BettleReadyUI();
	BettleReadyUI(Widget* _root);
	void InitPage();
public:
	Layout * m_Panel_24;
	CCBettleReadyUI::Panel_2 * m_Panel_2;

	cocostudio::timeline::ActionTimeline* actionBettleReadyUI;
	cocostudio::timeline::AnimationInfo Opening;
	cocostudio::timeline::AnimationInfo Closed;
	static BettleReadyUI* Getinstance()
	{
		return BettleReadyUI::instance;	}
	cocos2d::Node* root;
private:
	static BettleReadyUI * instance;
};
#endif // __BETTLEREADYUI_H__