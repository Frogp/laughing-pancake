#ifndef __INK_SHOP_H__
#define __INK_SHOP_H__
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
class ink_shop : public CCObject
{
public:
	ink_shop();
	ink_shop(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	cocos2d::ui::ImageView * cashshop_back;
	cocos2d::ui::ImageView * cashshop_title;
	cocos2d::ui::Button*  xbutton;
	cocos2d::ui::ImageView * ink_big_icon;
	cocos2d::ui::Text * text_0;
	cocos2d::ui::Text * inkshop_text1;
	Layout * cash_button_01;
	Layout * cash_button_02;
	Layout * cash_button_03;
	Layout * cash_button_04;
	Layout * cash_button_05;
	Layout * cash_button_06;
	Layout * cash_button_07;
	Layout * cash_button_08;
	Layout * cash_button_09;

	ActionObject* ink_open;
	CCCallFunc* ink_openfunc;
	void* ink_openfuncEnd();

	ActionObject* ink_close;
	CCCallFunc* ink_closefunc;
	void* ink_closefuncEnd();

	ActionObject* ink_idle;
	CCCallFunc* ink_idlefunc;
	void* ink_idlefuncEnd();

private:
	Widget* root;
}
#endif // __INK_SHOP_H__
