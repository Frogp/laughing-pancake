/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "mani_menu.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

mani_menu::mani_menu()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("mani_menu.json");
	InitPage();
}
mani_menu::mani_menu(Widget* _root)
{
	root = _root;
	InitPage();
}
void mani_menu::InitPage()
{
	game_start = cocostudio::ActionManagerEx::getInstance()->getActionByName("mani_menu.json", "game_start");
	game_start->retain();
	game_startfunc = CCCallFunc::create(this, callfunc_selector(mani_menu::game_startfuncEnd));
	game_startfunc->retain();
	game_back = cocostudio::ActionManagerEx::getInstance()->getActionByName("mani_menu.json", "game_back");
	game_back->retain();
	game_backfunc = CCCallFunc::create(this, callfunc_selector(mani_menu::game_backfuncEnd));
	game_backfunc->retain();
	game_chr_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("mani_menu.json", "game_chr_idle");
	game_chr_idle->retain();
	game_chr_idlefunc = CCCallFunc::create(this, callfunc_selector(mani_menu::game_chr_idlefuncEnd));
	game_chr_idlefunc->retain();
	game_main_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("mani_menu.json", "game_main_idle");
	game_main_idle->retain();
	game_main_idlefunc = CCCallFunc::create(this, callfunc_selector(mani_menu::game_main_idlefuncEnd));
	game_main_idlefunc->retain();
	chr_name_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("mani_menu.json", "chr_name_in");
	chr_name_in->retain();
	chr_name_infunc = CCCallFunc::create(this, callfunc_selector(mani_menu::chr_name_infuncEnd));
	chr_name_infunc->retain();
	back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("75"));
	back->retain();
	option= static_cast<cocos2d::ui::Button* >(root->getChildByTag("76"));
	option->retain();
	shop= static_cast<cocos2d::ui::Button* >(root->getChildByTag("77"));
	shop->retain();
	bag= static_cast<cocos2d::ui::Button* >(root->getChildByTag("78"));
	bag->retain();
	bag_door= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27034"));
	bag_door->retain();
	table_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("3043"));
	table_img->retain();
	start= static_cast<cocos2d::ui::Button* >(root->getChildByTag("79"));
	start->retain();
	skill= static_cast<cocos2d::ui::Button* >(root->getChildByTag("80"));
	skill->retain();
	gold_box_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76862"));
	gold_box_text->retain();
	goldbox= static_cast<cocos2d::ui::Button* >(root->getChildByTag("47799"));
	goldbox->retain();
	box= static_cast<cocos2d::ui::Button* >(root->getChildByTag("81"));
	box->retain();
	ranking_panel= static_cast<Layout *>(root->getChildByTag("28286"));
	ranking_panel->retain();
		{
		ranking_table= static_cast<>(root->getChildByName("ranking_table"));
		ranking_table->retain();
			{
			ranking_box_00= static_cast<Layout *>(root->getChildByName("ranking_box_00"));
			ranking_box_00->retain();
				{
				line= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("line"));
				line->retain();
				pro_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("pro_box"));
				pro_box->retain();
				score= static_cast<cocos2d::ui::Text *>(root->getChildByName("score"));
				score->retain();
				name= static_cast<cocos2d::ui::Text *>(root->getChildByName("name"));
				name->retain();
				album_view= static_cast<cocos2d::ui::Button* >(root->getChildByName("album_view"));
				album_view->retain();
				rank_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("rank_num"));
				rank_num->retain();
				}
			ranking_box_01= static_cast<Layout *>(root->getChildByName("ranking_box_01"));
			ranking_box_01->retain();
				{
				line= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("line"));
				line->retain();
				pro_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("pro_box"));
				pro_box->retain();
				score= static_cast<cocos2d::ui::Text *>(root->getChildByName("score"));
				score->retain();
				name= static_cast<cocos2d::ui::Text *>(root->getChildByName("name"));
				name->retain();
				album_view= static_cast<cocos2d::ui::Button* >(root->getChildByName("album_view"));
				album_view->retain();
				rank_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("rank_num"));
				rank_num->retain();
				}
			}
		ranking_stage_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ranking_stage_back"));
		ranking_stage_back->retain();
		week_rank_time= static_cast<cocos2d::ui::Text *>(root->getChildByName("week_rank_time"));
		week_rank_time->retain();
		mail_box= static_cast<cocos2d::ui::Button* >(root->getChildByName("mail_box"));
		mail_box->retain();
		week_rank_time_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("week_rank_time_0"));
		week_rank_time_0->retain();
		my_rank_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("my_rank_text"));
		my_rank_text->retain();
		my_score= static_cast<cocos2d::ui::Text *>(root->getChildByName("my_score"));
		my_score->retain();
		my_rank_text_2= static_cast<cocos2d::ui::Text *>(root->getChildByName("my_rank_text_2"));
		my_rank_text_2->retain();
		}
	Image_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("277"));
	Image_1->retain();
	star_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60349"));
	star_back->retain();
	star_one= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("35348"));
	star_one->retain();
	star_have_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76802"));
	star_have_text->retain();
	achievements_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("75510"));
	achievements_button->retain();
	leaderboard_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("75512"));
	leaderboard_button->retain();
	Button_2= static_cast<cocos2d::ui::Button* >(root->getChildByTag("278"));
	Button_2->retain();
	cash_box= static_cast<cocos2d::ui::Button* >(root->getChildByTag("679"));
	cash_box->retain();
	cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76864"));
	cash_text->retain();
	level_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("2416"));
	level_icon->retain();
	exp_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("2417"));
	exp_back->retain();
	exp_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByTag("2420"));
	exp_bar->retain();
	exp_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76798"));
	exp_text->retain();
	exp_text_back= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76800"));
	exp_text_back->retain();
	level_number= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76796"));
	level_number->retain();
	ink_button= static_cast<Layout *>(root->getChildByTag("30644"));
	ink_button->retain();
		{
		inkbox= static_cast<cocos2d::ui::Button* >(root->getChildByName("inkbox"));
		inkbox->retain();
		ink_time_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_time_text"));
		ink_time_text->retain();
		ink_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text"));
		ink_text->retain();
		}
	start_box= static_cast<Layout *>(root->getChildByTag("3044"));
	start_box->retain();
		{
		start_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("start_button"));
		start_button->retain();
		start_box_item= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("start_box_item"));
		start_box_item->retain();
		item_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_text"));
		item_text->retain();
		item_text_name= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_text_name"));
		item_text_name->retain();
		gold_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon_0"));
		gold_icon_0->retain();
		start_box_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("start_box_text"));
		start_box_text->retain();
		item_gold_text_sum= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_gold_text_sum"));
		item_gold_text_sum->retain();
		item_1= static_cast<Layout *>(root->getChildByName("item_1"));
		item_1->retain();
			{
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			item_1_check= static_cast<CheckBox *>(root->getChildByName("item_1_check"));
			item_1_check->retain();
			item_gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_gold_text"));
			item_gold_text->retain();
			}
		item_2= static_cast<Layout *>(root->getChildByName("item_2"));
		item_2->retain();
			{
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			item_2_check= static_cast<CheckBox *>(root->getChildByName("item_2_check"));
			item_2_check->retain();
			item_gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_gold_text"));
			item_gold_text->retain();
			}
		item_3= static_cast<Layout *>(root->getChildByName("item_3"));
		item_3->retain();
			{
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			item_3_check= static_cast<CheckBox *>(root->getChildByName("item_3_check"));
			item_3_check->retain();
			item_gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_gold_text"));
			item_gold_text->retain();
			}
		xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("xbutton"));
		xbutton->retain();
		start_box3= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("start_box3"));
		start_box3->retain();
		chr_skill_text1= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text1"));
		chr_skill_text1->retain();
		chr_skill_text2= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text2"));
		chr_skill_text2->retain();
		chr_skill_text3= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text3"));
		chr_skill_text3->retain();
		chr_name_box= static_cast<Layout *>(root->getChildByName("chr_name_box"));
		chr_name_box->retain();
			{
			chr_name_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_name_back"));
			chr_name_back->retain();
			checkbox_chr= static_cast<CheckBox *>(root->getChildByName("checkbox_chr"));
			checkbox_chr->retain();
			chr_name_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_name_text"));
			chr_name_text->retain();
			}
		}
	main_back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("40504"));
	main_back2->retain();
	chr_page= static_cast<cocos2d::ui::PageView *>(root->getChildByTag("37985"));
	chr_page->retain();
		{
		chr_man= static_cast<Layout *>(root->getChildByName("chr_man"));
		chr_man->retain();
			{
			man_click= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("man_click"));
			man_click->retain();
			man_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("man_lock"));
			man_lock->retain();
			chr_ground= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_ground"));
			chr_ground->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
			cash_text->retain();
			buy_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button"));
			buy_button->retain();
			buy_button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button_1"));
			buy_button_1->retain();
			gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text"));
			gold_text->retain();
			}
		chr_bear= static_cast<Layout *>(root->getChildByName("chr_bear"));
		chr_bear->retain();
			{
			bear_click= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("bear_click"));
			bear_click->retain();
			bear_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("bear_lock"));
			bear_lock->retain();
			chr_ground= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_ground"));
			chr_ground->retain();
			gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text"));
			gold_text->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
			cash_text->retain();
			buy_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button"));
			buy_button->retain();
			buy_button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button_1"));
			buy_button_1->retain();
			}
		chr_cat= static_cast<Layout *>(root->getChildByName("chr_cat"));
		chr_cat->retain();
			{
			cat_click= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cat_click"));
			cat_click->retain();
			cat_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cat_lock"));
			cat_lock->retain();
			chr_ground= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_ground"));
			chr_ground->retain();
			gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text"));
			gold_text->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
			cash_text->retain();
			buy_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button"));
			buy_button->retain();
			buy_button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button_1"));
			buy_button_1->retain();
			}
		chr_rab= static_cast<Layout *>(root->getChildByName("chr_rab"));
		chr_rab->retain();
			{
			rabbit_click= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("rabbit_click"));
			rabbit_click->retain();
			rabbit_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("rabbit_lock"));
			rabbit_lock->retain();
			chr_ground= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_ground"));
			chr_ground->retain();
			gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text"));
			gold_text->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
			cash_text->retain();
			buy_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button"));
			buy_button->retain();
			buy_button_1= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button_1"));
			buy_button_1->retain();
			}
		}
	new_text_bag= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("13040"));
	new_text_bag->retain();
	new_text_skill= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("13042"));
	new_text_skill->retain();
	skill_idle= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27037"));
	skill_idle->retain();
	light_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27038"));
	light_img->retain();
	shop_idle= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27039"));
	shop_idle->retain();
	shop_text_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27040"));
	shop_text_img->retain();
	option_text_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27041"));
	option_text_img->retain();
	skill_text_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27042"));
	skill_text_img->retain();
	bag_text_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("27043"));
	bag_text_img->retain();
	chr_back_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("37904"));
	chr_back_button->retain();
	chr_next_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("37906"));
	chr_next_button->retain();
	start_box_item_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("58856"));
	start_box_item_0->retain();
}
void mani_menu::game_startfuncEnd()
{
	game_start->stop();
}
void mani_menu::game_backfuncEnd()
{
	game_back->stop();
}
void mani_menu::game_chr_idlefuncEnd()
{
	game_chr_idle->stop();
}
void mani_menu::game_main_idlefuncEnd()
{
	game_main_idle->stop();
}
void mani_menu::chr_name_infuncEnd()
{
	chr_name_in->stop();
}

