#pragma once
#include "JobInterface.h"
class JobExample :
	public JobInterface
{
public:
	void Process() override;
};

