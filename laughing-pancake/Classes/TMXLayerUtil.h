#ifndef __TMXLAYERUTIL_H__
#define __TMXLAYERUTIL_H__
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
USING_NS_CC;
using namespace cocos2d;
using namespace ui;



class TMXLayerUtil
{
public:
	~TMXLayerUtil();

	

	
	
	void SetTestPath(Point End, Point Start, cocos2d::TMXLayer * layer, Size tilesize);
	void SetTestArea(Point Coords, int size, cocos2d::TMXLayer *layer, Size tilesize);
	void SetTestMove(Point Coords, cocos2d::TMXLayer *layer, Size tilesize, cocostudio::Armature* armature);
	//Test Functions

	static TMXLayerUtil* getInstance()
	{
		if (TMXLayerUtil::instance == NULL)
		{
			TMXLayerUtil::instance = new TMXLayerUtil();
		}
		return TMXLayerUtil::instance;
	}
	
private:

	TMXLayerUtil();
	void Init_Map(cocos2d::TMXLayer *layer, Size tilesize);

	void bfs(Point End, Point Start);
	void dfs(int sx, int sy, int sl, cocos2d::TMXLayer * layer);
	
	void showArea(Point coord, int size, cocos2d::TMXLayer *layer);


	bool moveTo(Point To, cocostudio::Armature* armature, Size tilesize, cocos2d::TMXLayer *layer);

	const int ROWS = 9;
	const int COLS = 9;

	//const int realHeight = ((tilesize*layer->getmapsize)/2)+1;
	const int realHeight = 1000;

	int map[9][9] = { 1, };
	Point coordMap[9][9];
	const Point even_directions[6] = { //礎熱還
		{ -1, -1 },{ 0,-1 },{ -1,0 },{ 1,0 },{ -1,1 },{ 0,1 }
	};
	const Point odd_directions[6] = { //�汝鶬�
		{ 0,-1 },{ 1,-1 },{ -1,0 },{ 1,0 },{ 0,1 },{ 1,1 }
	};

	

	static TMXLayerUtil* instance;
};



#endif // __TMXLAYERUTIL_H__