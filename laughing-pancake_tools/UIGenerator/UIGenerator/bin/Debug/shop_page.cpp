/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "shop_page.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

shop_page::shop_page()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("shop_page.json");
	InitPage();
}
shop_page::shop_page(Widget* _root)
{
	root = _root;
	InitPage();
}
void shop_page::InitPage()
{
	shop_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("shop_page.json", "shop_idle");
	shop_idle->retain();
	shop_idlefunc = CCCallFunc::create(this, callfunc_selector(shop_page::shop_idlefuncEnd));
	shop_idlefunc->retain();
	shop_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("681"));
	shop_back->retain();
	shop_title_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("682"));
	shop_title_back->retain();
	shop_title_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("683"));
	shop_title_text->retain();
	ui_back_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("684"));
	ui_back_button->retain();
	goldbox= static_cast<cocos2d::ui::Button* >(root->getChildByTag("685"));
	goldbox->retain();
	cashbox= static_cast<cocos2d::ui::Button* >(root->getChildByTag("686"));
	cashbox->retain();
	postshop= static_cast<cocos2d::ui::Button* >(root->getChildByTag("688"));
	postshop->retain();
	stampshop= static_cast<cocos2d::ui::Button* >(root->getChildByTag("689"));
	stampshop->retain();
	cash_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByTag("713"));
	cash_text->retain();
	gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByTag("715"));
	gold_text->retain();
}
void shop_page::shop_idlefuncEnd()
{
	shop_idle->stop();
}

