/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "chr_up.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

chr_up::chr_up()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("chr_up.json");
	InitPage();
}
chr_up::chr_up(Widget* _root)
{
	root = _root;
	InitPage();
}
void chr_up::InitPage()
{
	chr_up_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("chr_up.json", "chr_up_in");
	chr_up_in->retain();
	chr_up_infunc = CCCallFunc::create(this, callfunc_selector(chr_up::chr_up_infuncEnd));
	chr_up_infunc->retain();
	chr_up_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("chr_up.json", "chr_up_idle");
	chr_up_idle->retain();
	chr_up_idlefunc = CCCallFunc::create(this, callfunc_selector(chr_up::chr_up_idlefuncEnd));
	chr_up_idlefunc->retain();
	back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("59678"));
	back->retain();
	ground= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("59679"));
	ground->retain();
	chr_old= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("59680"));
	chr_old->retain();
	ground2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60311"));
	ground2->retain();
	chr_new= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60309"));
	chr_new->retain();
	fx_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("59681"));
	fx_1->retain();
	fx_2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("59683"));
	fx_2->retain();
	button_panel= static_cast<Layout *>(root->getChildByTag("60320"));
	button_panel->retain();
		{
		chr_info_box2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_info_box2"));
		chr_info_box2->retain();
		chr_info_box1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("chr_info_box1"));
		chr_info_box1->retain();
		chr_skill_text1= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text1"));
		chr_skill_text1->retain();
		chr_skill_text2= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text2"));
		chr_skill_text2->retain();
		chr_skill_text3= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text3"));
		chr_skill_text3->retain();
		ok_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("ok_button"));
		ok_button->retain();
		text1= static_cast<cocos2d::ui::Text *>(root->getChildByName("text1"));
		text1->retain();
		text2= static_cast<cocos2d::ui::Text *>(root->getChildByName("text2"));
		text2->retain();
		chr_skill_text1_u= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text1_u"));
		chr_skill_text1_u->retain();
		chr_skill_text2_u= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text2_u"));
		chr_skill_text2_u->retain();
		chr_skill_text3_u= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_skill_text3_u"));
		chr_skill_text3_u->retain();
		}
	1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60323"));
	1->retain();
	2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60324"));
	2->retain();
	3= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60325"));
	3->retain();
	4= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("60326"));
	4->retain();
}
void chr_up::chr_up_infuncEnd()
{
	chr_up_in->stop();
}
void chr_up::chr_up_idlefuncEnd()
{
	chr_up_idle->stop();
}

