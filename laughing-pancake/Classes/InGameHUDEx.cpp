#include "InGameHUDEx.h"
#include "HelloWorldScene.h"
#include "MainSceneEx.h"



InGameHUDEx::InGameHUDEx()
{
	InGameHUD::InGameHUD();

	

	m_InGameOptionUI = new InGameOptionUI();
	addChild(m_InGameOptionUI);
	m_InGameOptionUI->setVisible(false);

	m_GameResualtUI = new GameResualtUI();
	addChild(m_GameResualtUI);
	m_GameResualtUI->setVisible(false);

	m_Menu->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_InGameOptionUI->setVisible(true);
	});

	m_InGameOptionUI->m_Surrender->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_GameResualtUI->setVisible(true);
	});

	m_GameResualtUI->m_Button_2_0->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		auto director = Director::getInstance();
		Scene* scene_ = Scene::create();
		Layer *layer_ = new MainSceneEx();
		scene_->addChild(layer_);
		director->replaceScene((Scene*)scene_);
	});
}
