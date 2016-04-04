/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "ranking_up.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

ranking_up::ranking_up()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("ranking_up.json");
	InitPage();
}
ranking_up::ranking_up(Widget* _root)
{
	root = _root;
	InitPage();
}
void ranking_up::InitPage()
{
	rankin_up = cocostudio::ActionManagerEx::getInstance()->getActionByName("ranking_up.json", "rankin_up");
	rankin_up->retain();
	rankin_upfunc = CCCallFunc::create(this, callfunc_selector(ranking_up::rankin_upfuncEnd));
	rankin_upfunc->retain();
	rankin_up_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("ranking_up.json", "rankin_up_in");
	rankin_up_in->retain();
	rankin_up_infunc = CCCallFunc::create(this, callfunc_selector(ranking_up::rankin_up_infuncEnd));
	rankin_up_infunc->retain();
	rankin_up_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("ranking_up.json", "rankin_up_idle");
	rankin_up_idle->retain();
	rankin_up_idlefunc = CCCallFunc::create(this, callfunc_selector(ranking_up::rankin_up_idlefuncEnd));
	rankin_up_idlefunc->retain();
	rankin_up_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("ranking_up.json", "rankin_up_out");
	rankin_up_out->retain();
	rankin_up_outfunc = CCCallFunc::create(this, callfunc_selector(ranking_up::rankin_up_outfuncEnd));
	rankin_up_outfunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51851"));
	black_box->retain();
	reward_ok= static_cast<cocos2d::ui::Button* >(root->getChildByTag("51853"));
	reward_ok->retain();
	shere_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("51886"));
	shere_button->retain();
	fx_light2= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51857"));
	fx_light2->retain();
	fx_light1= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51859"));
	fx_light1->retain();
	rankin_me= static_cast<Layout *>(root->getChildByTag("51868"));
	rankin_me->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		box_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_up"));
		box_up->retain();
		user_rank_num= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("user_rank_num"));
		user_rank_num->retain();
		score= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("score"));
		score->retain();
		user_name= static_cast<cocos2d::ui::Text *>(root->getChildByName("user_name"));
		user_name->retain();
		pro_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("pro_img"));
		pro_img->retain();
		}
	rankin_friend= static_cast<Layout *>(root->getChildByTag("51877"));
	rankin_friend->retain();
		{
		box_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_back"));
		box_back->retain();
		box_up= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("box_up"));
		box_up->retain();
		user_rank_num= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("user_rank_num"));
		user_rank_num->retain();
		score= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("score"));
		score->retain();
		user_name= static_cast<cocos2d::ui::Text *>(root->getChildByName("user_name"));
		user_name->retain();
		pro_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("pro_img"));
		pro_img->retain();
		}
	ranking_up_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51885"));
	ranking_up_img->retain();
	down_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51887"));
	down_img->retain();
	up_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51889"));
	up_img->retain();
}
void ranking_up::rankin_upfuncEnd()
{
	rankin_up->stop();
}
void ranking_up::rankin_up_infuncEnd()
{
	rankin_up_in->stop();
}
void ranking_up::rankin_up_idlefuncEnd()
{
	rankin_up_idle->stop();
}
void ranking_up::rankin_up_outfuncEnd()
{
	rankin_up_out->stop();
}

