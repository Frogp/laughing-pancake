#pragma once
#include "JobInterface.h"
#include "ArdaClient.h"

class JobLoadInGameText :
	public JobInterface
{
public:
	void Process() override;
};

