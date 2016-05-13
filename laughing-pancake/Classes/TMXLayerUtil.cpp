#include "TMXLayerUtil.h"

TMXLayerUtil * TMXLayerUtil::instance;

TMXLayerUtil::TMXLayerUtil()
{
}

TMXLayerUtil::~TMXLayerUtil()
{
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
		//maze[yc[pos]][xc[pos]] = lc[pos];
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
void TMXLayerUtil::Init_Map(cocos2d::TMXLayer *layer) {
	for (int y = 0; y < ROWS; y++)
	{
		for (int x = 0; x < COLS; x++)
		{
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


void TMXLayerUtil::SetTestPath(Point End, Point Start, cocos2d::TMXLayer *layer)
{
	Init_Map(layer);

	bfs(End,Start);
	dfs(End.x, End.y, map[(int)End.y][(int)End.x], layer);

	layer->setTileGID(6, Vec2((float)Start.x, (float)Start.y));
	layer->setTileGID(7, Vec2((float)End.x, (float)End.y));
}


