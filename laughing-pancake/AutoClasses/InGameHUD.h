#ifndef __INGAMEHUD_H__
#define __INGAMEHUD_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "InGameHUD/SummonSelctList.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class InGameHUD : public cocos2d::Layer
{
public:
	InGameHUD();
	InGameHUD(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::Button*  m_Menu;
	cocos2d::ui::LoadingBar * m_OrderTimebar;
	cocos2d::ui::Button*  m_Button_2_3;
	cocos2d::ui::LoadingBar * m_tbP1mpbar;
	cocos2d::ui::Text * m_tbP1mp;
	cocos2d::ui::LoadingBar * m_tbP2mpbar;
	cocos2d::ui::Text * m_tbP2mp;
	CCInGameHUD::SummonSelctList * m_SummonSelctList;
	cocos2d::Sprite * m_Char1;
	cocos2d::Sprite * m_Char2;
	cocos2d::ui::Text * m_tbPlayer1;
	cocos2d::ui::Text * m_tbPlayer2;
	cocos2d::ui::LoadingBar * m_Player1Hpbar;
	cocos2d::ui::LoadingBar * m_Player2Hpbar;
	cocos2d::ui::Text * m_tbP2hp;
	cocos2d::ui::Text * m_tbP1hp;

	cocostudio::timeline::ActionTimeline* actionInGameHUD;
	static InGameHUD* Getinstance()
	{
		return InGameHUD::instance;	}
	cocos2d::Node* root;
private:
	static InGameHUD * instance;
};
#endif // __INGAMEHUD_H__