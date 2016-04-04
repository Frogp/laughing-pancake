/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "logo_page.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

logo_page::logo_page()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("logo_page.json");
	InitPage();
}
logo_page::logo_page(Widget* _root)
{
	root = _root;
	InitPage();
}
void logo_page::InitPage()
{
	logo_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("logo_page.json", "logo_ani");
	logo_ani->retain();
	logo_anifunc = CCCallFunc::create(this, callfunc_selector(logo_page::logo_anifuncEnd));
	logo_anifunc->retain();
	logo_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("257"));
	logo_back->retain();
	gapu= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("258"));
	gapu->retain();
	text= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("259"));
	text->retain();
}
void logo_page::logo_anifuncEnd()
{
	logo_ani->stop();
}

