#include "MainSceneEx.h"
#include "../AutoClasses/BettleReadyUI.h"
#include "InGameSceneEx.h"
#include "GameSceneEditor.h"
MainSceneEx::MainSceneEx()
{
	MainScene::MainScene();

	m_FileNode_1 = new MainUI();
	addChild(m_FileNode_1);

	m_BettlePageUI = new BettlePageUIEx();
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
		if (type == Widget::TouchEventType::ENDED)
		{
			m_FileNode_1->actionMainUI->setAnimationEndCallFunc("NextView", [=]()
			{
				m_BettlePageUI->setVisible(true);
				m_BettlePageUI->OpenUI();
			});
			m_FileNode_1->actionMainUI->play("NextView", false);
		}
	});

	m_FileNode_1->m_BtAdventure->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			auto director = Director::getInstance();
			Scene* scene = Scene::create();
			Layer *layer = new InGameSceneEx();
			scene->addChild(layer);
			director->replaceScene((Scene*)scene);
		}
	});

	m_BettlePageUI->m_Panel_8->m_btBack->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			m_BettlePageUI->setVisible(false);

			m_FileNode_1->actionMainUI->setAnimationEndCallFunc("ReView", [=]()
			{
			});

			m_FileNode_1->actionMainUI->play("ReView", false);
		}
	});

	m_FileNode_2->m_Button_1->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
			m_FileNode_2->setVisible(false);
	});

	m_FileNode_2->m_Button_1_0->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
			m_FileNode_3->setVisible(true);
	});

	m_FileNode_3->m_Button_1->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
			m_FileNode_3->setVisible(false);
	});

	m_FileNode_3->m_Button_1_0->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			auto director = Director::getInstance();
			Scene* scene = Scene::create();
			Layer *layer = new InGameSceneEx();
			scene->addChild(layer);
			//TransitionFade* pScene = TransitionFade::create(0.25, scene, Color3B::BLACK);
			//director->getRunningScene()->removeAllChildren();
			director->replaceScene((Scene*)scene);
		}
		
	});


	//m_FileNode_1->m_BtBettle->addClickEventListener([this](Ref* obj)
	//{
	//
	//	m_FileNode_2->setVisible(true);
	//});
}