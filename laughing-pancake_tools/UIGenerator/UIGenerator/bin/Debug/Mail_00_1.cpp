/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "Mail_00_1.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

Mail_00_1::Mail_00_1()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("Mail_00_1.json");
	InitPage();
}
Mail_00_1::Mail_00_1(Widget* _root)
{
	root = _root;
	InitPage();
}
void Mail_00_1::InitPage()
{
	Mail_true = cocostudio::ActionManagerEx::getInstance()->getActionByName("Mail_00_1.json", "Mail_true");
	Mail_true->retain();
	Mail_truefunc = CCCallFunc::create(this, callfunc_selector(Mail_00_1::Mail_truefuncEnd));
	Mail_truefunc->retain();
	Mail_false = cocostudio::ActionManagerEx::getInstance()->getActionByName("Mail_00_1.json", "Mail_false");
	Mail_false->retain();
	Mail_falsefunc = CCCallFunc::create(this, callfunc_selector(Mail_00_1::Mail_falsefuncEnd));
	Mail_falsefunc->retain();
	mail_back= static_cast<Layout *>(root->getChildByTag("5"));
	mail_back->retain();
		{
		mail_back_Image= static_cast<Layout *>(root->getChildByName("mail_back_Image"));
		mail_back_Image->retain();
		to_text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("to_text_01"));
		to_text_01->retain();
		to_text_02= static_cast<cocos2d::ui::Text *>(root->getChildByName("to_text_02"));
		to_text_02->retain();
		from_text_01= static_cast<cocos2d::ui::Text *>(root->getChildByName("from_text_01"));
		from_text_01->retain();
		from_text_02= static_cast<cocos2d::ui::Text *>(root->getChildByName("from_text_02"));
		from_text_02->retain();
		post_zip_1= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_zip_1"));
		post_zip_1->retain();
		post_zip_2= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_zip_2"));
		post_zip_2->retain();
		post_zip_3= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_zip_3"));
		post_zip_3->retain();
		post_zip_4= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_zip_4"));
		post_zip_4->retain();
		post_zip_5= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_zip_5"));
		post_zip_5->retain();
		post_zip_6= static_cast<cocos2d::ui::Text *>(root->getChildByName("post_zip_6"));
		post_zip_6->retain();
		post_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("post_box"));
		post_box->retain();
		poststamp= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("poststamp"));
		poststamp->retain();
		}
}
void Mail_00_1::Mail_truefuncEnd()
{
	Mail_true->stop();
}
void Mail_00_1::Mail_falsefuncEnd()
{
	Mail_false->stop();
}

