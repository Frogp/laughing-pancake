#ifndef __CHR_UP_H__
#define __CHR_UP_H__
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
class chr_up : public CCObject
{
public:
	chr_up();
	chr_up(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * back;
	cocos2d::ui::ImageView * ground;
	cocos2d::ui::ImageView * chr_old;
	cocos2d::ui::ImageView * ground2;
	cocos2d::ui::ImageView * chr_new;
	cocos2d::ui::ImageView * fx_1;
	cocos2d::ui::ImageView * fx_2;
	Layout * button_panel;
	cocos2d::ui::ImageView * 1;
	cocos2d::ui::ImageView * 2;
	cocos2d::ui::ImageView * 3;
	cocos2d::ui::ImageView * 4;

	ActionObject* chr_up_in;
	CCCallFunc* chr_up_infunc;
	void* chr_up_infuncEnd();

	ActionObject* chr_up_idle;
	CCCallFunc* chr_up_idlefunc;
	void* chr_up_idlefuncEnd();

private:
	Widget* root;
}
#endif // __CHR_UP_H__
