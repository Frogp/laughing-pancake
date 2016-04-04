/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "loading_2.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

loading_2::loading_2()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("loading_2.json");
	InitPage();
}
loading_2::loading_2(Widget* _root)
{
	root = _root;
	InitPage();
}
void loading_2::InitPage()
{
	loading_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("loading_2.json", "loading_idle");
	loading_idle->retain();
	loading_idlefunc = CCCallFunc::create(this, callfunc_selector(loading_2::loading_idlefuncEnd));
	loading_idlefunc->retain();
	black_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9289"));
	black_back->retain();
	bike_body= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9290"));
	bike_body->retain();
	w_f= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9291"));
	w_f->retain();
	w_r= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9292"));
	w_r->retain();
}
void loading_2::loading_idlefuncEnd()
{
	loading_idle->stop();
}

