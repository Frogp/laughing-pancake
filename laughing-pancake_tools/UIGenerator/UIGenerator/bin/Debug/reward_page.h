#ifndef __REWARD_PAGE_H__
#define __REWARD_PAGE_H__
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
class reward_page : public CCObject
{
public:
	reward_page();
	reward_page(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * reward_back;
	cocos2d::ui::Button*  reward_ok_button;
	cocos2d::ui::Text * tuch_text;
	Layout * post_box;
	cocos2d::ui::ImageView * post_img1;
	cocos2d::ui::ImageView * fx_light1;
	cocos2d::ui::ImageView * fx_light2;
	Layout * post_box_0;
	cocos2d::ui::Text * collection_name_text;

	ActionObject* reward_in;
	CCCallFunc* reward_infunc;
	void* reward_infuncEnd();

	ActionObject* reward_idle;
	CCCallFunc* reward_idlefunc;
	void* reward_idlefuncEnd();

	ActionObject* reward_tuch_0_0;
	CCCallFunc* reward_tuch_0_0func;
	void* reward_tuch_0_0funcEnd();

	ActionObject* reward_out;
	CCCallFunc* reward_outfunc;
	void* reward_outfuncEnd();

	ActionObject* reward_all;
	CCCallFunc* reward_allfunc;
	void* reward_allfuncEnd();

	ActionObject* reward_ok_in;
	CCCallFunc* reward_ok_infunc;
	void* reward_ok_infuncEnd();

	ActionObject* reward_ok_idle;
	CCCallFunc* reward_ok_idlefunc;
	void* reward_ok_idlefuncEnd();

	ActionObject* reward_tuch_1_0;
	CCCallFunc* reward_tuch_1_0func;
	void* reward_tuch_1_0funcEnd();

	ActionObject* reward_tuch_0_1;
	CCCallFunc* reward_tuch_0_1func;
	void* reward_tuch_0_1funcEnd();

	ActionObject* reward_tuch_1_1;
	CCCallFunc* reward_tuch_1_1func;
	void* reward_tuch_1_1funcEnd();

	ActionObject* reward_tuch_0_2;
	CCCallFunc* reward_tuch_0_2func;
	void* reward_tuch_0_2funcEnd();

	ActionObject* reward_tuch_1_2;
	CCCallFunc* reward_tuch_1_2func;
	void* reward_tuch_1_2funcEnd();

private:
	Widget* root;
}
#endif // __REWARD_PAGE_H__
