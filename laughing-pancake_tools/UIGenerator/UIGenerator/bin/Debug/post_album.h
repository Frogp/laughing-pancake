#ifndef __POST_ALBUM_H__
#define __POST_ALBUM_H__
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
class post_album : public CCObject
{
public:
	post_album();
	post_album(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * black_box;
	Layout * post_album;

	ActionObject* album_in;
	CCCallFunc* album_infunc;
	void* album_infuncEnd();

	ActionObject* album_out;
	CCCallFunc* album_outfunc;
	void* album_outfuncEnd();

	ActionObject* album_idle;
	CCCallFunc* album_idlefunc;
	void* album_idlefuncEnd();

private:
	Widget* root;
}
#endif // __POST_ALBUM_H__
