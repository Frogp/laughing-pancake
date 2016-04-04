#ifndef __SHOP_PAGE_H__
#define __SHOP_PAGE_H__
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
class shop_page : public CCObject
{
public:
	shop_page();
	shop_page(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * shop_back;
	cocos2d::ui::ImageView * shop_title_back;
	cocos2d::ui::ImageView * shop_title_text;
	cocos2d::ui::Button*  ui_back_button;
	cocos2d::ui::Button*  goldbox;
	cocos2d::ui::Button*  cashbox;
	cocos2d::ui::Button*  postshop;
	cocos2d::ui::Button*  stampshop;
	cocos2d::ui::TextBMFont * cash_text;
	cocos2d::ui::TextBMFont * gold_text;

	ActionObject* shop_idle;
	CCCallFunc* shop_idlefunc;
	void* shop_idlefuncEnd();

private:
	Widget* root;
}
#endif // __SHOP_PAGE_H__
