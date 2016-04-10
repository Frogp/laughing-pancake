#ifndef __CCBETTLEPAGEUI_PANEL_2_PANEL_2_H__
#define __CCBETTLEPAGEUI_PANEL_2_PANEL_2_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "../Panel_2/ListView_1.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCBettlePageUI{
class Panel_2 : public CCObject
{
public:
	Panel_2() {}
public:
	CCPanel_2::ListView_1 * m_ListView_1;
cocos2d::Node * root;
};
}
#endif // __CCBETTLEPAGEUI_PANEL_2_H__