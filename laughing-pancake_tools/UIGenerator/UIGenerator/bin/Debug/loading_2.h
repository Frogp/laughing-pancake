#ifndef __LOADING_2_H__
#define __LOADING_2_H__
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
class loading_2 : public CCObject
{
public:
	loading_2();
	loading_2(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_back;
	cocos2d::ui::ImageView * bike_body;
	cocos2d::ui::ImageView * w_f;
	cocos2d::ui::ImageView * w_r;

	ActionObject* loading_idle;
	CCCallFunc* loading_idlefunc;
	void* loading_idlefuncEnd();

private:
	Widget* root;
}
#endif // __LOADING_2_H__
