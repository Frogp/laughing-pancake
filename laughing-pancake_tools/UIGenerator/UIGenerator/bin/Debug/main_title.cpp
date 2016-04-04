/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "main_title.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

main_title::main_title()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("main_title.json");
	InitPage();
}
main_title::main_title(Widget* _root)
{
	root = _root;
	InitPage();
}
void main_title::InitPage()
{
	title_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("main_title.json", "title_in");
	title_in->retain();
	title_infunc = CCCallFunc::create(this, callfunc_selector(main_title::title_infuncEnd));
	title_infunc->retain();
	title_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("main_title.json", "title_idle");
	title_idle->retain();
	title_idlefunc = CCCallFunc::create(this, callfunc_selector(main_title::title_idlefuncEnd));
	title_idlefunc->retain();
	title_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("260"));
	title_back->retain();
	ver_text= static_cast<cocos2d::ui::Text *>(root->getChildByTag("76899"));
	ver_text->retain();
	title= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("262"));
	title->retain();
	jabe= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("264"));
	jabe->retain();
	bar= static_cast<Layout *>(root->getChildByTag("52882"));
	bar->retain();
		{
		loding_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("loding_text"));
		loding_text->retain();
		loading_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByName("loading_bar"));
		loading_bar->retain();
		loading_bar_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("loading_bar_back"));
		loading_bar_back->retain();
		}
	start_button= static_cast<cocos2d::ui::Button* >(root->getChildByTag("52870"));
	start_button->retain();
	table= static_cast<Layout *>(root->getChildByTag("52880"));
	table->retain();
		{
		Image_34= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_34"));
		Image_34->retain();
		Image_35= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_35"));
		Image_35->retain();
		table_img= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("table_img"));
		table_img->retain();
		}
	gapu= static_cast<Layout *>(root->getChildByTag("52881"));
	gapu->retain();
		{
		gapu_logo= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gapu_logo"));
		gapu_logo->retain();
		copy_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("copy_text"));
		copy_text->retain();
		gapu_title= static_cast<cocos2d::ui::Text *>(root->getChildByName("gapu_title"));
		gapu_title->retain();
		}
	jebe= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("66163"));
	jebe->retain();
	bakck= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("66164"));
	bakck->retain();
	Image_25= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("68073"));
	Image_25->retain();
}
void main_title::title_infuncEnd()
{
	title_in->stop();
}
void main_title::title_idlefuncEnd()
{
	title_idle->stop();
}

