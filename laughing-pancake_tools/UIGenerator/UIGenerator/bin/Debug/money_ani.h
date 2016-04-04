#ifndef __MONEY_ANI_H__
#define __MONEY_ANI_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class money_ani : public CCObject
{
public:
	money_ani();
	money_ani(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::TextBMFont * money_text;
	cocos2d::ui::ImageView * cash_icon;
	cocos2d::ui::ImageView * gold_icon;
	cocos2d::ui::ImageView * gold_icon_0;
	cocos2d::ui::ImageView * gold_icon_0_1;
	cocos2d::ui::ImageView * gold_icon_0_1_2;

	ActionObject* gold_minus;
	CCCallFunc* gold_minusfunc;
	void* gold_minusfuncEnd();

	ActionObject* gold_plus;
	CCCallFunc* gold_plusfunc;
	void* gold_plusfuncEnd();

	ActionObject* cash_plus;
	CCCallFunc* cash_plusfunc;
	void* cash_plusfuncEnd();

	ActionObject* cash_minus;
	CCCallFunc* cash_minusfunc;
	void* cash_minusfuncEnd();

private:
	Widget* root;
}
#endif // __MONEY_ANI_H__
