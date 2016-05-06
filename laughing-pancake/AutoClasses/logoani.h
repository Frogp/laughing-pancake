#ifndef __LOGOANI_H__
#define __LOGOANI_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class logoani : public cocos2d::Layer
{
public:
	logoani();
	logoani(Widget* _root);
	void InitPage();
public:
	cocos2d::Sprite * m_Sprite_5;

	cocostudio::timeline::ActionTimeline* actionlogoani;
	cocostudio::timeline::AnimationInfo LogoPlay;
	static logoani* Getinstance()
	{
		return logoani::instance;	}
	cocos2d::Node* root;
private:
	static logoani * instance;
};
#endif // __LOGOANI_H__