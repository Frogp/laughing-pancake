#ifndef __GOLD_SHOP_H__
#define __GOLD_SHOP_H__
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
class gold_shop : public CCObject
{
public:
	gold_shop();
	gold_shop(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	cocos2d::ui::ImageView * goldshop_back;
	cocos2d::ui::ImageView * goldshop_title;
	cocos2d::ui::Button*  xbutton;
	cocos2d::ui::ImageView * ink_big_icon;
	cocos2d::ui::Text * goldshop_text;
	Layout * gold_button_01;
	Layout * gold_button_02;
	Layout * gold_button_03;
	Layout * gold_button_04;
	Layout * gold_button_05;
	Layout * gold_button_06;
	Layout * gold_button_07;
	Layout * gold_button_08;
	Layout * gold_button_09;

	ActionObject* gold_open;
	CCCallFunc* gold_openfunc;
	void* gold_openfuncEnd();

	ActionObject* gold_close;
	CCCallFunc* gold_closefunc;
	void* gold_closefuncEnd();

	ActionObject* gold_idle;
	CCCallFunc* gold_idlefunc;
	void* gold_idlefuncEnd();

private:
	Widget* root;
}
#endif // __GOLD_SHOP_H__
