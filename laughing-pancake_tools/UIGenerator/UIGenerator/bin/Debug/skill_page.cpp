/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "skill_page.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

skill_page::skill_page()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("skill_page.json");
	InitPage();
}
skill_page::skill_page(Widget* _root)
{
	root = _root;
	InitPage();
}
void skill_page::InitPage()
{
	skill_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_in");
	skill_in->retain();
	skill_infunc = CCCallFunc::create(this, callfunc_selector(skill_page::skill_infuncEnd));
	skill_infunc->retain();
	skill_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_out");
	skill_out->retain();
	skill_outfunc = CCCallFunc::create(this, callfunc_selector(skill_page::skill_outfuncEnd));
	skill_outfunc->retain();
	skill_1 = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_1");
	skill_1->retain();
	skill_1func = CCCallFunc::create(this, callfunc_selector(skill_page::skill_1funcEnd));
	skill_1func->retain();
	skill_2 = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_2");
	skill_2->retain();
	skill_2func = CCCallFunc::create(this, callfunc_selector(skill_page::skill_2funcEnd));
	skill_2func->retain();
	skill_3 = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_3");
	skill_3->retain();
	skill_3func = CCCallFunc::create(this, callfunc_selector(skill_page::skill_3funcEnd));
	skill_3func->retain();
	skill_4 = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_4");
	skill_4->retain();
	skill_4func = CCCallFunc::create(this, callfunc_selector(skill_page::skill_4funcEnd));
	skill_4func->retain();
	skill_5 = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_5");
	skill_5->retain();
	skill_5func = CCCallFunc::create(this, callfunc_selector(skill_page::skill_5funcEnd));
	skill_5func->retain();
	skill_6 = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_6");
	skill_6->retain();
	skill_6func = CCCallFunc::create(this, callfunc_selector(skill_page::skill_6funcEnd));
	skill_6func->retain();
	skill_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("skill_page.json", "skill_idle");
	skill_idle->retain();
	skill_idlefunc = CCCallFunc::create(this, callfunc_selector(skill_page::skill_idlefuncEnd));
	skill_idlefunc->retain();
	black_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("681"));
	black_back->retain();
	skill_box= static_cast<Layout *>(root->getChildByTag("33249"));
	skill_box->retain();
		{
		star_icon_0_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0_0"));
		star_icon_0_0->retain();
		skill_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_back"));
		skill_back->retain();
		skill_title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_title_text"));
		skill_title_text->retain();
		xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("xbutton"));
		xbutton->retain();
		buy_button_star= static_cast<cocos2d::ui::Button* >(root->getChildByName("buy_button_star"));
		buy_button_star->retain();
		skill_name_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_name_text"));
		skill_name_text->retain();
		skill_info_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_info_text"));
		skill_info_text->retain();
		star_text_have= static_cast<cocos2d::ui::Text *>(root->getChildByName("star_text_have"));
		star_text_have->retain();
		Image_71= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_71"));
		Image_71->retain();
		star_icon_0_2_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0_2_0"));
		star_icon_0_2_0->retain();
			{
			star_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0"));
			star_icon_0->retain();
			}
		star_icon_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0"));
		star_icon_0->retain();
		star_text_buy= static_cast<cocos2d::ui::Text *>(root->getChildByName("star_text_buy"));
		star_text_buy->retain();
		skill_1= static_cast<Layout *>(root->getChildByName("skill_1"));
		skill_1->retain();
			{
			icon_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("icon_img"));
			icon_img->retain();
			skill_select= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_select"));
			skill_select->retain();
			skill_icon_level= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_icon_level"));
			skill_icon_level->retain();
			skill_level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_level_text"));
			skill_level_text->retain();
			skill_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_lock"));
			skill_lock->retain();
			}
		skill_2= static_cast<Layout *>(root->getChildByName("skill_2"));
		skill_2->retain();
			{
			icon_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("icon_img"));
			icon_img->retain();
			skill_select= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_select"));
			skill_select->retain();
			skill_icon_level= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_icon_level"));
			skill_icon_level->retain();
			skill_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_lock"));
			skill_lock->retain();
			skill_level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_level_text"));
			skill_level_text->retain();
			}
		skill_3= static_cast<Layout *>(root->getChildByName("skill_3"));
		skill_3->retain();
			{
			icon_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("icon_img"));
			icon_img->retain();
			skill_select= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_select"));
			skill_select->retain();
			skill_icon_level= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_icon_level"));
			skill_icon_level->retain();
			skill_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_lock"));
			skill_lock->retain();
			skill_level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_level_text"));
			skill_level_text->retain();
			}
		skill_4= static_cast<Layout *>(root->getChildByName("skill_4"));
		skill_4->retain();
			{
			icon_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("icon_img"));
			icon_img->retain();
			skill_select= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_select"));
			skill_select->retain();
			skill_icon_level= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_icon_level"));
			skill_icon_level->retain();
			skill_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_lock"));
			skill_lock->retain();
			skill_level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_level_text"));
			skill_level_text->retain();
			}
		skill_5= static_cast<Layout *>(root->getChildByName("skill_5"));
		skill_5->retain();
			{
			icon_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("icon_img"));
			icon_img->retain();
			skill_select= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_select"));
			skill_select->retain();
			skill_icon_level= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_icon_level"));
			skill_icon_level->retain();
			skill_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_lock"));
			skill_lock->retain();
			skill_level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_level_text"));
			skill_level_text->retain();
			}
		skill_6= static_cast<Layout *>(root->getChildByName("skill_6"));
		skill_6->retain();
			{
			icon_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("icon_img"));
			icon_img->retain();
			skill_select= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_select"));
			skill_select->retain();
			skill_icon_level= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_icon_level"));
			skill_icon_level->retain();
			skill_lock= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("skill_lock"));
			skill_lock->retain();
			skill_level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("skill_level_text"));
			skill_level_text->retain();
			}
		star_icon_0_1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0_1"));
		star_icon_0_1->retain();
		star_icon_0_1_2= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0_1_2"));
		star_icon_0_1_2->retain();
		star_icon_0_1_3= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("star_icon_0_1_3"));
		star_icon_0_1_3->retain();
		}
}
void skill_page::skill_infuncEnd()
{
	skill_in->stop();
}
void skill_page::skill_outfuncEnd()
{
	skill_out->stop();
}
void skill_page::skill_1funcEnd()
{
	skill_1->stop();
}
void skill_page::skill_2funcEnd()
{
	skill_2->stop();
}
void skill_page::skill_3funcEnd()
{
	skill_3->stop();
}
void skill_page::skill_4funcEnd()
{
	skill_4->stop();
}
void skill_page::skill_5funcEnd()
{
	skill_5->stop();
}
void skill_page::skill_6funcEnd()
{
	skill_6->stop();
}
void skill_page::skill_idlefuncEnd()
{
	skill_idle->stop();
}

