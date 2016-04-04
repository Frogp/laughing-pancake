/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "hand_right.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

hand_right::hand_right()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("hand_right.json");
	InitPage();
}
hand_right::hand_right(Widget* _root)
{
	root = _root;
	InitPage();
}
void hand_right::InitPage()
{
	stamp_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("hand_right.json", "stamp_in");
	stamp_in->retain();
	stamp_infunc = CCCallFunc::create(this, callfunc_selector(hand_right::stamp_infuncEnd));
	stamp_infunc->retain();
	stamp_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("hand_right.json", "stamp_out");
	stamp_out->retain();
	stamp_outfunc = CCCallFunc::create(this, callfunc_selector(hand_right::stamp_outfuncEnd));
	stamp_outfunc->retain();
	hand_right= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("28"));
	hand_right->retain();
		{
		point= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("point"));
		point->retain();
		}
}
void hand_right::stamp_infuncEnd()
{
	stamp_in->stop();
}
void hand_right::stamp_outfuncEnd()
{
	stamp_out->stop();
}

