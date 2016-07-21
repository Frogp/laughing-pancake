#include "VisualCharactor.h"
#include "ArdaClient.h"
#include "TMXLayerUtil.h"

VisualCharactor::VisualCharactor()
{
}

void VisualCharactor::SetMoveAnimation(Point newpos)
{
	this->newPostion = newpos;
	this->oldPostion = this->getPosition();
	
	MoveTo* action = MoveTo::create(ArdaClient::GetInstace()->speed, newpos);
	this->runAction(action);
}

void VisualCharactor::SetMoveAnimation(Point oldpos, Point newpos)
{
	this->newPostion = newpos;
	this->oldPostion = oldpos;

	this->setPosition(oldpos);

	MoveTo* action = MoveTo::create(ArdaClient::GetInstace()->speed, newpos);
	this->runAction(action);

	//Sequence * seq = Sequence::create(action);
}

void VisualCharactor::SetMoveAnimation(std::vector<Point> Poses)
{
	this->stopAllActions();

	Vector<FiniteTimeAction*> acationarray;
	bool isfirst = false;
	for (std::vector<Point>::reverse_iterator _bitor = Poses.rbegin(); _bitor != Poses.rend(); ++_bitor)
	{
		if (isfirst == false)
		{
			this->setPosition(TMXLayerUtil::getInstance()->GenAbsoulutePosition(*_bitor));
			isfirst = true;
		}
		else
		{
			MoveTo* action = MoveTo::create(ArdaClient::GetInstace()->speed, TMXLayerUtil::getInstance()->GenAbsoulutePosition(*_bitor));
			acationarray.pushBack(action);
			Point Befor = *_bitor;
			auto callbackRotate = CallFunc::create([=]() {
				this->NowTilePos = Befor;
			});
			acationarray.pushBack(callbackRotate);

		}
	}
	Sequence * seq = Sequence::create(acationarray);
	
	this->runAction(seq);

	//Sequence * seq = Sequence::create(action);
}



void VisualCharactor::update(float dt)
{
	
}

VisualCharactor *VisualCharactor::create(const std::string& name)
{
	VisualCharactor *visualcharactor = new (std::nothrow) VisualCharactor();
	if (visualcharactor && visualcharactor->init(name))
	{
		visualcharactor->autorelease();
		return visualcharactor;
	}
	CC_SAFE_DELETE(visualcharactor);
	return nullptr;
}

void VisualCharactor::SetGamePostion(Point pos)
{
	this->setPosition(TMXLayerUtil::getInstance()->GenAbsoulutePosition(pos));
	NowTilePos = pos;
}
