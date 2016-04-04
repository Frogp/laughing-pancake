#ifndef __INGAME_TABLE_H__
#define __INGAME_TABLE_H__
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
class ingame_table : public CCObject
{
public:
	ingame_table();
	ingame_table(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * back;

	ActionObject* ink_tuch_idle;
	CCCallFunc* ink_tuch_idlefunc;
	void* ink_tuch_idlefuncEnd();

	ActionObject* ink_tuch_nomal;
	CCCallFunc* ink_tuch_nomalfunc;
	void* ink_tuch_nomalfuncEnd();

	ActionObject* ink_tuch_click;
	CCCallFunc* ink_tuch_clickfunc;
	void* ink_tuch_clickfuncEnd();

	ActionObject* star_ani;
	CCCallFunc* star_anifunc;
	void* star_anifuncEnd();

private:
	Widget* root;
}
#endif // __INGAME_TABLE_H__
