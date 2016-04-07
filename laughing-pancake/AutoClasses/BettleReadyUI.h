#ifndef __BETTLEREADYUI_H__
#define __BETTLEREADYUI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "BettleReadyUI/Panel_1.h"
#include "BettleReadyUI/ListView_1.h"

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
	cocos2d::ui::Button*  m_Button_1;
	cocos2d::ui::ImageView * m_Image_2;
	CheckBox * m_CheckBox_1;
	CCBettleReadyUI::Panel_1 * m_Panel_1;
	cocos2d::ui::Text * m_Text_1;
	CCBettleReadyUI::ListView_1 * m_ListView_1;

	cocostudio::timeline::AnimationInfo SpacialAnation;
	cocostudio::timeline::AnimationInfo MoveAni;
	static BettleReadyUI* Getinstance()
	{
		return BettleReadyUI::instance;	}
	cocos2d::Node* root;
private:
	static BettleReadyUI * instance;
};
#endif // __BETTLEREADYUI_H__