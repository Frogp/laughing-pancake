#ifndef __MAIL_BOX_H__
#define __MAIL_BOX_H__
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
class mail_box : public CCObject
{
public:
	mail_box();
	mail_box(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * mail_box;

	ActionObject* mailbox_in;
	CCCallFunc* mailbox_infunc;
	void* mailbox_infuncEnd();

	ActionObject* mailbox_out;
	CCCallFunc* mailbox_outfunc;
	void* mailbox_outfuncEnd();

	ActionObject* mailbox_idle;
	CCCallFunc* mailbox_idlefunc;
	void* mailbox_idlefuncEnd();

private:
	Widget* root;
}
#endif // __MAIL_BOX_H__
