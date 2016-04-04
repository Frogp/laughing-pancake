/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "system_ui.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

system_ui::system_ui()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("system_ui.json");
	InitPage();
}
system_ui::system_ui(Widget* _root)
{
	root = _root;
	InitPage();
}
void system_ui::InitPage()
{
	message_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("system_ui.json", "message_in");
	message_in->retain();
	message_infunc = CCCallFunc::create(this, callfunc_selector(system_ui::message_infuncEnd));
	message_infunc->retain();
	message_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("system_ui.json", "message_out");
	message_out->retain();
	message_outfunc = CCCallFunc::create(this, callfunc_selector(system_ui::message_outfuncEnd));
	message_outfunc->retain();
	message_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("system_ui.json", "message_idle");
	message_idle->retain();
	message_idlefunc = CCCallFunc::create(this, callfunc_selector(system_ui::message_idlefuncEnd));
	message_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9393"));
	black_box->retain();
	messagebox= static_cast<Layout *>(root->getChildByTag("9447"));
	messagebox->retain();
		{
		system_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back"));
		system_back->retain();
		system_1= static_cast<Layout *>(root->getChildByName("system_1"));
		system_1->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			Image_73= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_73"));
			Image_73->retain();
			}
		system_2= static_cast<Layout *>(root->getChildByName("system_2"));
		system_2->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			Image_72= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_72"));
			Image_72->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_3= static_cast<Layout *>(root->getChildByName("system_3"));
		system_3->retain();
			{
			Image_71= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_71"));
			Image_71->retain();
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_4= static_cast<Layout *>(root->getChildByName("system_4"));
		system_4->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			Image_74= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_74"));
			Image_74->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_5= static_cast<Layout *>(root->getChildByName("system_5"));
		system_5->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			Image_75= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_75"));
			Image_75->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_6= static_cast<Layout *>(root->getChildByName("system_6"));
		system_6->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			cash_in_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_in_box"));
			cash_in_box->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			cash_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("cash_text"));
			cash_text->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_7= static_cast<Layout *>(root->getChildByName("system_7"));
		system_7->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			cash_in_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_in_box"));
			cash_in_box->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			buy_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("buy_text"));
			buy_text->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
			cash_text->retain();
			}
		system_8= static_cast<Layout *>(root->getChildByName("system_8"));
		system_8->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			cash_in_box_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_in_box_0"));
			cash_in_box_0->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			buy_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("buy_text"));
			buy_text->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
			cash_text->retain();
			}
		system_9= static_cast<Layout *>(root->getChildByName("system_9"));
		system_9->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
			cash_icon->retain();
			cash_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("cash_text"));
			cash_text->retain();
			buy_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("buy_text"));
			buy_text->retain();
			}
		system_10= static_cast<Layout *>(root->getChildByName("system_10"));
		system_10->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			cash_in_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_in_box"));
			cash_in_box->retain();
			ink_7= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_7"));
			ink_7->retain();
			ink_time= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("ink_time"));
			ink_time->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_11= static_cast<Layout *>(root->getChildByName("system_11"));
		system_11->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			}
		system_12= static_cast<Layout *>(root->getChildByName("system_12"));
		system_12->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_13= static_cast<Layout *>(root->getChildByName("system_13"));
		system_13->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			}
		system_14= static_cast<Layout *>(root->getChildByName("system_14"));
		system_14->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_15= static_cast<Layout *>(root->getChildByName("system_15"));
		system_15->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_16= static_cast<Layout *>(root->getChildByName("system_16"));
		system_16->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			Image_85= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_85"));
			Image_85->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_17= static_cast<Layout *>(root->getChildByName("system_17"));
		system_17->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			Image_85= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_85"));
			Image_85->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_18= static_cast<Layout *>(root->getChildByName("system_18"));
		system_18->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			cupone_zone= static_cast<Layout *>(root->getChildByName("cupone_zone"));
			cupone_zone->retain();
				{
				text_box= static_cast<cocos2d::ui::TextField *>(root->getChildByName("text_box"));
				text_box->retain();
				}
			title_text_12= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text_12"));
			title_text_12->retain();
			}
		system_19= static_cast<Layout *>(root->getChildByName("system_19"));
		system_19->retain();
			{
			system_back_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("system_back_up"));
			system_back_up->retain();
			text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("text_01"));
			text_01->retain();
			title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("title_text"));
			title_text->retain();
			}
		system_no= static_cast<cocos2d::ui::Button* >(root->getChildByName("system_no"));
		system_no->retain();
		system_yes= static_cast<cocos2d::ui::Button* >(root->getChildByName("system_yes"));
		system_yes->retain();
		system_ok= static_cast<cocos2d::ui::Button* >(root->getChildByName("system_ok"));
		system_ok->retain();
		}
}
void system_ui::message_infuncEnd()
{
	message_in->stop();
}
void system_ui::message_outfuncEnd()
{
	message_out->stop();
}
void system_ui::message_idlefuncEnd()
{
	message_idle->stop();
}

