#ifndef __MISS_BOX_H__
#define __MISS_BOX_H__
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
class miss_box : public CCObject
{
public:
	miss_box();
	miss_box(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * miss_back;
	cocos2d::ui::Text * miss_box_text;
	cocos2d::ui::ImageView * miss_back_0;
	cocos2d::ui::Text * miss_box_text_up;

	ActionObject* miss_box_ani;
	CCCallFunc* miss_box_anifunc;
	void* miss_box_anifuncEnd();

private:
	Widget* root;
}
#endif // __MISS_BOX_H__
