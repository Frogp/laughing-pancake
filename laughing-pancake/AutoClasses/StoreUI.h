#ifndef __STOREUI_H__
#define __STOREUI_H__
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "CustomWidget/CustomParticleWidget.h"

USING_NS_CC;
using namespace cocostudio;
using namespace cocos2d;
using namespace ui;

/// <summary>
/// 디자이너 지원에 필요한 메서드입니다.
/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
/// </summary>
class StoreUI : public cocos2d::Layer
{
public:
	StoreUI();
	StoreUI(Widget* _root);
	void InitPage();
public:

	static StoreUI* Getinstance()
	{
		return StoreUI::instance;	}
	cocos2d::Node* root;
private:
	static StoreUI * instance;
};
#endif // __STOREUI_H__