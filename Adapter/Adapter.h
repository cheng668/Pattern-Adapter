#pragma once
#include "Target.h"
#include "CAdaptee.h"
class OAdaptee;
class Adapter :
	public Target, private CAdaptee
{
public:
	Adapter(OAdaptee* oa = nullptr);
	virtual ~Adapter();
	// ʵ���������ӿڣ�ͨ��
	virtual void Request();
private:
	// ��������
	virtual void VirRequest();
private:
	// ����������
	OAdaptee* _oa;
};

