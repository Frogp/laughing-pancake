#ifndef __BETTLEPAGEUIEX_H__
#define __BETTLEPAGEUIEX_H__

#include "../AutoClasses/BettlePageUI.h"
#include "ObjCharictorEx.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class BettlePageUIEx : public BettlePageUI
{
public:
	BettlePageUIEx();

	void OpenUI();

	ObjCharictorEx* ItemList[8];

	void update(float dt);
};

#endif // __BETTLEPAGEUIEX_H__