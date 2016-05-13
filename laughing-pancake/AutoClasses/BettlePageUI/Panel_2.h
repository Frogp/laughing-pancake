#ifndef __CCBETTLEPAGEUI_PANEL_2_PANEL_2_H__
#define __CCBETTLEPAGEUI_PANEL_2_PANEL_2_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "../Panel_2/Panel_1_0.h"
#include "../Panel_2/Pn01.h"
#include "../Panel_2/Pn02.h"
#include "../Panel_2/Pn03.h"
#include "../Panel_2/Pn04.h"
#include "../Panel_2/Pn05.h"
#include "../Panel_2/Pn06.h"
#include "../Panel_2/Pn07.h"
#include "../Panel_2/Pn08.h"
#include "../Panel_2/Pn09.h"
#include "../Panel_2/Pn10.h"
#include "../Panel_2/Pn11.h"
#include "../Panel_2/Pn12.h"

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
	CCPanel_2::Panel_1_0 * m_Panel_1_0;
	cocos2d::Sprite * m_Conneritem_3_0;
	cocos2d::Sprite * m_Conneritem_3_0_0;
	cocos2d::Sprite * m_Conneritem_3_0_0_0;
	cocos2d::Sprite * m_Conneritem_3_0_0_0_0;
	cocos2d::Sprite * m_Conneritem2_8;
	cocos2d::Sprite * m_Conneritem2_8_0;
	CCPanel_2::Pn01 * m_Pn01;
	CCPanel_2::Pn02 * m_Pn02;
	CCPanel_2::Pn03 * m_Pn03;
	CCPanel_2::Pn04 * m_Pn04;
	CCPanel_2::Pn05 * m_Pn05;
	CCPanel_2::Pn06 * m_Pn06;
	CCPanel_2::Pn07 * m_Pn07;
	CCPanel_2::Pn08 * m_Pn08;
	CCPanel_2::Pn09 * m_Pn09;
	CCPanel_2::Pn10 * m_Pn10;
	CCPanel_2::Pn11 * m_Pn11;
	CCPanel_2::Pn12 * m_Pn12;
cocos2d::Node * root;
};
}
#endif // __CCBETTLEPAGEUI_PANEL_2_H__