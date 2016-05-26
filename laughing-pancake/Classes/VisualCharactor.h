#ifndef __VISUALCHARACTOR_H__
#define __VISUALCHARACTOR_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Charactor.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class VisualCharactor : public cocostudio::Armature
{
public:
	VisualCharactor();

	Charactor Info;
	void SetMoveAnimation(Point newpos);
	void SetMoveAnimation(Point oldpos, Point newpos);
	void SetMoveAnimation(std::vector<Point> Poses);

	void update(float dt);

	static VisualCharactor * create(const std::string & name);

	void SetGamePostion(Point pos);
	
	Point NowTilePos;

private:

	

	Point oldPostion;
	Point newPostion;
};



#endif // __VISUALCHARACTOR_H__