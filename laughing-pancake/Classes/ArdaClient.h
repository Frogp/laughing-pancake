#ifndef __ARADACLIENT_H__
#define __ARADACLIENT_H__

#include "cocos2d.h"
#include "JobInterface.h"
#include "GameText.h"

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

	GameText m_GameText;


	
	const float speed = 1;

	void Init();
	static ArdaClient* GetInstace();

};

#endif // __ARADACLIENT_H__