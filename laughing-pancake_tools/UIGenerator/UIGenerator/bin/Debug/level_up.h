#ifndef __LEVEL_UP_H__
#define __LEVEL_UP_H__
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
class level_up : public CCObject
{
public:
	level_up();
	level_up(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	cocos2d::ui::TextBMFont * old_level;
	cocos2d::ui::TextBMFont * new_level;
	cocos2d::ui::ImageView * Image_25;
	cocos2d::ui::Text * tuch_scr_text;
	cocos2d::ui::Text * level_up_text;

	ActionObject* level_ani_in;
	CCCallFunc* level_ani_infunc;
	void* level_ani_infuncEnd();

	ActionObject* level_idle;
	CCCallFunc* level_idlefunc;
	void* level_idlefuncEnd();

private:
	Widget* root;
}
#endif // __LEVEL_UP_H__
