#ifndef __BETTLEREADYUI_H__
#define __BETTLEREADYUI_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "CustomWidget/CustomParticleWidget.h"
#include "BettleReadyUI/Panel_1.h"
#include "BettleReadyUI/ListView_1.h"

USING_NS_CC;
using namespace cocostudio;
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
	 m_Button_1;
	 m_Image_2;
	 m_CheckBox_1;
	CCBettleReadyUI::Panel_1 * m_Panel_1;
	 m_Text_1;
	CCBettleReadyUI::ListView_1 * m_ListView_1;

	ActionObject* SpacialAnation;
	CCCallFunc* SpacialAnationfunc;
	void SpacialAnationfuncEnd();

	ActionObject* MoveAni;
	CCCallFunc* MoveAnifunc;
	void MoveAnifuncEnd();

	static BettleReadyUI* Getinstance()
	{
		return BettleReadyUI::instance;	}
	cocos2d::Node* root;
private:
	static BettleReadyUI * instance;
};
#endif // __BETTLEREADYUI_H__