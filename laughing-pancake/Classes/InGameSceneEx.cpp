#include "InGameSceneEx.h"
#include "cocostudio/CocoStudio.h"
#include "TMXLayerUtil.h"

InGameSceneEx::InGameSceneEx()
{
	InGameScene::InGameScene();
	auto listener = EventListenerTouchAllAtOnce::create();
	listener->onTouchesEnded = CC_CALLBACK_2(InGameSceneEx::onTouchesEnded, this);
	listener->onTouchesMoved = CC_CALLBACK_2(InGameSceneEx::onTouchesMoved, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	m_InGameHUDEx = new InGameHUDEx();
	this->addChild(m_InGameHUDEx);
	//

	schedule(schedule_selector(InGameSceneEx::update));


	cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo("armature/hero.ExportJson");
	
	VisualCharactor* armature = VisualCharactor::create("hero");
	testchar = armature;
	armature->getAnimation()->playWithIndex(0);
	//armature->setScale(0.48f);
	//armature->setAnchorPoint(ccp(0.5, 0.5));
	//armature->getAnimation()->setSpeedScale(0.5f);
	armature->setZOrder(99);
	
	TMXObjectGroup* objectGroup = m_Map_3->getObjectGroup("Object Layer 1");
	auto _layer = m_Map_3->layerNamed("All");
	TMXLayerUtil::getInstance()->Init_Map(_layer, m_Map_3->getTileSize());
	// 그룹 내 특정 오브젝트
	ValueMap& objectStart = objectGroup->getObject("player1");

	int x = objectStart["x"].asInt();
	int y = objectStart["y"].asInt();

	armature->SetGamePostion(ccp(2,6));
	m_Map_3->addChild(armature);

	allChar.pushBack(armature);
	NowStatus = NowMode::NONSELECTED;


	m_InGameHUDEx->m_MoveButton->addTouchEventListener([=](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			NowStatus = NowMode::MOVE;
			m_InGameHUDEx->actionInGameHUD->play("Deselect", false);
			auto _layer = m_Map_3->layerNamed("All");
			TMXLayerUtil::getInstance()->SetTestArea(this->testchar->NowTilePos, 1, _layer);
		}
	});
	m_InGameHUDEx->m_MagicButton->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			NowStatus = NowMode::MAGIC;
			m_InGameHUDEx->actionInGameHUD->play("Deselect", false);
		}
	});
	m_InGameHUDEx->m_SummonButton->addTouchEventListener([this](Ref* obj, Widget::TouchEventType type)
	{
		if (type == Widget::TouchEventType::ENDED)
		{
			NowStatus = NowMode::SUMMON;
			m_InGameHUDEx->actionInGameHUD->play("Deselect", false);
		}
	});

	/*********** Finding Path, Test Function ****************/
	//std::vector<Point> &pos =  TMXLayerUtil::getInstance()->SetTestPath(ccp(8, 1), armature->NowTilePos, _layer);
	//armature->SetMoveAnimation(pos);

	/*********** Show avaliable Area of size, Test Function ****************/
	//TMXLayerUtil::getInstance()->SetTestArea(ccp(4,5), 2, _layer, m_Map_3->getTileSize());

	/*********** Move character on anywhere you want, Test Function ****************/
	//TMXLayerUtil::getInstance()->SetTestMove(Point(8,2), _layer, m_Map_3->getTileSize(), armature);

}

void InGameSceneEx::onTouchesEnded(const std::vector<Touch*>& touches, Event  *event)
{

	auto touch = touches[0];

	CCSize tileSize = m_Map_3->getTileSize();
	CCSize mapSize = m_Map_3->getMapSize();
	CCPoint pos = ccpSub(touch->getLocation(), m_Map_3->getPosition());

	Point abpos = TMXLayerUtil::getInstance()->GetAbsolutePostion(pos);
	
	Vector<VisualCharactor*>::iterator _bitor = allChar.begin();

	if (NowStatus == NowMode::NONSELECTED)
	{
		for (_bitor; _bitor < allChar.end(); _bitor++)
		{
			VisualCharactor* _node = *_bitor;

			if (_node->NowTilePos == abpos)
			{
				NowStatus = NowMode::SELECTED;
				m_InGameHUDEx->actionInGameHUD->play("Select", false);
			}
		}
		return;
	}

	if (testchar->NowTilePos == abpos)
	{
		m_InGameHUDEx->actionInGameHUD->play("Deselect", false);
		NowStatus = NowMode::NONSELECTED;
		return;
	}

	if (NowStatus == NowMode::MOVE)
	{
		auto _layer = m_Map_3->layerNamed("All");
		std::vector<Point>& getpos = TMXLayerUtil::getInstance()->SetTestPath(abpos, testchar->NowTilePos, _layer);
		testchar->SetMoveAnimation(getpos);
		m_InGameHUDEx->actionInGameHUD->play("Deselect", false);
	}
	
	NowStatus = NowMode::NONSELECTED;
	
}

void InGameSceneEx::onTouchesMoved(const std::vector<Touch*>& touches, Event  *event)
{
	auto touch = touches[0];
	auto diff = touch->getDelta();

	auto currentPos = m_Map_3->getPosition();
	m_Map_3->setPosition(currentPos + diff);
}

void InGameSceneEx::onTouchEnded(Touch * touch, Event * unused_event)
{
	auto touchLocation = touch->getLocation();
	touchLocation = this->convertToNodeSpace(touchLocation);

}

void InGameSceneEx::Update(float dt)
{

}


