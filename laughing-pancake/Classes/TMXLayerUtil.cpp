#include "TMXLayerUtil.h"

TMXLayerUtil * TMXLayerUtil::instance;

TMXLayerUtil::TMXLayerUtil()
{
}

TMXLayerUtil::~TMXLayerUtil()
{
}
/*
	moveTo(이동하고자 하는 좌표, 캐릭터, 타일 하나 크기, 레이어)
	coordMap 에서 맵 좌표와 대응 되는 ui 상 좌표로 캐릭터 setposition 해줌.
*/

bool TMXLayerUtil::moveTo(Point To, cocostudio::Armature* armature, Size tilesize, cocos2d::TMXLayer *layer)
{
	if (map[(int)To.y][(int)To.x] == 0)
	{
		armature->setPosition(ccp(coordMap[(int)To.y][(int)To.x].x, coordMap[(int)To.y][(int)To.x].y));
		return true;
	}
	else
		return false;
}

void TMXLayerUtil::showArea(Point Start, int size, cocos2d::TMXLayer *layer)
{
	int xc[10000], yc[10000], lc[10000], pos, cnt;
	const int initl = 10;
	pos = 0;
	cnt = 0;
	lc[cnt] = initl;
	xc[cnt] = Start.x;
	yc[cnt++] = Start.y;
	map[(int)Start.y][(int)Start.x] = 11;
	while (pos < cnt)
	{

		for (int i = 0; i < 6; i++)
		{
			int x, y, l;
			Point dir;
			l = lc[pos] + 1;
			if ((yc[pos]) % 2 == 0)
				dir = even_directions[i];
			else
				dir = odd_directions[i];

			x = xc[pos] + dir.x;
			y = yc[pos] + dir.y;
			
	
			if (x >= 0 && y >= 0 && x < ROWS && y < COLS
				&& map[y][x] == 0 && l<=(size+ initl))
			{
				layer->setTileGID(5, Vec2((float)x, (float)y)); //Path Tile Show
				lc[cnt] = l;
				xc[cnt] = x;
				yc[cnt++] = y;

				map[y][x] = l;
			}

		}
		pos++;
	}
}
void TMXLayerUtil::bfs(Point End, Point Start)
{
	int xc[10000], yc[10000], lc[10000], pos, cnt;

	pos = 0;
	cnt = 0;
	lc[cnt] = 11;
	xc[cnt] = Start.x;
	yc[cnt++] = Start.y;
	map[(int)Start.y][(int)Start.x] = 11;
	while (pos < cnt)
	{

		//printf("%d %d\n", xc[pos], yc[pos]);

		if (xc[pos] == (int)End.x && yc[pos] == (int)End.y)
			break;
		for (int i = 0; i < 6; i++)
		{
			int x, y, l;
			Point dir;
			l = lc[pos] + 1;
			if ((yc[pos]) % 2 == 0)
				dir = even_directions[i];
			else
				dir = odd_directions[i];

			x = xc[pos] + dir.x;
			y = yc[pos] + dir.y;

			//printf("%d %d", x,y);
			//printf("%d->%d %d->%d\n", directions[i].x,x, directions[i].y,y);
			if (x >= 0 && y >= 0 && x < ROWS && y < COLS
				&& map[y][x] == 0)
			{

				lc[cnt] = l;
				xc[cnt] = x;
				yc[cnt++] = y;

				//printf("%d %d\n", x, y);
				map[y][x] = l;
			}

		}
		pos++;
	}
}
void TMXLayerUtil::dfs(int sx, int sy, int sl, cocos2d::TMXLayer *layer)
{
	layer->setTileGID(5, Vec2((float)sx, (float)sy));
	//result[sy][sx] = sl;
	//printf("%d %d %d\n", sx, sy, sl);
	for (int i = 0; i < 6; i++)
	{
		int x, y, l;
		Point dir;

		l = sl - 1;
		if ((sy) % 2 == 0)
			dir = even_directions[i];
		else
			dir = odd_directions[i];
		x = sx + dir.x;
		y = sy + dir.y;
		//printf("%d->%d %d->%d\n", dir.x,x, dir.y,y);
		if (x >= 0 && y >= 0 && x < ROWS && y < COLS
			&& map[y][x] == l)
		{
			//printf("%d %d\n", x, y);
			dfs(x, y, l, layer);
			break;
		}
	}
}
void TMXLayerUtil::Init_Map(cocos2d::TMXLayer *layer, Size tilesize) {


	const float width = tilesize.width/2;
	const float height = tilesize.height-60; //실제 보여지는 타일 크기
	int even_y = -1;
	int odd_y = -1;
	
	layer->tileAt(ccp(0, 0));
	for (int y = 0; y < ROWS; y++) //initcol, initrow 를 기준으로 맵 좌표*타일크기들 각각 해서 계산.
	{
		float initcol = width; // 0,0 좌표
		float initrow = height;
		if (y % 2!=0) //y좌표가 홀수 짝수냐에 따라 시작 기준 위치 틀림.
		{
			initcol = width * 2; // 0,1 좌표
			initrow = height + (tilesize.height / 2);
			odd_y++;
		}
		else
		{
			even_y++;
		}
		for (int x = 0; x < COLS; x++)
		{
			coordMap[y][x].x = (x*(tilesize.width))+initcol;
			coordMap[y][x].y = realHeight-(((y%2==0?even_y:odd_y)*tilesize.height)+initrow);
			//타일맵과 코코스 대응 좌표가 틀리므로 realHeight(약 1000)에서 게산한 y좌표값 빼줌

			if (layer->tileGIDAt(Vec2((float)x, (float)y)) == 4) //PASS
			{
				map[y][x] = 0;
			}
			else //NON-PASS
			{
				map[y][x] = 1;
			}
		}
	}

}


void TMXLayerUtil::SetTestPath(Point End, Point Start, cocos2d::TMXLayer *layer,Size tilesize)
{
	Init_Map(layer, tilesize);

	bfs(End,Start);
	dfs(End.x, End.y, map[(int)End.y][(int)End.x], layer);

	layer->setTileGID(6, Vec2((float)Start.x, (float)Start.y));
	layer->setTileGID(7, Vec2((float)End.x, (float)End.y));
}
void TMXLayerUtil::SetTestArea(Point Coords, int size, cocos2d::TMXLayer *layer, Size tilesize)
{
	Init_Map(layer, tilesize);

	showArea(Coords, size, layer);

	layer->setTileGID(6, Vec2((float)Coords.x, (float)Coords.y));
}
void TMXLayerUtil::SetTestMove(Point Coords, cocos2d::TMXLayer *layer, Size tilesize, cocostudio::Armature* armature)
{
	Init_Map(layer, tilesize);

	moveTo(Coords, armature, tilesize, layer);

}
