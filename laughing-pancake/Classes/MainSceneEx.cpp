#include "MainSceneEx.h"
#include "../AutoClasses/BettleReadyUI.h"
#include "InGameSceneEx.h"
#include "GameSceneEditor.h"
MainSceneEx::MainSceneEx()
{
	MainScene::MainScene();

	m_MainUI = new MainUI();
	addChild(m_MainUI);

	m_BettlePageUI = new BettlePageUIEx();
	addChild(m_BettlePageUI);
	m_BettlePageUI->setVisible(false);

	m_BettleReadyUI = new BettleReadyUI();
	addChild(m_BettleReadyUI);
	m_BettleReadyUI->setVisible(false);

	m_BettleStartUI = new BettleStartUI();
	addChild(m_BettleStartUI);
	m_BettleStartUI->setVisible(false);



	m_MainUI->actionMainUI->play("Oppening",false);

	m_MainUI->m_BtBettle->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			m_BettleReadyUI->setVisible(true);
			m_MainUI->actionMainUI->play("BtBettlePress", false);
			m_BettleReadyUI->actionBettleReadyUI->play("Opening", false);
		}
	});

	m_MainUI->m_BtAdventure->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
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

			m_MainUI->actionMainUI->setAnimationEndCallFunc("ReView", [=]()
			{
			});

			m_MainUI->actionMainUI->play("ReView", false);
		}
	});

	m_BettleReadyUI->m_Panel_2->m_BtNormal->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			m_BettleReadyUI->actionBettleReadyUI->setAnimationEndCallFunc("Closed", [=]()
			{
				m_MainUI->actionMainUI->setAnimationEndCallFunc("NextView", [=]()
				{
					m_BettlePageUI->setVisible(true);
					m_BettlePageUI->OpenUI();
				});
				m_MainUI->actionMainUI->play("NextView", false);
				m_BettlePageUI->setVisible(true);
				m_BettleReadyUI->setVisible(false);
			});
			m_BettleReadyUI->actionBettleReadyUI->play("Closed", false);

			
		}
			
	});

	m_BettleReadyUI->m_Panel_2->m_BtRank->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			m_BettleReadyUI->actionBettleReadyUI->setAnimationEndCallFunc("Closed", [=]()
			{
				m_BettleReadyUI->setVisible(false);
			});
			m_BettleReadyUI->actionBettleReadyUI->play("Closed", false);
			m_MainUI->actionMainUI->setAnimationEndCallFunc("NextView", [=]()
			{
				m_BettlePageUI->setVisible(true);
				m_BettlePageUI->OpenUI();
			});
			m_MainUI->actionMainUI->play("NextView", false);

			
		}
			
	});

	m_BettleReadyUI->m_Panel_2->m_BtCancel->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			m_BettleReadyUI->actionBettleReadyUI->setAnimationEndCallFunc("Closed", [=]()
			{
				m_BettleReadyUI->setVisible(false);
			});
			m_BettleReadyUI->actionBettleReadyUI->play("Closed", false);
			m_MainUI->actionMainUI->play("ReCall", false);
		}

	});

	m_BettleStartUI->m_Panel_2->m_BtCancel->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
			m_BettleStartUI->setVisible(false);
	});

	//m_FileNode_3->m_Button_1_0->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	//{
	//	if (type == Widget::TouchEventType::ENDED)
	//	{
	//		auto director = Director::getInstance();
	//		Scene* scene = Scene::create();
	//		Layer *layer = new InGameSceneEx();
	//		scene->addChild(layer);
	//		//TransitionFade* pScene = TransitionFade::create(0.25, scene, Color3B::BLACK);
	//		//director->getRunningScene()->removeAllChildren();
	//		director->replaceScene((Scene*)scene);
	//	}
	//	
	//});


	//m_MainUI->m_BtBettle->addClickEventListener([this](Ref* obj)
	//{
	//
	//	m_FileNode_2->setVisible(true);
	//});
}