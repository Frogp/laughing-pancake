/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "result.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

result::result()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("result.json");
	InitPage();
}
result::result(Widget* _root)
{
	root = _root;
	InitPage();
}
void result::InitPage()
{
	result_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("result.json", "result_in");
	result_in->retain();
	result_infunc = CCCallFunc::create(this, callfunc_selector(result::result_infuncEnd));
	result_infunc->retain();
	result_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("result.json", "result_out");
	result_out->retain();
	result_outfunc = CCCallFunc::create(this, callfunc_selector(result::result_outfuncEnd));
	result_outfunc->retain();
	result_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("result.json", "result_idle");
	result_idle->retain();
	result_idlefunc = CCCallFunc::create(this, callfunc_selector(result::result_idlefuncEnd));
	result_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("88"));
	black_box->retain();
	result_box= static_cast<Layout *>(root->getChildByTag("57349"));
	result_box->retain();
		{
		score= static_cast<cocos2d::ui::Text *>(root->getChildByName("score"));
		score->retain();
		score_back= static_cast<cocos2d::ui::Text *>(root->getChildByName("score_back"));
		score_back->retain();
		okback_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("okback_button"));
		okback_button->retain();
		star_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("star_text"));
		star_text->retain();
		level_box= static_cast<Layout *>(root->getChildByName("level_box"));
		level_box->retain();
			{
			exp_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("exp_back"));
			exp_back->retain();
			exp_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("exp_bar"));
			exp_bar->retain();
			level_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("level_text"));
			level_text->retain();
			level_icon1= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("level_icon1"));
			level_icon1->retain();
			exp_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("exp_text"));
			exp_text->retain();
			exp_text_back= static_cast<cocos2d::ui::Text *>(root->getChildByName("exp_text_back"));
			exp_text_back->retain();
			}
		gold_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("gold_text"));
		gold_text->retain();
		best_score= static_cast<cocos2d::ui::Text *>(root->getChildByName("best_score"));
		best_score->retain();
		best_score_back= static_cast<cocos2d::ui::Text *>(root->getChildByName("best_score_back"));
		best_score_back->retain();
		bonus_score= static_cast<cocos2d::ui::Text *>(root->getChildByName("bonus_score"));
		bonus_score->retain();
		bonus_score_back= static_cast<cocos2d::ui::Text *>(root->getChildByName("bonus_score_back"));
		bonus_score_back->retain();
		result_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("result_text"));
		result_text->retain();
		shere_buton= static_cast<cocos2d::ui::Button* >(root->getChildByName("shere_buton"));
		shere_buton->retain();
		Image_71= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_71"));
		Image_71->retain();
			{
			Image_74= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_74"));
			Image_74->retain();
			}
		Image_71_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_71_0"));
		Image_71_0->retain();
			{
			Image_75= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_75"));
			Image_75->retain();
			}
		result_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("result_back"));
		result_back->retain();
		best_score_box= static_cast<Layout *>(root->getChildByName("best_score_box"));
		best_score_box->retain();
			{
			fx_light= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("fx_light"));
			fx_light->retain();
			fx_light_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("fx_light_0"));
			fx_light_0->retain();
			best_score_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("best_score_img"));
			best_score_img->retain();
			}
		}
}
void result::result_infuncEnd()
{
	result_in->stop();
}
void result::result_outfuncEnd()
{
	result_out->stop();
}
void result::result_idlefuncEnd()
{
	result_idle->stop();
}

