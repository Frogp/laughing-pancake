/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "cash_shop.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

cash_shop::cash_shop()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("cash_shop.json");
	InitPage();
}
cash_shop::cash_shop(Widget* _root)
{
	root = _root;
	InitPage();
}
void cash_shop::InitPage()
{
	cash_open = cocostudio::ActionManagerEx::getInstance()->getActionByName("cash_shop.json", "cash_open");
	cash_open->retain();
	cash_openfunc = CCCallFunc::create(this, callfunc_selector(cash_shop::cash_openfuncEnd));
	cash_openfunc->retain();
	cash_close = cocostudio::ActionManagerEx::getInstance()->getActionByName("cash_shop.json", "cash_close");
	cash_close->retain();
	cash_closefunc = CCCallFunc::create(this, callfunc_selector(cash_shop::cash_closefuncEnd));
	cash_closefunc->retain();
	cash_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("cash_shop.json", "cash_idle");
	cash_idle->retain();
	cash_idlefunc = CCCallFunc::create(this, callfunc_selector(cash_shop::cash_idlefuncEnd));
	cash_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6911"));
	black_box->retain();
	cashshop_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6912"));
	cashshop_back->retain();
	cashshop_title= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6913"));
	cashshop_title->retain();
	xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByTag("6914"));
	xbutton->retain();
	ink_big_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6915"));
	ink_big_icon->retain();
	text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("13015"));
	text->retain();
	cashshop_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("62773"));
	cashshop_text->retain();
	cash_button_01= static_cast<Layout *>(root->getChildByTag("6924"));
	cash_button_01->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_02= static_cast<Layout *>(root->getChildByTag("77019"));
	cash_button_02->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_03= static_cast<Layout *>(root->getChildByTag("77029"));
	cash_button_03->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_04= static_cast<Layout *>(root->getChildByTag("77039"));
	cash_button_04->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_05= static_cast<Layout *>(root->getChildByTag("77044"));
	cash_button_05->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_06= static_cast<Layout *>(root->getChildByTag("77049"));
	cash_button_06->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_07= static_cast<Layout *>(root->getChildByTag("77054"));
	cash_button_07->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_08= static_cast<Layout *>(root->getChildByTag("77059"));
	cash_button_08->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	cash_button_09= static_cast<Layout *>(root->getChildByTag("77064"));
	cash_button_09->retain();
		{
		cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_icon"));
		cash_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
}
void cash_shop::cash_openfuncEnd()
{
	cash_open->stop();
}
void cash_shop::cash_closefuncEnd()
{
	cash_close->stop();
}
void cash_shop::cash_idlefuncEnd()
{
	cash_idle->stop();
}

