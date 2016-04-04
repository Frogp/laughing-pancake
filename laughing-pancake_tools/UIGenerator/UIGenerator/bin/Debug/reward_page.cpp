/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "reward_page.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

reward_page::reward_page()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("reward_page.json");
	InitPage();
}
reward_page::reward_page(Widget* _root)
{
	root = _root;
	InitPage();
}
void reward_page::InitPage()
{
	reward_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_in");
	reward_in->retain();
	reward_infunc = CCCallFunc::create(this, callfunc_selector(reward_page::reward_infuncEnd));
	reward_infunc->retain();
	reward_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_idle");
	reward_idle->retain();
	reward_idlefunc = CCCallFunc::create(this, callfunc_selector(reward_page::reward_idlefuncEnd));
	reward_idlefunc->retain();
	reward_tuch_0_0 = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_tuch_0_0");
	reward_tuch_0_0->retain();
	reward_tuch_0_0func = CCCallFunc::create(this, callfunc_selector(reward_page::reward_tuch_0_0funcEnd));
	reward_tuch_0_0func->retain();
	reward_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_out");
	reward_out->retain();
	reward_outfunc = CCCallFunc::create(this, callfunc_selector(reward_page::reward_outfuncEnd));
	reward_outfunc->retain();
	reward_all = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_all");
	reward_all->retain();
	reward_allfunc = CCCallFunc::create(this, callfunc_selector(reward_page::reward_allfuncEnd));
	reward_allfunc->retain();
	reward_ok_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_ok_in");
	reward_ok_in->retain();
	reward_ok_infunc = CCCallFunc::create(this, callfunc_selector(reward_page::reward_ok_infuncEnd));
	reward_ok_infunc->retain();
	reward_ok_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_ok_idle");
	reward_ok_idle->retain();
	reward_ok_idlefunc = CCCallFunc::create(this, callfunc_selector(reward_page::reward_ok_idlefuncEnd));
	reward_ok_idlefunc->retain();
	reward_tuch_1_0 = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_tuch_1_0");
	reward_tuch_1_0->retain();
	reward_tuch_1_0func = CCCallFunc::create(this, callfunc_selector(reward_page::reward_tuch_1_0funcEnd));
	reward_tuch_1_0func->retain();
	reward_tuch_0_1 = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_tuch_0_1");
	reward_tuch_0_1->retain();
	reward_tuch_0_1func = CCCallFunc::create(this, callfunc_selector(reward_page::reward_tuch_0_1funcEnd));
	reward_tuch_0_1func->retain();
	reward_tuch_1_1 = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_tuch_1_1");
	reward_tuch_1_1->retain();
	reward_tuch_1_1func = CCCallFunc::create(this, callfunc_selector(reward_page::reward_tuch_1_1funcEnd));
	reward_tuch_1_1func->retain();
	reward_tuch_0_2 = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_tuch_0_2");
	reward_tuch_0_2->retain();
	reward_tuch_0_2func = CCCallFunc::create(this, callfunc_selector(reward_page::reward_tuch_0_2funcEnd));
	reward_tuch_0_2func->retain();
	reward_tuch_1_2 = cocostudio::ActionManagerEx::getInstance()->getActionByName("reward_page.json", "reward_tuch_1_2");
	reward_tuch_1_2->retain();
	reward_tuch_1_2func = CCCallFunc::create(this, callfunc_selector(reward_page::reward_tuch_1_2funcEnd));
	reward_tuch_1_2func->retain();
	reward_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("7953"));
	reward_back->retain();
	reward_ok_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("7957"));
	reward_ok_button->retain();
	tuch_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("71259"));
	tuch_text->retain();
	post_box= static_cast<Layout *>(root->getChildByTag("55799"));
	post_box->retain();
		{
		postbox_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("postbox_1"));
		postbox_1->retain();
		postbox_2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("postbox_2"));
		postbox_2->retain();
		}
	post_img1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("34110"));
	post_img1->retain();
	fx_light1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("34107"));
	fx_light1->retain();
	fx_light2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("34109"));
	fx_light2->retain();
	post_box_0= static_cast<Layout *>(root->getChildByTag("48152"));
	post_box_0->retain();
		{
		p_0_0_0= static_cast<Layout *>(root->getChildByName("p_0_0_0"));
		p_0_0_0->retain();
			{
			post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
			post_img->retain();
			}
		p_0_1_0= static_cast<Layout *>(root->getChildByName("p_0_1_0"));
		p_0_1_0->retain();
			{
			post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
			post_img->retain();
			}
		p_1_0_0= static_cast<Layout *>(root->getChildByName("p_1_0_0"));
		p_1_0_0->retain();
			{
			post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
			post_img->retain();
			}
		p_1_1_0= static_cast<Layout *>(root->getChildByName("p_1_1_0"));
		p_1_1_0->retain();
			{
			post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
			post_img->retain();
			}
		p_0_2_0= static_cast<Layout *>(root->getChildByName("p_0_2_0"));
		p_0_2_0->retain();
			{
			post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
			post_img->retain();
			}
		p_1_2_0= static_cast<Layout *>(root->getChildByName("p_1_2_0"));
		p_1_2_0->retain();
			{
			post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
			post_img->retain();
			}
		post_collection= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_collection"));
		post_collection->retain();
		album_post_outline= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_outline"));
		album_post_outline->retain();
		}
	collection_name_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("58323"));
	collection_name_text->retain();
}
void reward_page::reward_infuncEnd()
{
	reward_in->stop();
}
void reward_page::reward_idlefuncEnd()
{
	reward_idle->stop();
}
void reward_page::reward_tuch_0_0funcEnd()
{
	reward_tuch_0_0->stop();
}
void reward_page::reward_outfuncEnd()
{
	reward_out->stop();
}
void reward_page::reward_allfuncEnd()
{
	reward_all->stop();
}
void reward_page::reward_ok_infuncEnd()
{
	reward_ok_in->stop();
}
void reward_page::reward_ok_idlefuncEnd()
{
	reward_ok_idle->stop();
}
void reward_page::reward_tuch_1_0funcEnd()
{
	reward_tuch_1_0->stop();
}
void reward_page::reward_tuch_0_1funcEnd()
{
	reward_tuch_0_1->stop();
}
void reward_page::reward_tuch_1_1funcEnd()
{
	reward_tuch_1_1->stop();
}
void reward_page::reward_tuch_0_2funcEnd()
{
	reward_tuch_0_2->stop();
}
void reward_page::reward_tuch_1_2funcEnd()
{
	reward_tuch_1_2->stop();
}

