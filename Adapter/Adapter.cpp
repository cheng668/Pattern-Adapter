#include "Adapter.h"
#include "OAdaptee.h"
#include <iostream>

Adapter::Adapter(OAdaptee* oa) :_oa(oa)
{
}


Adapter::~Adapter()
{
}

void Adapter::Request()
{
	// ����������ֱ������˽�̳������Ľӿ�
	CSpecificRequest();
	VirRequest();
	// �������������ɵ����Ѵ��ڽӿڵ�����
	if (_oa) 
		_oa->OSpecificRequest();
}

// ����������˽�м̳У�������ʵ�����������е��麯��
void Adapter::VirRequest()
{
	std::cout<<"CAdaptee::VirRequest"<<std::endl;
}
