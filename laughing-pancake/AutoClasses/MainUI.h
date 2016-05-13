#ifndef __MAINUI_H__
#define __MAINUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "MainUI/Node_1_0.h"
#include "MainUI/Node_1.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class MainUI : public cocos2d::Layer
{
public:
	MainUI();
	MainUI(Widget* _root);
	void InitPage();
public:
	cocos2d::Sprite * m_background;
	cocos2d::ui::Button*  m_BtAdventure;
	CCMainUI::Node_1_0 * m_Node_1_0;
	cocos2d::ui::Button*  m_BtBettle;
	CCMainUI::Node_1 * m_Node_1;
	cocos2d::ui::Button*  m_BtFriends;
	cocos2d::ui::Button*  m_BtAchiv;
	cocos2d::ui::Button*  m_BtLevel;
	cocos2d::ui::Button*  m_BtMoney;
	cocos2d::ui::Button*  m_BtOption;

	cocostudio::timeline::ActionTimeline* actionMainUI;
	cocostudio::timeline::AnimationInfo Oppening;
	cocostudio::timeline::AnimationInfo NextView;
	cocostudio::timeline::AnimationInfo ReView;
	static MainUI* Getinstance()
	{
		return MainUI::instance;	}
	cocos2d::Node* root;
private:
	static MainUI * instance;
};
#endif // __MAINUI_H__