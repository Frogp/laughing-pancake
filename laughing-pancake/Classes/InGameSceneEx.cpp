#include "InGameSceneEx.h"
#include "cocostudio/CocoStudio.h"

InGameSceneEx::InGameSceneEx()
{
	InGameScene::InGameScene();
	auto listener = EventListenerTouchAllAtOnce::create();
	listener->onTouchesMoved = CC_CALLBACK_2(InGameSceneEx::onTouchesMoved, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	m_InGameHUDEx = new InGameHUDEx();
	this->addChild(m_InGameHUDEx);

	cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo("armature/robot.png", "armature/robot.plist", "armature/robot.xml");
	
	cocostudio::Armature* armature = cocostudio::Armature::create("robot");
	armature->getAnimation()->playWithIndex(0);
	armature->setScale(0.48f);
	armature->getAnimation()->setSpeedScale(0.5f);
	armature->setZOrder(99);
	m_Map_3->addChild(armature);
	
}

void InGameSceneEx::onTouchesMoved(const std::vector<Touch*>& touches, Event  *event)
{
	auto touch = touches[0];
	auto diff = touch->getDelta();

	auto currentPos = m_Map_3->getPosition();
	m_Map_3->setPosition(currentPos + diff);
}
