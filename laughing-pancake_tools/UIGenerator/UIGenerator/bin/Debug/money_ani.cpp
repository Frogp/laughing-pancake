/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "money_ani.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

money_ani::money_ani()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("money_ani.json");
	InitPage();
}
money_ani::money_ani(Widget* _root)
{
	root = _root;
	InitPage();
}
void money_ani::InitPage()
{
	gold_minus = cocostudio::ActionManagerEx::getInstance()->getActionByName("money_ani.json", "gold_minus");
	gold_minus->retain();
	gold_minusfunc = CCCallFunc::create(this, callfunc_selector(money_ani::gold_minusfuncEnd));
	gold_minusfunc->retain();
	gold_plus = cocostudio::ActionManagerEx::getInstance()->getActionByName("money_ani.json", "gold_plus");
	gold_plus->retain();
	gold_plusfunc = CCCallFunc::create(this, callfunc_selector(money_ani::gold_plusfuncEnd));
	gold_plusfunc->retain();
	cash_plus = cocostudio::ActionManagerEx::getInstance()->getActionByName("money_ani.json", "cash_plus");
	cash_plus->retain();
	cash_plusfunc = CCCallFunc::create(this, callfunc_selector(money_ani::cash_plusfuncEnd));
	cash_plusfunc->retain();
	cash_minus = cocostudio::ActionManagerEx::getInstance()->getActionByName("money_ani.json", "cash_minus");
	cash_minus->retain();
	cash_minusfunc = CCCallFunc::create(this, callfunc_selector(money_ani::cash_minusfuncEnd));
	cash_minusfunc->retain();
	money_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByTag("14702"));
	money_text->retain();
	cash_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("14703"));
	cash_icon->retain();
	gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("14704"));
	gold_icon->retain();
	gold_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("14709"));
	gold_icon_0->retain();
	gold_icon_0_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("14711"));
	gold_icon_0_1->retain();
	gold_icon_0_1_2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("14713"));
	gold_icon_0_1_2->retain();
}
void money_ani::gold_minusfuncEnd()
{
	gold_minus->stop();
}
void money_ani::gold_plusfuncEnd()
{
	gold_plus->stop();
}
void money_ani::cash_plusfuncEnd()
{
	cash_plus->stop();
}
void money_ani::cash_minusfuncEnd()
{
	cash_minus->stop();
}

