#include "MainSceneEx.h"
#include "../AutoClasses/BettleReadyUI.h"
#include "InGameSceneEx.h"
#include "GameSceneEditor.h"
MainSceneEx::MainSceneEx()
{
	MainScene::MainScene();

	m_FileNode_1 = new MainUI();
	addChild(m_FileNode_1);

	m_BettlePageUI = new BettlePageUI();
	addChild(m_BettlePageUI);
	m_BettlePageUI->setVisible(false);

	m_FileNode_2 = new BettleReadyUI();
	addChild(m_FileNode_2);
	m_FileNode_2->setVisible(false);

	m_FileNode_3 = new BettleStartUI();
	addChild(m_FileNode_3);
	m_FileNode_3->setVisible(false);

	m_FileNode_1->actionMainUI->play("Oppening",false);

	m_FileNode_1->m_BtBettle->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_BettlePageUI->setVisible(true);
	});

	m_BettlePageUI->m_BtNormal->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_FileNode_2->setVisible(true);
	});

	m_BettlePageUI->m_BtRank->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
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

	m_FileNode_3->m_Button_1->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		m_FileNode_3->setVisible(false);
	});

	m_FileNode_3->m_Button_1_0->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
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