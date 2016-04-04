#ifndef __CREDITS_H__
#define __CREDITS_H__
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
class credits : public CCObject
{
public:
	credits();
	credits(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * Panel_25;

	ActionObject* credits_ani;
	CCCallFunc* credits_anifunc;
	void* credits_anifuncEnd();

private:
	Widget* root;
}
#endif // __CREDITS_H__
