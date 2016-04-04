/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "gold_shop.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

gold_shop::gold_shop()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("gold_shop.json");
	InitPage();
}
gold_shop::gold_shop(Widget* _root)
{
	root = _root;
	InitPage();
}
void gold_shop::InitPage()
{
	gold_open = cocostudio::ActionManagerEx::getInstance()->getActionByName("gold_shop.json", "gold_open");
	gold_open->retain();
	gold_openfunc = CCCallFunc::create(this, callfunc_selector(gold_shop::gold_openfuncEnd));
	gold_openfunc->retain();
	gold_close = cocostudio::ActionManagerEx::getInstance()->getActionByName("gold_shop.json", "gold_close");
	gold_close->retain();
	gold_closefunc = CCCallFunc::create(this, callfunc_selector(gold_shop::gold_closefuncEnd));
	gold_closefunc->retain();
	gold_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("gold_shop.json", "gold_idle");
	gold_idle->retain();
	gold_idlefunc = CCCallFunc::create(this, callfunc_selector(gold_shop::gold_idlefuncEnd));
	gold_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6911"));
	black_box->retain();
	goldshop_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6912"));
	goldshop_back->retain();
	goldshop_title= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6913"));
	goldshop_title->retain();
	xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByTag("6914"));
	xbutton->retain();
	ink_big_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("6915"));
	ink_big_icon->retain();
	goldshop_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("62804"));
	goldshop_text->retain();
	gold_button_01= static_cast<Layout *>(root->getChildByTag("6924"));
	gold_button_01->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_02= static_cast<Layout *>(root->getChildByTag("77088"));
	gold_button_02->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_03= static_cast<Layout *>(root->getChildByTag("77102"));
	gold_button_03->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_04= static_cast<Layout *>(root->getChildByTag("77116"));
	gold_button_04->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_05= static_cast<Layout *>(root->getChildByTag("77130"));
	gold_button_05->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_06= static_cast<Layout *>(root->getChildByTag("77144"));
	gold_button_06->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_07= static_cast<Layout *>(root->getChildByTag("77158"));
	gold_button_07->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_08= static_cast<Layout *>(root->getChildByTag("77172"));
	gold_button_08->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
	gold_button_09= static_cast<Layout *>(root->getChildByTag("77186"));
	gold_button_09->retain();
		{
		won_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon"));
		won_icon->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gold_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("gold_button"));
		gold_button->retain();
		won_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("won_icon_0"));
		won_icon_0->retain();
		ink_text_num= static_cast<cocos2d::ui::Text *>(root->getChildByName("ink_text_num"));
		ink_text_num->retain();
		money_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("money_text"));
		money_text->retain();
		}
}
void gold_shop::gold_openfuncEnd()
{
	gold_open->stop();
}
void gold_shop::gold_closefuncEnd()
{
	gold_close->stop();
}
void gold_shop::gold_idlefuncEnd()
{
	gold_idle->stop();
}

