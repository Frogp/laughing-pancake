/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "option_ui.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

option_ui::option_ui()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("option_ui.json");
	InitPage();
}
option_ui::option_ui(Widget* _root)
{
	root = _root;
	InitPage();
}
void option_ui::InitPage()
{
	option_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("option_ui.json", "option_in");
	option_in->retain();
	option_infunc = CCCallFunc::create(this, callfunc_selector(option_ui::option_infuncEnd));
	option_infunc->retain();
	option_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("option_ui.json", "option_out");
	option_out->retain();
	option_outfunc = CCCallFunc::create(this, callfunc_selector(option_ui::option_outfuncEnd));
	option_outfunc->retain();
	option_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("option_ui.json", "option_idle");
	option_idle->retain();
	option_idlefunc = CCCallFunc::create(this, callfunc_selector(option_ui::option_idlefuncEnd));
	option_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("23407"));
	black_box->retain();
	box= static_cast<Layout *>(root->getChildByTag("24617"));
	box->retain();
		{
		option_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("option_back"));
		option_back->retain();
		xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("xbutton"));
		xbutton->retain();
		option_onoff_1= static_cast<CheckBox *>(root->getChildByName("option_onoff_1"));
		option_onoff_1->retain();
		option_onoff_2= static_cast<CheckBox *>(root->getChildByName("option_onoff_2"));
		option_onoff_2->retain();
		option_onoff_3= static_cast<CheckBox *>(root->getChildByName("option_onoff_3"));
		option_onoff_3->retain();
		option_onoff_4= static_cast<CheckBox *>(root->getChildByName("option_onoff_4"));
		option_onoff_4->retain();
		fblogout= static_cast<cocos2d::ui::Button* >(root->getChildByName("fblogout"));
		fblogout->retain();
		coupon= static_cast<cocos2d::ui::Button* >(root->getChildByName("coupon"));
		coupon->retain();
		make_us= static_cast<cocos2d::ui::Button* >(root->getChildByName("make_us"));
		make_us->retain();
		title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
		title_text->retain();
		music_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("music_text"));
		music_text->retain();
		sound_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("sound_text"));
		sound_text->retain();
		beep_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("beep_text"));
		beep_text->retain();
		push_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("push_text"));
		push_text->retain();
		game_option= static_cast<cocos2d::ui::Text *>(root->getChildByName("game_option"));
		game_option->retain();
		game_info= static_cast<cocos2d::ui::Text *>(root->getChildByName("game_info"));
		game_info->retain();
		game_info_4= static_cast<cocos2d::ui::Text *>(root->getChildByName("game_info_4"));
		game_info_4->retain();
		version_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("version_text"));
		version_text->retain();
		}
}
void option_ui::option_infuncEnd()
{
	option_in->stop();
}
void option_ui::option_outfuncEnd()
{
	option_out->stop();
}
void option_ui::option_idlefuncEnd()
{
	option_idle->stop();
}

