#ifndef __CCBETTLEPAGEUI_PANEL_8_PANEL_2_H__
#define __CCBETTLEPAGEUI_PANEL_8_PANEL_2_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "../Panel_2/Panel_1_0.h"
#include "../Panel_2/ObjCharictor.h"
#include "../Panel_2/ObjCharictor_1.h"
#include "../Panel_2/ObjCharictor_2.h"
#include "../Panel_2/ObjCharictor_3.h"
#include "../Panel_2/ObjCharictor_4.h"
#include "../Panel_2/ObjCharictor_5.h"
#include "../Panel_2/ObjCharictor_6.h"
#include "../Panel_2/ObjCharictor_7.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCPanel_8{
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
	CCPanel_2::ObjCharictor * m_ObjCharictor;
	CCPanel_2::ObjCharictor_1 * m_ObjCharictor_1;
	CCPanel_2::ObjCharictor_2 * m_ObjCharictor_2;
	CCPanel_2::ObjCharictor_3 * m_ObjCharictor_3;
	CCPanel_2::ObjCharictor_4 * m_ObjCharictor_4;
	CCPanel_2::ObjCharictor_5 * m_ObjCharictor_5;
	CCPanel_2::ObjCharictor_6 * m_ObjCharictor_6;
	CCPanel_2::ObjCharictor_7 * m_ObjCharictor_7;
	cocos2d::Node* root;
};
}
#endif // __CCBETTLEPAGEUI_PANEL_2_H__