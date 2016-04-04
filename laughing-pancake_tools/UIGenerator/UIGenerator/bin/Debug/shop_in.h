#ifndef __SHOP_IN_H__
#define __SHOP_IN_H__
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
class shop_in : public CCObject
{
public:
	shop_in();
	shop_in(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * shop;

	ActionObject* shop_in;
	CCCallFunc* shop_infunc;
	void* shop_infuncEnd();

	ActionObject* shop_out;
	CCCallFunc* shop_outfunc;
	void* shop_outfuncEnd();

	ActionObject* shop_idle;
	CCCallFunc* shop_idlefunc;
	void* shop_idlefuncEnd();

private:
	Widget* root;
}
#endif // __SHOP_IN_H__
