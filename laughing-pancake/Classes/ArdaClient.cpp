#include "ArdaClient.h"
#include "JobExample.h"

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

	// ¿Ã∑∏∞‘ øπ¡¶√≥∑≥ √ﬂ∞° «œº≈æﬂ«’¥œ¥Ÿ
	JobInterface* Example = new JobExample();
	Example->autorelease(); //¿⁄µø ∞¸∏Æ «Æø° √ﬂ∞°
	Example->retain(); // ∑°∆€∑±Ω∫ ƒ´øÓ∆Æ ¡ı∞°
	vecJob.pushBack(Example); //¡˝æÓ≥÷¿Ω
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