#ifndef __CHARACTOR_H__
#define __CHARACTOR_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class Charactor
{
public:
	Charactor();
	~Charactor();


	int attack;
	int defence;
	int move;
	int hp;

	int CharNum;
	int type;
	int ArdaID;



private:

};



#endif // __CHARACTOR_H__