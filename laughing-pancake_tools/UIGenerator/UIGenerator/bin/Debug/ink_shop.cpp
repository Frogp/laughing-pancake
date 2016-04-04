/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "ink_shop.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

ink_shop::ink_shop()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("ink_shop.json");
	InitPage();
}
ink_shop::ink_shop(Widget* _root)
{
	root = _root;
	InitPage();
}
void ink_shop::InitPage()
{
	ink_open = cocostudio::ActionManagerEx::getInstance()->getActionByName("ink_shop.json", "ink_open");
	ink_open->retain();
	ink_openfunc = CCCallFunc::create(this, callfunc_selector(ink_shop::ink_openfuncEnd));
	ink_openfunc->retain();
	ink_close = cocostudio::ActionManagerEx::getInstance()->getActionByName("ink_shop.json", "ink_close");
	ink_close->retain();
	ink_closefunc = CCCallFunc::create(this, callfunc_selector(ink_shop::ink_closefuncEnd));
	ink_closefunc->retain();
	ink_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("ink_shop.json", "ink_idle");
	ink_idle->retain();
	ink_idlefunc = CCCallFunc::create(this, callfunc_selector(ink_shop::ink_idlefuncEnd));
	ink_idlefunc->retain();
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
	text_0= static_cast<cocos2d::ui::Text *>(root->getChildByTag("69894"));
	text_0->retain();
	inkshop_text1= static_cast<cocos2d::ui::Text *>(root->getChildByTag("62775"));
	inkshop_text1->retain();
	cash_button_01= static_cast<Layout *>(root->getChildByTag("6924"));
	cash_button_01->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_02= static_cast<Layout *>(root->getChildByTag("76935"));
	cash_button_02->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_03= static_cast<Layout *>(root->getChildByTag("76945"));
	cash_button_03->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_04= static_cast<Layout *>(root->getChildByTag("76955"));
	cash_button_04->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_05= static_cast<Layout *>(root->getChildByTag("76965"));
	cash_button_05->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_06= static_cast<Layout *>(root->getChildByTag("76975"));
	cash_button_06->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_07= static_cast<Layout *>(root->getChildByTag("76985"));
	cash_button_07->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_08= static_cast<Layout *>(root->getChildByTag("76995"));
	cash_button_08->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
	cash_button_09= static_cast<Layout *>(root->getChildByTag("77005"));
	cash_button_09->retain();
		{
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		ink_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("ink_icon"));
		ink_icon->retain();
		cash_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("cash_button"));
		cash_button->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		}
}
void ink_shop::ink_openfuncEnd()
{
	ink_open->stop();
}
void ink_shop::ink_closefuncEnd()
{
	ink_close->stop();
}
void ink_shop::ink_idlefuncEnd()
{
	ink_idle->stop();
}

