/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "time_bar.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

time_bar::time_bar()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("time_bar.json");
	InitPage();
}
time_bar::time_bar(Widget* _root)
{
	root = _root;
	InitPage();
}
void time_bar::InitPage()
{
	post_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("time_bar.json", "post_idle");
	post_idle->retain();
	post_idlefunc = CCCallFunc::create(this, callfunc_selector(time_bar::post_idlefuncEnd));
	post_idlefunc->retain();
	post_up = cocostudio::ActionManagerEx::getInstance()->getActionByName("time_bar.json", "post_up");
	post_up->retain();
	post_upfunc = CCCallFunc::create(this, callfunc_selector(time_bar::post_upfuncEnd));
	post_upfunc->retain();
	angry_bar_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("18554"));
	angry_bar_back->retain();
	angry_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByTag("70"));
	angry_bar->retain();
	time_bar_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("36208"));
	time_bar_back->retain();
	time_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByTag("36209"));
	time_bar->retain();
	gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("53759"));
	gold_icon->retain();
	gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76767"));
	gold_text->retain();
	black_bar= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("68997"));
	black_bar->retain();
	score_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76771"));
	score_text->retain();
	score_text_back= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76774"));
	score_text_back->retain();
	bar_black= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("68999"));
	bar_black->retain();
	chr_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("69000"));
	chr_img->retain();
	chr_name_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("69001"));
	chr_name_text->retain();
	star_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76769"));
	star_text->retain();
	star_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("69002"));
	star_icon->retain();
	post_box_icon= static_cast<Layout *>(root->getChildByTag("69007"));
	post_box_icon->retain();
		{
		1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("1"));
		1->retain();
		2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("2"));
		2->retain();
		}
	post_bar_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("69008"));
	post_bar_back->retain();
	post_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByTag("69009"));
	post_bar->retain();
	post_box_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76765"));
	post_box_text->retain();
	Image_27= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("70364"));
	Image_27->retain();
	item1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("72477"));
	item1->retain();
	item2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("72479"));
	item2->retain();
	item3= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("72481"));
	item3->retain();
}
void time_bar::post_idlefuncEnd()
{
	post_idle->stop();
}
void time_bar::post_upfuncEnd()
{
	post_up->stop();
}

