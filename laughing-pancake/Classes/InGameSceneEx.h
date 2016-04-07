#ifndef __INGAMESCENEEX_H__
#define __INGAMESCENEEX_H__

#include "../AutoClasses/InGameScene.h"
#include "InGameHUDEx.h"
USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class InGameSceneEx : public InGameScene
{
public:
	InGameSceneEx();
	InGameHUDEx* m_InGameHUDEx;
	void onTouchesMoved(const std::vector<Touch*>& touches, Event  *event);
};

#endif // __INGAMESCENEEX_H__