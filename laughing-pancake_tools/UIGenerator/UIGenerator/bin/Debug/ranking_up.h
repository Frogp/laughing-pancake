#ifndef __RANKING_UP_H__
#define __RANKING_UP_H__
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
class ranking_up : public CCObject
{
public:
	ranking_up();
	ranking_up(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	cocos2d::ui::Button*  reward_ok;
	cocos2d::ui::Button*  shere_button;
	cocos2d::ui::ImageView * fx_light2;
	cocos2d::ui::ImageView * fx_light1;
	Layout * rankin_me;
	Layout * rankin_friend;
	cocos2d::ui::ImageView * ranking_up_img;
	cocos2d::ui::ImageView * down_img;
	cocos2d::ui::ImageView * up_img;

	ActionObject* rankin_up;
	CCCallFunc* rankin_upfunc;
	void* rankin_upfuncEnd();

	ActionObject* rankin_up_in;
	CCCallFunc* rankin_up_infunc;
	void* rankin_up_infuncEnd();

	ActionObject* rankin_up_idle;
	CCCallFunc* rankin_up_idlefunc;
	void* rankin_up_idlefuncEnd();

	ActionObject* rankin_up_out;
	CCCallFunc* rankin_up_outfunc;
	void* rankin_up_outfuncEnd();

private:
	Widget* root;
}
#endif // __RANKING_UP_H__
