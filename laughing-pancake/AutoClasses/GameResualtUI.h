#ifndef __GAMERESUALTUI_H__
#define __GAMERESUALTUI_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class GameResualtUI : public cocos2d::Layer
{
public:
	GameResualtUI();
	GameResualtUI(Widget* _root);
	void InitPage();
public:

	static GameResualtUI* Getinstance()
	{
		return GameResualtUI::instance;	}
	cocos2d::Node* root;
private:
	static GameResualtUI * instance;
};
#endif // __GAMERESUALTUI_H__