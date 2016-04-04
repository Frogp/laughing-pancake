/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "level_up.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

level_up::level_up()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("level_up.json");
	InitPage();
}
level_up::level_up(Widget* _root)
{
	root = _root;
	InitPage();
}
void level_up::InitPage()
{
	level_ani_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("level_up.json", "level_ani_in");
	level_ani_in->retain();
	level_ani_infunc = CCCallFunc::create(this, callfunc_selector(level_up::level_ani_infuncEnd));
	level_ani_infunc->retain();
	level_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("level_up.json", "level_idle");
	level_idle->retain();
	level_idlefunc = CCCallFunc::create(this, callfunc_selector(level_up::level_idlefuncEnd));
	level_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("16510"));
	black_box->retain();
	old_level= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByTag("16511"));
	old_level->retain();
	new_level= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByTag("16513"));
	new_level->retain();
	Image_25= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("68761"));
	Image_25->retain();
	tuch_scr_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("71260"));
	tuch_scr_text->retain();
	level_up_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("71261"));
	level_up_text->retain();
}
void level_up::level_ani_infuncEnd()
{
	level_ani_in->stop();
}
void level_up::level_idlefuncEnd()
{
	level_idle->stop();
}

