/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "mail_boost.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

mail_boost::mail_boost()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("mail_boost.json");
	InitPage();
}
mail_boost::mail_boost(Widget* _root)
{
	root = _root;
	InitPage();
}
void mail_boost::InitPage()
{
	boost_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("mail_boost.json", "boost_in");
	boost_in->retain();
	boost_infunc = CCCallFunc::create(this, callfunc_selector(mail_boost::boost_infuncEnd));
	boost_infunc->retain();
	boost_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("mail_boost.json", "boost_idle");
	boost_idle->retain();
	boost_idlefunc = CCCallFunc::create(this, callfunc_selector(mail_boost::boost_idlefuncEnd));
	boost_idlefunc->retain();
	boost_tuch = cocostudio::ActionManagerEx::getInstance()->getActionByName("mail_boost.json", "boost_tuch");
	boost_tuch->retain();
	boost_tuchfunc = CCCallFunc::create(this, callfunc_selector(mail_boost::boost_tuchfuncEnd));
	boost_tuchfunc->retain();
	back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9294"));
	back->retain();
	mail_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9295"));
	mail_back->retain();
	mail_back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9296"));
	mail_back2->retain();
	mail_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9297"));
	mail_up->retain();
	reward_ok= static_cast<cocos2d::ui::Button* >(root->getChildByTag("9298"));
	reward_ok->retain();
	post_bootst_title= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9299"));
	post_bootst_title->retain();
	tuch_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("9300"));
	tuch_text->retain();
	item_1= static_cast<Layout *>(root->getChildByTag("9301"));
	item_1->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		item_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("item_img"));
		item_img->retain();
		new_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("new_text"));
		new_text->retain();
		box_back_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back_0"));
		box_back_0->retain();
		}
	item_2= static_cast<Layout *>(root->getChildByTag("9313"));
	item_2->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		item_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("item_img"));
		item_img->retain();
		new_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("new_text"));
		new_text->retain();
		box_back_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back_0"));
		box_back_0->retain();
		}
	item_3= static_cast<Layout *>(root->getChildByTag("9323"));
	item_3->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		item_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("item_img"));
		item_img->retain();
		new_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("new_text"));
		new_text->retain();
		box_back_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back_0"));
		box_back_0->retain();
		}
	item_4= static_cast<Layout *>(root->getChildByTag("9333"));
	item_4->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		item_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("item_img"));
		item_img->retain();
		new_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("new_text"));
		new_text->retain();
		box_back_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back_0"));
		box_back_0->retain();
		}
	item_5= static_cast<Layout *>(root->getChildByTag("9343"));
	item_5->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		item_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("item_img"));
		item_img->retain();
		new_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("new_text"));
		new_text->retain();
		box_back_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back_0"));
		box_back_0->retain();
		}
}
void mail_boost::boost_infuncEnd()
{
	boost_in->stop();
}
void mail_boost::boost_idlefuncEnd()
{
	boost_idle->stop();
}
void mail_boost::boost_tuchfuncEnd()
{
	boost_tuch->stop();
}

