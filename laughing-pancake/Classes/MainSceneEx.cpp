#include "MainSceneEx.h"
#include "../AutoClasses/BettleReadyUI.h"
#include "InGameSceneEx.h"
#include "GameSceneEditor.h"
MainSceneEx::MainSceneEx()
{
	MainScene::MainScene();

	m_FileNode_1 = new MainUI();
	addChild(m_FileNode_1);

	m_FileNode_2 = new BettleReadyUI();
	addChild(m_FileNode_2);
	m_FileNode_2->setVisible(false);

	m_FileNode_3 = new BettleStartUI();
	addChild(m_FileNode_3);
	m_FileNode_3->setVisible(false);

	m_FileNode_1->m_BtBettle->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_FileNode_2->setVisible(true);
	});

	m_FileNode_2->m_Button_1->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_FileNode_2->setVisible(false);
	});

	m_FileNode_2->m_Button_1_0->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_FileNode_3->setVisible(true);
	});

	m_FileNode_3->m_Panel_1->m_Button_1->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_FileNode_3->setVisible(false);
	});

	m_FileNode_3->m_Panel_1->m_BtStart->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		auto director = Director::getInstance();
		Scene* scene = Scene::create();
		Layer *layer = new InGameSceneEx();
		scene->addChild(layer);
		//TransitionFade* pScene = TransitionFade::create(0.25, scene, Color3B::BLACK);
		//director->getRunningScene()->removeAllChildren();
		director->replaceScene((Scene*)scene);
	});


	//m_FileNode_1->m_BtBettle->addClickEventListener([this](Ref* obj)
	//{
	//
	//	m_FileNode_2->setVisible(true);
	//});
}