/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "shop_in.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

shop_in::shop_in()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("shop_in.json");
	InitPage();
}
shop_in::shop_in(Widget* _root)
{
	root = _root;
	InitPage();
}
void shop_in::InitPage()
{
	shop_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("shop_in.json", "shop_in");
	shop_in->retain();
	shop_infunc = CCCallFunc::create(this, callfunc_selector(shop_in::shop_infuncEnd));
	shop_infunc->retain();
	shop_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("shop_in.json", "shop_out");
	shop_out->retain();
	shop_outfunc = CCCallFunc::create(this, callfunc_selector(shop_in::shop_outfuncEnd));
	shop_outfunc->retain();
	shop_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("shop_in.json", "shop_idle");
	shop_idle->retain();
	shop_idlefunc = CCCallFunc::create(this, callfunc_selector(shop_in::shop_idlefuncEnd));
	shop_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("43759"));
	black_box->retain();
	shop= static_cast<Layout *>(root->getChildByTag("43940"));
	shop->retain();
		{
		shop_in_title= static_cast<cocos2d::ui::Text *>(root->getChildByName("shop_in_title"));
		shop_in_title->retain();
		ui_back_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("ui_back_button"));
		ui_back_button->retain();
		goldbox= static_cast<cocos2d::ui::Button* >(root->getChildByName("goldbox"));
		goldbox->retain();
		gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text"));
		gold_text->retain();
		cashbox= static_cast<cocos2d::ui::Button* >(root->getChildByName("cashbox"));
		cashbox->retain();
		cash_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("cash_text"));
		cash_text->retain();
		shop_back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("shop_back2"));
		shop_back2->retain();
		shop_in_scroll= static_cast<>(root->getChildByName("shop_in_scroll"));
		shop_in_scroll->retain();
			{
			shop_in_listbox= static_cast<Layout *>(root->getChildByName("shop_in_listbox"));
			shop_in_listbox->retain();
				{
				shop_in_listback= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("shop_in_listback"));
				shop_in_listback->retain();
				shop_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("shop_img"));
				shop_img->retain();
				item_ins_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("item_ins_text"));
				item_ins_text->retain();
				item_name_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_name_text"));
				item_name_text->retain();
				buy_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button"));
				buy_button->retain();
				gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
				gold_icon->retain();
				isntall_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("isntall_button"));
				isntall_button->retain();
				item_info_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_info_text"));
				item_info_text->retain();
				money_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("money_box"));
				money_box->retain();
				Image_71= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_71"));
				Image_71->retain();
				item_have_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("item_have_text"));
				item_have_text->retain();
				used_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("used_button"));
				used_button->retain();
				gold_text_buy= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text_buy"));
				gold_text_buy->retain();
				}
			}
		}
}
void shop_in::shop_infuncEnd()
{
	shop_in->stop();
}
void shop_in::shop_outfuncEnd()
{
	shop_out->stop();
}
void shop_in::shop_idlefuncEnd()
{
	shop_idle->stop();
}

