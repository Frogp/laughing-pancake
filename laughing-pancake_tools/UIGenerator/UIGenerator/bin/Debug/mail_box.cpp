/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "mail_box.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

mail_box::mail_box()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("mail_box.json");
	InitPage();
}
mail_box::mail_box(Widget* _root)
{
	root = _root;
	InitPage();
}
void mail_box::InitPage()
{
	mailbox_in = cocostudio::ActionManagerEx::getInstance()->getActionByName("mail_box.json", "mailbox_in");
	mailbox_in->retain();
	mailbox_infunc = CCCallFunc::create(this, callfunc_selector(mail_box::mailbox_infuncEnd));
	mailbox_infunc->retain();
	mailbox_out = cocostudio::ActionManagerEx::getInstance()->getActionByName("mail_box.json", "mailbox_out");
	mailbox_out->retain();
	mailbox_outfunc = CCCallFunc::create(this, callfunc_selector(mail_box::mailbox_outfuncEnd));
	mailbox_outfunc->retain();
	mailbox_idle = cocostudio::ActionManagerEx::getInstance()->getActionByName("mail_box.json", "mailbox_idle");
	mailbox_idle->retain();
	mailbox_idlefunc = CCCallFunc::create(this, callfunc_selector(mail_box::mailbox_idlefuncEnd));
	mailbox_idlefunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("33236"));
	black_box->retain();
	mail_box= static_cast<Layout *>(root->getChildByTag("33237"));
	mail_box->retain();
		{
		mailbox_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("mailbox_back"));
		mailbox_back->retain();
		mailbox_title_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("mailbox_title_text"));
		mailbox_title_text->retain();
		alldel= static_cast<cocos2d::ui::Button* >(root->getChildByName("alldel"));
		alldel->retain();
		xbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("xbutton"));
		xbutton->retain();
		mailbox_list_scroll= static_cast<>(root->getChildByName("mailbox_list_scroll"));
		mailbox_list_scroll->retain();
			{
			mailbox_list= static_cast<Layout *>(root->getChildByName("mailbox_list"));
			mailbox_list->retain();
				{
				mail_check= static_cast<CheckBox *>(root->getChildByName("mail_check"));
				mail_check->retain();
				pro_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("pro_box"));
				pro_box->retain();
				mail_okbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("mail_okbutton"));
				mail_okbutton->retain();
				mail_list_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("mail_list_text"));
				mail_list_text->retain();
				}
			mailbox_list_0= static_cast<Layout *>(root->getChildByName("mailbox_list_0"));
			mailbox_list_0->retain();
				{
				mail_check= static_cast<CheckBox *>(root->getChildByName("mail_check"));
				mail_check->retain();
				pro_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("pro_box"));
				pro_box->retain();
				mail_okbutton= static_cast<cocos2d::ui::Button* >(root->getChildByName("mail_okbutton"));
				mail_okbutton->retain();
				mail_list_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("mail_list_text"));
				mail_list_text->retain();
				}
			}
		}
}
void mail_box::mailbox_infuncEnd()
{
	mailbox_in->stop();
}
void mail_box::mailbox_outfuncEnd()
{
	mailbox_out->stop();
}
void mail_box::mailbox_idlefuncEnd()
{
	mailbox_idle->stop();
}

