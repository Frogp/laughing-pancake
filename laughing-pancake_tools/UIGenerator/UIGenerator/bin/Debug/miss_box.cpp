/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "miss_box.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

miss_box::miss_box()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("miss_box.json");
	InitPage();
}
miss_box::miss_box(Widget* _root)
{
	root = _root;
	InitPage();
}
void miss_box::InitPage()
{
	miss_box_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("miss_box.json", "miss_box_ani");
	miss_box_ani->retain();
	miss_box_anifunc = CCCallFunc::create(this, callfunc_selector(miss_box::miss_box_anifuncEnd));
	miss_box_anifunc->retain();
	miss_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("72"));
	miss_back->retain();
	miss_box_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76777"));
	miss_box_text->retain();
	miss_back_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("7109"));
	miss_back_0->retain();
	miss_box_text_up= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76775"));
	miss_box_text_up->retain();
}
void miss_box::miss_box_anifuncEnd()
{
	miss_box_ani->stop();
}

