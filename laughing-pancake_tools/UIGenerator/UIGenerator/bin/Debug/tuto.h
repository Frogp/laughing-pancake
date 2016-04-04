#ifndef __TUTO_H__
#define __TUTO_H__
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
class tuto : public CCObject
{
public:
	tuto();
	tuto(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * Image_25;
	Layout * tuto_1;
	Layout * tuto_2;
	Layout * tuto_3;
	Layout * tuto_4;
	Layout * tuto_5;
	Layout * tuto_6;
	Layout * tuto_7;
	Layout * tuto_8;
	Layout * tuto_9;
	Layout * tuto_10;
	Layout * tuto_11;
	Layout * tuto_12;
	Layout * tuto_13;
	Layout * tuto_14;
	Layout * tuto_15;
	Layout * tuto_16;

private:
	Widget* root;
}
#endif // __TUTO_H__
