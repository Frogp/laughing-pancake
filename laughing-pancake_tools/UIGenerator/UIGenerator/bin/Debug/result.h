#ifndef __RESULT_H__
#define __RESULT_H__
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
class result : public CCObject
{
public:
	result();
	result(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * result_box;

	ActionObject* result_in;
	CCCallFunc* result_infunc;
	void* result_infuncEnd();

	ActionObject* result_out;
	CCCallFunc* result_outfunc;
	void* result_outfuncEnd();

	ActionObject* result_idle;
	CCCallFunc* result_idlefunc;
	void* result_idlefuncEnd();

private:
	Widget* root;
}
#endif // __RESULT_H__
