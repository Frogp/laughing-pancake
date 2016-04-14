#ifndef __JOBINTERFACE_H__
#define __JOBINTERFACE_H__

#include "cocos2d.h"


class JobInterface :
	public cocos2d::Ref
{
public:
	virtual void Process() = 0;
};

#endif // __JOBINTERFACE_H__