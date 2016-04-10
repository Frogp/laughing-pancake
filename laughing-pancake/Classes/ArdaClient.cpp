#include "ArdaClient.h"
#include "JobExample.h"

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

	// 이렇게 예제처럼 추가 하셔야합니다
	JobInterface* Example = new JobExample();
	Example->autorelease(); //자동 관리 풀에 추가
	Example->retain(); // 래퍼런스 카운트 증가
	vecJob.pushBack(Example); //집어넣음
	//////////////////////////////////////////

	//JobInterface* Example2 = new JobSomting();
	//Example2->autorelease();
	//Example2->retain();
	//vecJob.pushBack(Example2);

}

void ArdaClient::Init()
{
	//job 등록된 동작을 진행함.
	Vector<JobInterface*>::iterator bitor = vecJob.begin();
	while( bitor != vecJob.end())
	{
		JobInterface* node = *bitor;
		node->Process();
		node->release();
		bitor = vecJob.erase(bitor);
	}

}