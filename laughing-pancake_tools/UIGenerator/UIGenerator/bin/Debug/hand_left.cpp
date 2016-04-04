/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "hand_left.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

hand_left::hand_left()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("hand_left.json");
	InitPage();
}
hand_left::hand_left(Widget* _root)
{
	root = _root;
	InitPage();
}
void hand_left::InitPage()
{
	pass_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("hand_left.json", "pass_ani");
	pass_ani->retain();
	pass_anifunc = CCCallFunc::create(this, callfunc_selector(hand_left::pass_anifuncEnd));
	pass_anifunc->retain();
	hand_left= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("31949"));
	hand_left->retain();
}
void hand_left::pass_anifuncEnd()
{
	pass_ani->stop();
}

