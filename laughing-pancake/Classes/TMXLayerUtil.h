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

	


	
	void SetTestPath(Point End, Point Start, cocos2d::TMXLayer * layer);


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
	void Init_Map(cocos2d::TMXLayer * layer);

	void bfs(Point End, Point Start);
	void dfs(int sx, int sy, int sl, cocos2d::TMXLayer * layer);
	
	const int ROWS = 9;
	const int COLS = 9;
	int map[9][9] = { 1, };

	const Point even_directions[6] = { //¦����
		{ -1, -1 },{ 0,-1 },{ -1,0 },{ 1,0 },{ -1,1 },{ 0,1 }
	};
	const Point odd_directions[6] = { //Ȧ����
		{ 0,-1 },{ 1,-1 },{ -1,0 },{ 1,0 },{ 0,1 },{ 1,1 }
	};

	

	static TMXLayerUtil* instance;
};



#endif // __TMXLAYERUTIL_H__