#ifndef __MAINSCENEEX_H__
#define __MAINSCENEEX_H__

#include "../AutoClasses/MainScene.h"
#include "../AutoClasses/MainUI.h"
#include "../AutoClasses/BettleReadyUI.h"
#include "../AutoClasses/BettleStartUI.h"
#include "BettlePageUIEx.h"
USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class MainSceneEx : public MainScene
{
public:
	MainSceneEx();
	MainUI* m_FileNode_1;
	BettleReadyUI* m_FileNode_2;
	BettleStartUI* m_FileNode_3;
	BettlePageUIEx* m_BettlePageUI;
};
#endif // __MAINSCENEEX_H__