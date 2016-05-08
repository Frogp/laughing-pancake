#ifndef __LPLOGO_H__
#define __LPLOGO_H__
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
class LPlogo : public cocos2d::Layer
{
public:
	LPlogo();
	LPlogo(Widget* _root);
	void InitPage();
public:
	cocos2d::Sprite * m_Sprite_1;

	cocostudio::timeline::ActionTimeline* actionLPlogo;
	cocostudio::timeline::AnimationInfo LPlogoAni;
	static LPlogo* Getinstance()
	{
		return LPlogo::instance;	}
	cocos2d::Node* root;
private:
	static LPlogo * instance;
};
#endif // __LPLOGO_H__