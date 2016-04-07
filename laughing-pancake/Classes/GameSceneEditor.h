#ifndef __SCENEEDITORTESTSCENE_H__
#define __SCENEEDITORTESTSCENE_H__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"


USING_NS_CC;


class GameSceneEditor : public Scene
{
public:
	virtual void onEnter() override;
	virtual void onExit() override;

	CREATE_FUNC(GameSceneEditor);
protected:
};

#endif  // __SCENEEDITORTESTSCENE_H__
