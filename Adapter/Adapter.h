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
	// 实现适配器接口，通用
	virtual void Request();
private:
	// 类适配器
	virtual void VirRequest();
private:
	// 对象适配器
	OAdaptee* _oa;
};

