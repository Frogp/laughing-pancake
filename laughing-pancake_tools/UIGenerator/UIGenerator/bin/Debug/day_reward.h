#ifndef __DAY_REWARD_H__
#define __DAY_REWARD_H__
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
class day_reward : public CCObject
{
public:
	day_reward();
	day_reward(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * week_box;

	ActionObject* day_1;
	CCCallFunc* day_1func;
	void* day_1funcEnd();

	ActionObject* day_2;
	CCCallFunc* day_2func;
	void* day_2funcEnd();

	ActionObject* day_3;
	CCCallFunc* day_3func;
	void* day_3funcEnd();

	ActionObject* day_4;
	CCCallFunc* day_4func;
	void* day_4funcEnd();

	ActionObject* day_5;
	CCCallFunc* day_5func;
	void* day_5funcEnd();

	ActionObject* day_6;
	CCCallFunc* day_6func;
	void* day_6funcEnd();

	ActionObject* day_7;
	CCCallFunc* day_7func;
	void* day_7funcEnd();

	ActionObject* day_in;
	CCCallFunc* day_infunc;
	void* day_infuncEnd();

	ActionObject* day_out;
	CCCallFunc* day_outfunc;
	void* day_outfuncEnd();

	ActionObject* day_idle;
	CCCallFunc* day_idlefunc;
	void* day_idlefuncEnd();

private:
	Widget* root;
}
#endif // __DAY_REWARD_H__
