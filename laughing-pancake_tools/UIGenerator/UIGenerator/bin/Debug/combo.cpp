/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
#include "combo.h"
#include "cocostudio/CCSSceneReaderext.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

combo::combo()
{
	root = GUIReader::shareReader()->widgetFromJsonFile("combo.json");
	InitPage();
}
combo::combo(Widget* _root)
{
	root = _root;
	InitPage();
}
void combo::InitPage()
{
	combo_ani = cocostudio::ActionManagerEx::getInstance()->getActionByName("combo.json", "combo_ani");
	combo_ani->retain();
	combo_anifunc = CCCallFunc::create(this, callfunc_selector(combo::combo_anifuncEnd));
	combo_anifunc->retain();
	combo_text= static_cast<cocos2d::ui::TextBMFont *>(root->getChildByTag("312"));
	combo_text->retain();
}
void combo::combo_anifuncEnd()
{
	combo_ani->stop();
}

