#ifndef __CCBETTLEPAGEUI_PANEL_2_LISTVIEW_1_H__
#define __CCBETTLEPAGEUI_PANEL_2_LISTVIEW_1_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "../ListView_1/Panel_1.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCPanel_2{
class ListView_1 : public CCObject
{
public:
	ListView_1() {}
public:
	CCListView_1::Panel_1 * m_Panel_1;
	cocos2d::Node* root;
};
}
#endif // __CCBETTLEPAGEUI_LISTVIEW_1_H__