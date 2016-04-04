/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "loding_ui.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

loding_ui::loding_ui()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("loding_ui.json");
	InitPage();
}
loding_ui::loding_ui(Widget* _root)
{
	root = _root;
	InitPage();
}
void loding_ui::InitPage()
{
	loding_ui_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("loding_ui.json", "loding_ui_ani");
	loding_ui_ani->retain();
	loding_ui_anifunc = CCCallFunc::create(this, callfunc_selector(loding_ui::loding_ui_anifuncEnd));
	loding_ui_anifunc->retain();
	loading_nomal= static_cast<Layout *>(root->getChildByTag("30209"));
	loading_nomal->retain();
		{
		black_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("black_back"));
		black_back->retain();
		loding_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("loding_text"));
		loding_text->retain();
		Image_22= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_22"));
		Image_22->retain();
		Image_30= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_30"));
		Image_30->retain();
		gapu_0= static_cast<Layout *>(root->getChildByName("gapu_0"));
		gapu_0->retain();
			{
			gapu_logo= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("gapu_logo"));
			gapu_logo->retain();
			gapu_title= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByName("gapu_title"));
			gapu_title->retain();
			copy_text= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("copy_text"));
			copy_text->retain();
			}
		Image_3= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_3"));
		Image_3->retain();
		Label_23= static_cast<cocos2d::ui::Text *>(root->getChildByName("Label_23"));
		Label_23->retain();
		tip_text= static_cast<cocos2d::ui::Text *>(root->getChildByName("tip_text"));
		tip_text->retain();
		Image_25= static_cast<cocos2d::ui::ImageView *>(root->getChildByName("Image_25"));
		Image_25->retain();
		}
	loading_bar_back= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("76384"));
	loading_bar_back->retain();
	loading_bar= static_cast<cocos2d::ui::LoadingBar *>(root->getChildByTag("76385"));
	loading_bar->retain();
	Image_27= static_cast<cocos2d::ui::ImageView *>(root->getChildByTag("76386"));
	Image_27->retain();
}
void loding_ui::loding_ui_anifuncEnd()
{
	loding_ui_ani->stop();
}

