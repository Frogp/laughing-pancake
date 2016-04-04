#ifndef __SKILL_PAGE_H__
#define __SKILL_PAGE_H__
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
class skill_page : public CCObject
{
public:
	skill_page();
	skill_page(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_back;
	Layout * skill_box;

	ActionObject* skill_in;
	CCCallFunc* skill_infunc;
	void* skill_infuncEnd();

	ActionObject* skill_out;
	CCCallFunc* skill_outfunc;
	void* skill_outfuncEnd();

	ActionObject* skill_1;
	CCCallFunc* skill_1func;
	void* skill_1funcEnd();

	ActionObject* skill_2;
	CCCallFunc* skill_2func;
	void* skill_2funcEnd();

	ActionObject* skill_3;
	CCCallFunc* skill_3func;
	void* skill_3funcEnd();

	ActionObject* skill_4;
	CCCallFunc* skill_4func;
	void* skill_4funcEnd();

	ActionObject* skill_5;
	CCCallFunc* skill_5func;
	void* skill_5funcEnd();

	ActionObject* skill_6;
	CCCallFunc* skill_6func;
	void* skill_6funcEnd();

	ActionObject* skill_idle;
	CCCallFunc* skill_idlefunc;
	void* skill_idlefuncEnd();

private:
	Widget* root;
}
#endif // __SKILL_PAGE_H__
