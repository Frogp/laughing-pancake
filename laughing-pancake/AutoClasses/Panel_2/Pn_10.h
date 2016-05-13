#ifndef __CCPANEL_8_PANEL_2_PN_10_H__
#define __CCPANEL_8_PANEL_2_PN_10_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCPanel_2{
class Pn_10 : public CCObject
{
public:
	Pn_10() {}
public:
	cocos2d::ui::Text * m_DeckName;
	cocos2d::ui::ImageView * m_ImgChar;
	cocos2d::Node * m_FileNode_2_0;
	cocos2d::Node* root;
};
}
#endif // __CCPANEL_8_PN_10_H__