#ifndef __MAIL_00_1_H__
#define __MAIL_00_1_H__
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
class Mail_00_1 : public CCObject
{
public:
	Mail_00_1();
	Mail_00_1(Widget* _root);
	void InitPage();
public:
	Layout * mail_back;

	ActionObject* Mail_true;
	CCCallFunc* Mail_truefunc;
	void* Mail_truefuncEnd();

	ActionObject* Mail_false;
	CCCallFunc* Mail_falsefunc;
	void* Mail_falsefuncEnd();

private:
	Widget* root;
}
#endif // __MAIL_00_1_H__
