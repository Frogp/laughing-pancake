#include "ArdaClient.h"
#include "JobExample.h"
#include "JobLoadInGameText.h"

ArdaClient* ArdaClient::instance;

ArdaClient* ArdaClient::GetInstace()
{
	if (ArdaClient::instance == NULL)
	{
		ArdaClient::instance = new ArdaClient();
	}

	return ArdaClient::instance;
}

ArdaClient::ArdaClient()
{

	JobInterface* Example = new JobExample();
	Example->autorelease();
	Example->retain(); 
	vecJob.pushBack(Example); 
	//////////////////////////////////////////

	JobInterface* Example = new JobLoadInGameText();
	Example->autorelease();
	Example->retain(); 
	vecJob.pushBack(Example); 
	//////////////////////////////////////////

	//JobInterface* Example2 = new JobSomting();
	//Example2->autorelease();
	//Example2->retain();
	//vecJob.pushBack(Example2);

}

void ArdaClient::Init()
{
	//job µÓ∑œµ» µø¿€¿ª ¡¯«‡«‘.
	Vector<JobInterface*>::iterator vistor = vecJob.begin();
	while( vistor != vecJob.end())
	{
		JobInterface* node = *vistor;
		node->Process();
		node->release();
		vistor = vecJob.erase(vistor);
	}

}