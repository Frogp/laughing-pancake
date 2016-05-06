#ifndef __LOADINGSCENE_H__
#define __LOADINGSCENE_H__
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
class LoadingScene : public cocos2d::Layer
{
public:
	LoadingScene();
	LoadingScene(Widget* _root);
	void InitPage();
public:

	cocostudio::timeline::ActionTimeline* actionLoadingScene;
	static LoadingScene* Getinstance()
	{
		return LoadingScene::instance;	}
	cocos2d::Node* root;
private:
	static LoadingScene * instance;
};
#endif // __LOADINGSCENE_H__