#ifndef __CASH_SHOP_H__
#define __CASH_SHOP_H__
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
class cash_shop : public CCObject
{
public:
	cash_shop();
	cash_shop(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	cocos2d::ui::ImageView * cashshop_back;
	cocos2d::ui::ImageView * cashshop_title;
	cocos2d::ui::Button*  xbutton;
	cocos2d::ui::ImageView * ink_big_icon;
	cocos2d::ui::Text * text;
	cocos2d::ui::Text * cashshop_text;
	Layout * cash_button_01;
	Layout * cash_button_02;
	Layout * cash_button_03;
	Layout * cash_button_04;
	Layout * cash_button_05;
	Layout * cash_button_06;
	Layout * cash_button_07;
	Layout * cash_button_08;
	Layout * cash_button_09;

	ActionObject* cash_open;
	CCCallFunc* cash_openfunc;
	void* cash_openfuncEnd();

	ActionObject* cash_close;
	CCCallFunc* cash_closefunc;
	void* cash_closefuncEnd();

	ActionObject* cash_idle;
	CCCallFunc* cash_idlefunc;
	void* cash_idlefuncEnd();

private:
	Widget* root;
}
#endif // __CASH_SHOP_H__
