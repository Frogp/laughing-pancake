#ifndef __RANK_UP_H__
#define __RANK_UP_H__
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
class rank_up : public CCObject
{
public:
	rank_up();
	rank_up(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	cocos2d::ui::ImageView * Image_7;
	cocos2d::ui::ImageView * fx_light;
	cocos2d::ui::ImageView * fx_light_0;
	cocos2d::ui::ImageView * rank_up_text;
	cocos2d::ui::ImageView * tuch_scr_text;
	cocos2d::ui::ImageView * dmg_fx_00;

	ActionObject* rank_ani_in;
	CCCallFunc* rank_ani_infunc;
	void* rank_ani_infuncEnd();

	ActionObject* rank_idle;
	CCCallFunc* rank_idlefunc;
	void* rank_idlefuncEnd();

private:
	Widget* root;
}
#endif // __RANK_UP_H__
