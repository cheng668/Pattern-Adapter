#include "Adapter.h"
#include "DerivedOAdaptee.h"
#include <iostream>
void main()
{
	DerivedOAdaptee* drvO = new DerivedOAdaptee;
	Adapter* adapter = new Adapter(drvO);

	adapter->Request();

	delete drvO;
	delete adapter;

	_CrtDumpMemoryLeaks();
	system("pause");
	return;
}

/*
output:
	CAdaptee::CSpecificRequest
	CAdaptee::VirRequest
	DerivedOAdaptee::OSpecificRequest
*/