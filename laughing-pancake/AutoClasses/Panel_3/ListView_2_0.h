#ifndef __CCBETTLEPAGEUI_PANEL_3_LISTVIEW_2_0_H__
#define __CCBETTLEPAGEUI_PANEL_3_LISTVIEW_2_0_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "../ListView_2_0/Panel_4.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCPanel_3{
class ListView_2_0 : public CCObject
{
public:
	ListView_2_0() {}
public:
	CCListView_2_0::Panel_4 * m_Panel_4;
	cocos2d::Node* root;
};
}
#endif // __CCBETTLEPAGEUI_LISTVIEW_2_0_H__