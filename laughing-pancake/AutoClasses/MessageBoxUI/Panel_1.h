#ifndef __CCMESSAGEBOXUI_PANEL_1_PANEL_1_H__
#define __CCMESSAGEBOXUI_PANEL_1_PANEL_1_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
namespace CCMessageBoxUI{
class Panel_1 : public CCObject
{
public:
	Panel_1() {}
public:
	cocos2d::ui::Button*  m_Button_3;
	cocos2d::ui::Button*  m_Button_3_0;
	cocos2d::ui::ImageView * m_Image_1;
	cocos2d::ui::Text * m_Text_1;
	cocos2d::ui::Text * m_Text_2;
	cocos2d::ui::Button*  m_Button_2;
cocos2d::Node * root;
};
}
#endif // __CCMESSAGEBOXUI_PANEL_1_H__