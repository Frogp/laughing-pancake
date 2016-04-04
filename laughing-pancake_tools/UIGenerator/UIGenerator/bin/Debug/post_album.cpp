/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "post_album.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

post_album::post_album()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("post_album.json");
	InitPage();
}
post_album::post_album(Widget* _root)
{
	root = _root;
	InitPage();
}
void post_album::InitPage()
{
	album_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("post_album.json", "album_in");
	album_in->retain();
	album_infunc = CCCallFunc::create(this, callfunc_selector(post_album::album_infuncEnd));
	album_infunc->retain();
	album_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("post_album.json", "album_out");
	album_out->retain();
	album_outfunc = CCCallFunc::create(this, callfunc_selector(post_album::album_outfuncEnd));
	album_outfunc->retain();
	album_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("post_album.json", "album_idle");
	album_idle->retain();
	album_idlefunc = CCCallFunc::create(this, callfunc_selector(post_album::album_idlefuncEnd));
	album_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("31943"));
	black_box->retain();
	post_album= static_cast<Layout *>(root->getChildByTag("31944"));
	post_album->retain();
		{
		album_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_back"));
		album_back->retain();
		album_text_title= static_cast<cocos2d::ui::Text *>(root->getChildByName("album_text_title"));
		album_text_title->retain();
		gold_icon= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gold_icon"));
		gold_icon->retain();
		gam_text_font= static_cast<cocos2d::ui::Text *>(root->getChildByName("gam_text_font"));
		gam_text_font->retain();
		album_next_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("album_next_button"));
		album_next_button->retain();
		album_next_button2= static_cast<cocos2d::ui::Button* >(root->getChildByName("album_next_button2"));
		album_next_button2->retain();
		page_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("page_text"));
		page_text->retain();
		post_page= static_cast<cocos2d::ui::PageView *>(root->getChildByName("post_page"));
		post_page->retain();
			{
			post_box= static_cast<Layout *>(root->getChildByName("post_box"));
			post_box->retain();
				{
				p_0_0_0= static_cast<Layout *>(root->getChildByName("p_0_0_0"));
				p_0_0_0->retain();
					{
					album_post_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_back"));
					album_post_back->retain();
					post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
					post_img->retain();
					}
				p_0_1_0= static_cast<Layout *>(root->getChildByName("p_0_1_0"));
				p_0_1_0->retain();
					{
					album_post_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_back"));
					album_post_back->retain();
					post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
					post_img->retain();
					}
				p_1_0_0= static_cast<Layout *>(root->getChildByName("p_1_0_0"));
				p_1_0_0->retain();
					{
					album_post_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_back"));
					album_post_back->retain();
					post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
					post_img->retain();
					}
				p_1_1_0= static_cast<Layout *>(root->getChildByName("p_1_1_0"));
				p_1_1_0->retain();
					{
					album_post_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_back"));
					album_post_back->retain();
					post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
					post_img->retain();
					}
				p_0_2_0= static_cast<Layout *>(root->getChildByName("p_0_2_0"));
				p_0_2_0->retain();
					{
					album_post_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_back"));
					album_post_back->retain();
					post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
					post_img->retain();
					}
				p_1_2_0= static_cast<Layout *>(root->getChildByName("p_1_2_0"));
				p_1_2_0->retain();
					{
					album_post_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_back"));
					album_post_back->retain();
					post_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_img"));
					post_img->retain();
					}
				post_collection= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_collection"));
				post_collection->retain();
				album_post_outline= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("album_post_outline"));
				album_post_outline->retain();
				}
			}
		xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("xbutton"));
		xbutton->retain();
		collection_ok= static_cast<cocos2d::ui::Button* >(root->getChildByName("collection_ok"));
		collection_ok->retain();
		post_info= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_info"));
		post_info->retain();
		cash_in_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("cash_in_box"));
		cash_in_box->retain();
		chr_reward_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("chr_reward_text"));
		chr_reward_text->retain();
		upgrade_button= static_cast<cocos2d::ui::Button* >(root->getChildByName("upgrade_button"));
		upgrade_button->retain();
		post_name= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_name"));
		post_name->retain();
		post_reward_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_reward_text"));
		post_reward_text->retain();
		}
}
void post_album::album_infuncEnd()
{
	album_in->stop();
}
void post_album::album_outfuncEnd()
{
	album_out->stop();
}
void post_album::album_idlefuncEnd()
{
	album_idle->stop();
}

