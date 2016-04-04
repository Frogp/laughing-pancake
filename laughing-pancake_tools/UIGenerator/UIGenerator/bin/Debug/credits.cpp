/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "credits.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

credits::credits()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("credits.json");
	InitPage();
}
credits::credits(Widget* _root)
{
	root = _root;
	InitPage();
}
void credits::InitPage()
{
	credits_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("credits.json", "credits_ani");
	credits_ani->retain();
	credits_anifunc = CCCallFunc::create(this, callfunc_selector(credits::credits_anifuncEnd));
	credits_anifunc->retain();
	black_box= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("54841"));
	black_box->retain();
	Panel_25= static_cast<Layout *>(root->getChildByTag("54865"));
	Panel_25->retain();
		{
		title= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("title"));
		title->retain();
		Image_30= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_30"));
		Image_30->retain();
		1= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("1"));
		1->retain();
		2= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("2"));
		2->retain();
		3= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("3"));
		3->retain();
		4= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("4"));
		4->retain();
		5= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("5"));
		5->retain();
		6= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("6"));
		6->retain();
		7= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("7"));
		7->retain();
		7_8= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("7_8"));
		7_8->retain();
		6_7= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("6_7"));
		6_7->retain();
		8= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("8"));
		8->retain();
		9= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("9"));
		9->retain();
		10= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("10"));
		10->retain();
		11= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("11"));
		11->retain();
		12= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("12"));
		12->retain();
		13= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("13"));
		13->retain();
		15= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("15"));
		15->retain();
		16= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("16"));
		16->retain();
		17= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("17"));
		17->retain();
		18= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("18"));
		18->retain();
		19= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("19"));
		19->retain();
		17_11= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("17_11"));
		17_11->retain();
		15_9= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("15_9"));
		15_9->retain();
		13_9= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("13_9"));
		13_9->retain();
		Label_51= static_cast<cocos2d::ui::Text *>(root->getChildByName("Label_51"));
		Label_51->retain();
		19_0= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("19_0"));
		19_0->retain();
		}
}
void credits::credits_anifuncEnd()
{
	credits_ani->stop();
}

