#ifndef __MANI_MENU_H__
#define __MANI_MENU_H__
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
class mani_menu : public CCObject
{
public:
	mani_menu();
	mani_menu(Widget* _root);
	void InitPage();
public:
	cocos2d::ui::ImageView * back;
	cocos2d::ui::Button*  option;
	cocos2d::ui::Button*  shop;
	cocos2d::ui::Button*  bag;
	cocos2d::ui::ImageView * bag_door;
	cocos2d::ui::ImageView * table_img;
	cocos2d::ui::Button*  start;
	cocos2d::ui::Button*  skill;
	cocos2d::ui::Text * gold_box_text;
	cocos2d::ui::Button*  goldbox;
	cocos2d::ui::Button*  box;
	Layout * ranking_panel;
	cocos2d::ui::ImageView * Image_1;
	cocos2d::ui::ImageView * star_back;
	cocos2d::ui::ImageView * star_one;
	cocos2d::ui::Text * star_have_text;
	cocos2d::ui::Button*  achievements_button;
	cocos2d::ui::Button*  leaderboard_button;
	cocos2d::ui::Button*  Button_2;
	cocos2d::ui::Button*  cash_box;
	cocos2d::ui::Text * cash_text;
	cocos2d::ui::ImageView * level_icon;
	cocos2d::ui::ImageView * exp_back;
	cocos2d::ui::LoadingBar * exp_bar;
	cocos2d::ui::Text * exp_text;
	cocos2d::ui::Text * exp_text_back;
	cocos2d::ui::Text * level_number;
	Layout * ink_button;
	Layout * start_box;
	cocos2d::ui::ImageView * main_back2;
	cocos2d::ui::PageView * chr_page;
	cocos2d::ui::ImageView * new_text_bag;
	cocos2d::ui::ImageView * new_text_skill;
	cocos2d::ui::ImageView * skill_idle;
	cocos2d::ui::ImageView * light_img;
	cocos2d::ui::ImageView * shop_idle;
	cocos2d::ui::ImageView * shop_text_img;
	cocos2d::ui::ImageView * option_text_img;
	cocos2d::ui::ImageView * skill_text_img;
	cocos2d::ui::ImageView * bag_text_img;
	cocos2d::ui::Button*  chr_back_button;
	cocos2d::ui::Button*  chr_next_button;
	cocos2d::ui::ImageView * start_box_item_0;

	ActionObject* game_start;
	CCCallFunc* game_startfunc;
	void* game_startfuncEnd();

	ActionObject* game_back;
	CCCallFunc* game_backfunc;
	void* game_backfuncEnd();

	ActionObject* game_chr_idle;
	CCCallFunc* game_chr_idlefunc;
	void* game_chr_idlefuncEnd();

	ActionObject* game_main_idle;
	CCCallFunc* game_main_idlefunc;
	void* game_main_idlefuncEnd();

	ActionObject* chr_name_in;
	CCCallFunc* chr_name_infunc;
	void* chr_name_infuncEnd();

private:
	Widget* root;
}
#endif // __MANI_MENU_H__
