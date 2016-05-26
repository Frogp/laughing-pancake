#ifndef __INGAMESCENEEX_H__
#define __INGAMESCENEEX_H__

#include "../AutoClasses/InGameScene.h"
#include "InGameHUDEx.h"
#include "VisualCharactor.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class InGameSceneEx : public InGameScene
{
public:
	InGameSceneEx();
	InGameHUDEx* m_InGameHUDEx;

	//cocos2d::Vector<VisualCharactor*> charlist;
	VisualCharactor* testchar;

	void onTouchesMoved(const std::vector<Touch*>& touches, Event  *event);

	void Update(float dt);
};

#endif // __INGAMESCENEEX_H__