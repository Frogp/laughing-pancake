#ifndef __MAINSCENE_H__
#define __MAINSCENE_H__
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
class MainScene : public cocos2d::Layer
{
public:
	MainScene();
	MainScene(Widget* _root);
	void InitPage();
public:

	cocostudio::timeline::ActionTimeline* actionMainScene;
	static MainScene* Getinstance()
	{
		return MainScene::instance;	}
	cocos2d::Node* root;
private:
	static MainScene * instance;
};
#endif // __MAINSCENE_H__