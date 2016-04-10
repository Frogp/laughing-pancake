#ifndef __INGAMEHUDEX_H__
#define __INGAMEHUDEX_H__

#include "cocos2d.h"
#include "JobInterface.h"

USING_NS_CC;
using namespace cocos2d;
using namespace ui;

class ArdaClient
{
private:
	static ArdaClient* instance;
public:
	ArdaClient();

	Vector<JobInterface*> vecJob;

	void Init();
	static ArdaClient* GetInstace();

};

#endif // __INGAMEHUDEX_H__