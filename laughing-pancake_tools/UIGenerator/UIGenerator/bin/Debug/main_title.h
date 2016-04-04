#ifndef __MAIN_TITLE_H__
#define __MAIN_TITLE_H__
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
class main_title : public CCObject
{
public:
	main_title();
	main_title(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * title_back;
	cocos2d::ui::Text * ver_text;
	cocos2d::ui::ImageView * title;
	cocos2d::ui::ImageView * jabe;
	Layout * bar;
	cocos2d::ui::Button*  start_button;
	Layout * table;
	Layout * gapu;
	cocos2d::ui::ImageView * jebe;
	cocos2d::ui::ImageView * bakck;
	cocos2d::ui::ImageView * Image_25;

	ActionObject* title_in;
	CCCallFunc* title_infunc;
	void* title_infuncEnd();

	ActionObject* title_idle;
	CCCallFunc* title_idlefunc;
	void* title_idlefuncEnd();

private:
	Widget* root;
}
#endif // __MAIN_TITLE_H__
