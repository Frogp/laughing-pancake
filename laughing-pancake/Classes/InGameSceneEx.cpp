#include "InGameSceneEx.h"
#include "cocostudio/CocoStudio.h"
#include "TMXLayerUtil.h"

InGameSceneEx::InGameSceneEx()
{
	InGameScene::InGameScene();
	auto listener = EventListenerTouchAllAtOnce::create();
	listener->onTouchesMoved = CC_CALLBACK_2(InGameSceneEx::onTouchesMoved, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	m_InGameHUDEx = new InGameHUDEx();
	this->addChild(m_InGameHUDEx);

	cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo("armature/hero.ExportJson");
	
	cocostudio::Armature* armature = cocostudio::Armature::create("hero");
	armature->getAnimation()->playWithIndex(0);
	//armature->setScale(0.48f);
	//armature->setAnchorPoint(ccp(0.5, 0.5));
	//armature->getAnimation()->setSpeedScale(0.5f);
	armature->setZOrder(99);
	
	TMXObjectGroup* objectGroup = m_Map_3->getObjectGroup("Object Layer 1");
	auto _layer = m_Map_3->layerNamed("All");

	// 그룹 내 특정 오브젝트
	ValueMap& objectStart = objectGroup->getObject("player1");

	int x = objectStart["x"].asInt();
	int y = objectStart["y"].asInt();

	armature->setPosition(ccp(x, (1000-(1800-y))));
	m_Map_3->addChild(armature);

	/*********** Finding Path, Test Function ****************/
	//TMXLayerUtil::getInstance()->SetTestPath(ccp(8, 1), ccp(0, 8), _layer,m_Map_3->getTileSize());
	
	/*********** Show avaliable Area of size, Test Function ****************/
	TMXLayerUtil::getInstance()->SetTestArea(ccp(4,5), 2, _layer, m_Map_3->getTileSize());

	/*********** Move character on anywhere you want, Test Function ****************/
	//TMXLayerUtil::getInstance()->SetTestMove(Point(6,8), _layer, m_Map_3->getTileSize(), armature);
}

void InGameSceneEx::onTouchesMoved(const std::vector<Touch*>& touches, Event  *event)
{
	auto touch = touches[0];
	auto diff = touch->getDelta();

	auto currentPos = m_Map_3->getPosition();
	m_Map_3->setPosition(currentPos + diff);
}


