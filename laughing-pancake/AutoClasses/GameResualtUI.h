#ifndef __GAMERESUALTUI_H__
#define __GAMERESUALTUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class GameResualtUI : public cocos2d::Layer
{
public:
	GameResualtUI();
	GameResualtUI(Widget* _root);
	void InitPage();
public:
	Layout * m_Panel_1;
	cocos2d::ui::Text * m_Text_1;
	cocos2d::ui::LoadingBar * m_LoadingBar_1;
	cocos2d::ui::Text * m_Text_1_0;
	cocos2d::ui::LoadingBar * m_LoadingBar_1_0;
	cocos2d::ui::Text * m_Text_4;
	cocos2d::ui::Text * m_Text_4_0;
	cocos2d::ParticleSystem * m_Particle_1;
	cocostudio::Armature * m_ArmatureNode_1;
	cocos2d::ParticleSystem * m_Particle_2;
	cocos2d::ui::LoadingBar * m_LoadingBar_3;
	cocos2d::ui::LoadingBar * m_LoadingBar_3_0;
	cocostudio::Armature * m_ArmatureNode_2;
	cocos2d::ui::Button*  m_Button_2_0;

	cocostudio::timeline::ActionTimeline* actionGameResualtUI;
	static GameResualtUI* Getinstance()
	{
		return GameResualtUI::instance;	}
	cocos2d::Node* root;
private:
	static GameResualtUI * instance;
};
#endif // __GAMERESUALTUI_H__