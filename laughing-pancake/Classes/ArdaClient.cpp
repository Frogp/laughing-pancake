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

	// �̷��� ����ó�� �߰� �ϼž��մϴ�
	JobInterface* Example = new JobExample();
	Example->autorelease(); //�ڵ� ���� Ǯ�� �߰�
	Example->retain(); // ���۷��� ī��Ʈ ����
	vecJob.pushBack(Example); //�������
	//////////////////////////////////////////

	//JobInterface* Example2 = new JobSomting();
	//Example2->autorelease();
	//Example2->retain();
	//vecJob.pushBack(Example2);

}

void ArdaClient::Init()
{
	//job ��ϵ� ������ ������.
	Vector<JobInterface*>::iterator bitor = vecJob.begin();
	while( bitor != vecJob.end())
	{
		JobInterface* node = *bitor;
		node->Process();
		node->release();
		bitor = vecJob.erase(bitor);
	}

}