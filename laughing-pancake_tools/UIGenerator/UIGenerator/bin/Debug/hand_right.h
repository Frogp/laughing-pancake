#ifndef __HAND_RIGHT_H__
#define __HAND_RIGHT_H__
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
class hand_right : public CCObject
{
public:
	hand_right();
	hand_right(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * hand_right;

	ActionObject* stamp_in;
	CCCallFunc* stamp_infunc;
	void* stamp_infuncEnd();

	ActionObject* stamp_out;
	CCCallFunc* stamp_outfunc;
	void* stamp_outfuncEnd();

private:
	Widget* root;
}
#endif // __HAND_RIGHT_H__
