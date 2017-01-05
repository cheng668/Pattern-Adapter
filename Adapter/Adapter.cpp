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
	// 类适配器，直接运用私继承下来的接口
	CSpecificRequest();
	VirRequest();
	// 对象适配器，可调用已存在接口的子类
	if (_oa) 
		_oa->OSpecificRequest();
}

// 类适配器的私有继承，可用于实现类适配器中的虚函数
void Adapter::VirRequest()
{
	std::cout<<"CAdaptee::VirRequest"<<std::endl;
}
