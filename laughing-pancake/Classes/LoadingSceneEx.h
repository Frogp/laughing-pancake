#pragma once
#include "../AutoClasses/LoadingScene.h"
#include "../AutoClasses/LogoUI.h"
USING_NS_CC;

using namespace cocos2d;
using namespace ui;

class LoadingSceneEx : public LoadingScene
{
public:
	LoadingSceneEx();

	LogoUI* m_logoui;
};