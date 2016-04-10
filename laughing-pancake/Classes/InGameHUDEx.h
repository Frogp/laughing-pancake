#ifndef __INGAMEHUDEX_H__
#define __INGAMEHUDEX_H__

#include "../AutoClasses/InGameHUD.h"
#include "../AutoClasses/InGameOptionUI.h"
#include "../AutoClasses/GameResualtUI.h"
USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class InGameHUDEx : public InGameHUD
{
public:
	InGameHUDEx();

	InGameOptionUI* m_InGameOptionUI;
	GameResualtUI* m_GameResualtUI;
};

#endif // __INGAMEHUDEX_H__