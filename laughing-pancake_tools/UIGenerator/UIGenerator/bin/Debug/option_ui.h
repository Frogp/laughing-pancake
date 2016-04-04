#ifndef __OPTION_UI_H__
#define __OPTION_UI_H__
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
class option_ui : public CCObject
{
public:
	option_ui();
	option_ui(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * box;

	ActionObject* option_in;
	CCCallFunc* option_infunc;
	void* option_infuncEnd();

	ActionObject* option_out;
	CCCallFunc* option_outfunc;
	void* option_outfuncEnd();

	ActionObject* option_idle;
	CCCallFunc* option_idlefunc;
	void* option_idlefuncEnd();

private:
	Widget* root;
}
#endif // __OPTION_UI_H__
