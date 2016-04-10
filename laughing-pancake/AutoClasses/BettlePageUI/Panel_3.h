#ifndef __CCBETTLEPAGEUI_PANEL_3_PANEL_3_H__
#define __CCBETTLEPAGEUI_PANEL_3_PANEL_3_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "../Panel_3/ListView_2.h"
#include "../Panel_3/ListView_2_0.h"
#include "../Panel_3/ListView_2_1.h"
#include "../Panel_3/ListView_2_2.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCBettlePageUI{
class Panel_3 : public CCObject
{
public:
	Panel_3() {}
public:
	CCPanel_3::ListView_2 * m_ListView_2;
	CCPanel_3::ListView_2_0 * m_ListView_2_0;
	CCPanel_3::ListView_2_1 * m_ListView_2_1;
	CCPanel_3::ListView_2_2 * m_ListView_2_2;
cocos2d::Node * root;
};
}
#endif // __CCBETTLEPAGEUI_PANEL_3_H__