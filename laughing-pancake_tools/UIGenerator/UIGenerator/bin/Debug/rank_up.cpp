/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "rank_up.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

rank_up::rank_up()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("rank_up.json");
	InitPage();
}
rank_up::rank_up(Widget* _root)
{
	root = _root;
	InitPage();
}
void rank_up::InitPage()
{
	rank_ani_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("rank_up.json", "rank_ani_in");
	rank_ani_in->retain();
	rank_ani_infunc = CCCallFunc::create(this, callfunc_selector(rank_up::rank_ani_infuncEnd));
	rank_ani_infunc->retain();
	rank_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("rank_up.json", "rank_idle");
	rank_idle->retain();
	rank_idlefunc = CCCallFunc::create(this, callfunc_selector(rank_up::rank_idlefuncEnd));
	rank_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("16510"));
	black_box->retain();
	Image_7= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("17446"));
	Image_7->retain();
	fx_light= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("34498"));
	fx_light->retain();
	fx_light_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("34500"));
	fx_light_0->retain();
	rank_up_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("16514"));
	rank_up_text->retain();
	tuch_scr_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("16515"));
	tuch_scr_text->retain();
	dmg_fx_00= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("58658"));
	dmg_fx_00->retain();
}
void rank_up::rank_ani_infuncEnd()
{
	rank_ani_in->stop();
}
void rank_up::rank_idlefuncEnd()
{
	rank_idle->stop();
}

