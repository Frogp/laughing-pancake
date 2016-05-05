#ifndef __MAINUI_H__
#define __MAINUI_H__
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
class MainUI : public cocos2d::Layer
{
public:
	MainUI();
	MainUI(Widget* _root);
	void InitPage();
public:
	cocos2d::Sprite * m_background_1;
	cocos2d::ui::Button*  m_Button_1;
	cocos2d::ui::Button*  m_BtBettle;
	cocos2d::ui::Button*  m_Button_1_0_0_0_0;
	cocos2d::ui::Button*  m_Button_1_0_0_0_0_0;
	cocos2d::ui::Button*  m_Button_1_0_0_0_0_0_0;
	cocos2d::ui::Button*  m_Button_1_0_0_0_0_0_0_0;
	cocos2d::ui::Button*  m_Button_1_0_0_0_0_0_0_0_0;
	cocos2d::ui::Button*  m_Button_1_0_0_0_0_0_0_0_1;
	cocos2d::ui::Button*  m_Button_1_0;
	cocos2d::ui::Button*  m_Button_1_1;

	static MainUI* Getinstance()
	{
		return MainUI::instance;	}
	cocos2d::Node* root;
private:
	static MainUI * instance;
};
#endif // __MAINUI_H__