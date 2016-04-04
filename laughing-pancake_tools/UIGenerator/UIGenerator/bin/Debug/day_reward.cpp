/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "day_reward.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

day_reward::day_reward()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("day_reward.json");
	InitPage();
}
day_reward::day_reward(Widget* _root)
{
	root = _root;
	InitPage();
}
void day_reward::InitPage()
{
	day_1 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_1");
	day_1->retain();
	day_1func = CCCallFunc::create(this, callfunc_selector(day_reward::day_1funcEnd));
	day_1func->retain();
	day_2 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_2");
	day_2->retain();
	day_2func = CCCallFunc::create(this, callfunc_selector(day_reward::day_2funcEnd));
	day_2func->retain();
	day_3 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_3");
	day_3->retain();
	day_3func = CCCallFunc::create(this, callfunc_selector(day_reward::day_3funcEnd));
	day_3func->retain();
	day_4 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_4");
	day_4->retain();
	day_4func = CCCallFunc::create(this, callfunc_selector(day_reward::day_4funcEnd));
	day_4func->retain();
	day_5 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_5");
	day_5->retain();
	day_5func = CCCallFunc::create(this, callfunc_selector(day_reward::day_5funcEnd));
	day_5func->retain();
	day_6 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_6");
	day_6->retain();
	day_6func = CCCallFunc::create(this, callfunc_selector(day_reward::day_6funcEnd));
	day_6func->retain();
	day_7 = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_7");
	day_7->retain();
	day_7func = CCCallFunc::create(this, callfunc_selector(day_reward::day_7funcEnd));
	day_7func->retain();
	day_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_in");
	day_in->retain();
	day_infunc = CCCallFunc::create(this, callfunc_selector(day_reward::day_infuncEnd));
	day_infunc->retain();
	day_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_out");
	day_out->retain();
	day_outfunc = CCCallFunc::create(this, callfunc_selector(day_reward::day_outfuncEnd));
	day_outfunc->retain();
	day_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("day_reward.json", "day_idle");
	day_idle->retain();
	day_idlefunc = CCCallFunc::create(this, callfunc_selector(day_reward::day_idlefuncEnd));
	day_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("51483"));
	black_box->retain();
	week_box= static_cast<Layout *>(root->getChildByTag("51803"));
	week_box->retain();
		{
		week_reward_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("week_reward_back"));
		week_reward_back->retain();
		reward_ok= static_cast<cocos2d::ui::Button* >(root->getChildByName("reward_ok"));
		reward_ok->retain();
		date_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("date_text"));
		date_text->retain();
		week_reward_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("week_reward_text"));
		week_reward_text->retain();
		day_1= static_cast<Layout *>(root->getChildByName("day_1"));
		day_1->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		day_2= static_cast<Layout *>(root->getChildByName("day_2"));
		day_2->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		day_3= static_cast<Layout *>(root->getChildByName("day_3"));
		day_3->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		day_4= static_cast<Layout *>(root->getChildByName("day_4"));
		day_4->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		day_5= static_cast<Layout *>(root->getChildByName("day_5"));
		day_5->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		day_6= static_cast<Layout *>(root->getChildByName("day_6"));
		day_6->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		day_7= static_cast<Layout *>(root->getChildByName("day_7"));
		day_7->retain();
			{
			back2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("back2"));
			back2->retain();
			gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
			gold_icon->retain();
			gold_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gold_text"));
			gold_text->retain();
			day_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("day_text"));
			day_text->retain();
			}
		mark1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark1"));
		mark1->retain();
		mark2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark2"));
		mark2->retain();
		mark3= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark3"));
		mark3->retain();
		mark4= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark4"));
		mark4->retain();
		mark5= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark5"));
		mark5->retain();
		mark6= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark6"));
		mark6->retain();
		mark7= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mark7"));
		mark7->retain();
		}
}
void day_reward::day_1funcEnd()
{
	day_1->stop();
}
void day_reward::day_2funcEnd()
{
	day_2->stop();
}
void day_reward::day_3funcEnd()
{
	day_3->stop();
}
void day_reward::day_4funcEnd()
{
	day_4->stop();
}
void day_reward::day_5funcEnd()
{
	day_5->stop();
}
void day_reward::day_6funcEnd()
{
	day_6->stop();
}
void day_reward::day_7funcEnd()
{
	day_7->stop();
}
void day_reward::day_infuncEnd()
{
	day_in->stop();
}
void day_reward::day_outfuncEnd()
{
	day_out->stop();
}
void day_reward::day_idlefuncEnd()
{
	day_idle->stop();
}

