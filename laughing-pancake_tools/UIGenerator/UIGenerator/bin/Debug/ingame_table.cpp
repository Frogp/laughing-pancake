/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "ingame_table.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

ingame_table::ingame_table()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("ingame_table.json");
	InitPage();
}
ingame_table::ingame_table(Widget* _root)
{
	root = _root;
	InitPage();
}
void ingame_table::InitPage()
{
	ink_tuch_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("ingame_table.json", "ink_tuch_idle");
	ink_tuch_idle->retain();
	ink_tuch_idlefunc = CCCallFunc::create(this, callfunc_selector(ingame_table::ink_tuch_idlefuncEnd));
	ink_tuch_idlefunc->retain();
	ink_tuch_nomal = cocostudio::ActionManagerEx::getInstance()->getActionByName("ingame_table.json", "ink_tuch_nomal");
	ink_tuch_nomal->retain();
	ink_tuch_nomalfunc = CCCallFunc::create(this, callfunc_selector(ingame_table::ink_tuch_nomalfuncEnd));
	ink_tuch_nomalfunc->retain();
	ink_tuch_click = cocostudio::ActionManagerEx::getInstance()->getActionByName("ingame_table.json", "ink_tuch_click");
	ink_tuch_click->retain();
	ink_tuch_clickfunc = CCCallFunc::create(this, callfunc_selector(ingame_table::ink_tuch_clickfuncEnd));
	ink_tuch_clickfunc->retain();
	star_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("ingame_table.json", "star_ani");
	star_ani->retain();
	star_anifunc = CCCallFunc::create(this, callfunc_selector(ingame_table::star_anifuncEnd));
	star_anifunc->retain();
	back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("110"));
	back->retain();
}
void ingame_table::ink_tuch_idlefuncEnd()
{
	ink_tuch_idle->stop();
}
void ingame_table::ink_tuch_nomalfuncEnd()
{
	ink_tuch_nomal->stop();
}
void ingame_table::ink_tuch_clickfuncEnd()
{
	ink_tuch_click->stop();
}
void ingame_table::star_anifuncEnd()
{
	star_ani->stop();
}

