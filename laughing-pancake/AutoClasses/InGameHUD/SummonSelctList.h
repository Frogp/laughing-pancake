#ifndef __CCINGAMEHUD_SUMMONSELCTLIST_SUMMONSELCTLIST_H__
#define __CCINGAMEHUD_SUMMONSELCTLIST_SUMMONSELCTLIST_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "../SummonSelctList/Type1.h"
#include "../SummonSelctList/Type2.h"
#include "../SummonSelctList/Panel_1_1.h"
#include "../SummonSelctList/Panel_1_2.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCInGameHUD{
class SummonSelctList : public CCObject
{
public:
	SummonSelctList() {}
public:
	CCSummonSelctList::Type1 * m_Type1;
	CCSummonSelctList::Type2 * m_Type2;
	CCSummonSelctList::Panel_1_1 * m_Panel_1_1;
	CCSummonSelctList::Panel_1_2 * m_Panel_1_2;
cocos2d::Node * root;
};
}
#endif // __CCINGAMEHUD_SUMMONSELCTLIST_H__