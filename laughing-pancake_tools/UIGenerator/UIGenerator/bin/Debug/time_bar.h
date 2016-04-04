#ifndef __TIME_BAR_H__
#define __TIME_BAR_H__
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
class time_bar : public CCObject
{
public:
	time_bar();
	time_bar(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * angry_bar_back;
	cocos2d::ui::LoadingBar * angry_bar;
	cocos2d::ui::ImageView * time_bar_back;
	cocos2d::ui::LoadingBar * time_bar;
	cocos2d::ui::ImageView * gold_icon;
	cocos2d::ui::Text * gold_text;
	cocos2d::ui::ImageView * black_bar;
	cocos2d::ui::Text * score_text;
	cocos2d::ui::Text * score_text_back;
	cocos2d::ui::ImageView * bar_black;
	cocos2d::ui::ImageView * chr_img;
	cocos2d::ui::Text * chr_name_text;
	cocos2d::ui::Text * star_text;
	cocos2d::ui::ImageView * star_icon;
	Layout * post_box_icon;
	cocos2d::ui::ImageView * post_bar_back;
	cocos2d::ui::LoadingBar * post_bar;
	cocos2d::ui::Text * post_box_text;
	cocos2d::ui::ImageView * Image_27;
	cocos2d::ui::ImageView * item1;
	cocos2d::ui::ImageView * item2;
	cocos2d::ui::ImageView * item3;

	ActionObject* post_idle;
	CCCallFunc* post_idlefunc;
	void* post_idlefuncEnd();

	ActionObject* post_up;
	CCCallFunc* post_upfunc;
	void* post_upfuncEnd();

private:
	Widget* root;
}
#endif // __TIME_BAR_H__
