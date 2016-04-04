#ifndef __SYSTEM_UI_H__
#define __SYSTEM_UI_H__
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
class system_ui : public CCObject
{
public:
	system_ui();
	system_ui(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * messagebox;

	ActionObject* message_in;
	CCCallFunc* message_infunc;
	void* message_infuncEnd();

	ActionObject* message_out;
	CCCallFunc* message_outfunc;
	void* message_outfuncEnd();

	ActionObject* message_idle;
	CCCallFunc* message_idlefunc;
	void* message_idlefuncEnd();

private:
	Widget* root;
}
#endif // __SYSTEM_UI_H__
