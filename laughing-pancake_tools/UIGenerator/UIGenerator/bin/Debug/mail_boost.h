#ifndef __MAIL_BOOST_H__
#define __MAIL_BOOST_H__
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
class mail_boost : public CCObject
{
public:
	mail_boost();
	mail_boost(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * back;
	cocos2d::ui::ImageView * mail_back;
	cocos2d::ui::ImageView * mail_back2;
	cocos2d::ui::ImageView * mail_up;
	cocos2d::ui::Button*  reward_ok;
	cocos2d::ui::ImageView * post_bootst_title;
	cocos2d::ui::ImageView * tuch_text;
	Layout * item_1;
	Layout * item_2;
	Layout * item_3;
	Layout * item_4;
	Layout * item_5;

	ActionObject* boost_in;
	CCCallFunc* boost_infunc;
	void* boost_infuncEnd();

	ActionObject* boost_idle;
	CCCallFunc* boost_idlefunc;
	void* boost_idlefuncEnd();

	ActionObject* boost_tuch;
	CCCallFunc* boost_tuchfunc;
	void* boost_tuchfuncEnd();

private:
	Widget* root;
}
#endif // __MAIL_BOOST_H__
