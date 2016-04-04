/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "tuto.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

tuto::tuto()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("tuto.json");
	InitPage();
}
tuto::tuto(Widget* _root)
{
	root = _root;
	InitPage();
}
void tuto::InitPage()
{
	Image_25= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("73348"));
	Image_25->retain();
	tuto_1= static_cast<Layout *>(root->getChildByTag("73349"));
	tuto_1->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		}
	tuto_2= static_cast<Layout *>(root->getChildByTag("73369"));
	tuto_2->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_3= static_cast<Layout *>(root->getChildByTag("73385"));
	tuto_3->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_4= static_cast<Layout *>(root->getChildByTag("73417"));
	tuto_4->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_5= static_cast<Layout *>(root->getChildByTag("73432"));
	tuto_5->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		}
	tuto_6= static_cast<Layout *>(root->getChildByTag("73438"));
	tuto_6->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_118= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_118"));
		Image_118->retain();
		}
	tuto_7= static_cast<Layout *>(root->getChildByTag("73446"));
	tuto_7->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_118= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_118"));
		Image_118->retain();
		}
	tuto_8= static_cast<Layout *>(root->getChildByTag("73454"));
	tuto_8->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_9= static_cast<Layout *>(root->getChildByTag("73462"));
	tuto_9->retain();
		{
		tuto_jebe_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0"));
		tuto_jebe_0->retain();
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_10= static_cast<Layout *>(root->getChildByTag("73470"));
	tuto_10->retain();
		{
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_11= static_cast<Layout *>(root->getChildByTag("73477"));
	tuto_11->retain();
		{
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_12= static_cast<Layout *>(root->getChildByTag("73483"));
	tuto_12->retain();
		{
		tuto_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text"));
		tuto_text->retain();
		jebe_name_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("jebe_name_text"));
		jebe_name_text->retain();
		tuto_back_01= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_back_01"));
		tuto_back_01->retain();
		tuto_jebe_0_0= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("tuto_jebe_0_0"));
		tuto_jebe_0_0->retain();
		}
	tuto_13= static_cast<Layout *>(root->getChildByTag("74163"));
	tuto_13->retain();
		{
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_14= static_cast<Layout *>(root->getChildByTag("74169"));
	tuto_14->retain();
		{
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
	tuto_15= static_cast<Layout *>(root->getChildByTag("74837"));
	tuto_15->retain();
		{
		tuto_text_4= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_4"));
		tuto_text_4->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		tuto_text_0_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0_0"));
		tuto_text_0_0->retain();
		}
	tuto_16= static_cast<Layout *>(root->getChildByTag("74845"));
	tuto_16->retain();
		{
		tuto_text_0= static_cast<cocos2d::ui::Text *>(root->getChildByName("tuto_text_0"));
		tuto_text_0->retain();
		Image_49= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_49"));
		Image_49->retain();
		}
}

