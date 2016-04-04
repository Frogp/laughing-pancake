#ifndef __LODING_UI_H__
#define __LODING_UI_H__
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
class loding_ui : public CCObject
{
public:
	loding_ui();
	loding_ui(Widget* _root);
	void InitPage();
public:
	Layout * loading_nomal;
	cocos2d::ui::ImageView * loading_bar_back;
	cocos2d::ui::LoadingBar * loading_bar;
	cocos2d::ui::ImageView * Image_27;

	ActionObject* loding_ui_ani;
	CCCallFunc* loding_ui_anifunc;
	void* loding_ui_anifuncEnd();

private:
	Widget* root;
}
#endif // __LODING_UI_H__
