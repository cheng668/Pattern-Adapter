#include "CAdaptee.h"
#include <iostream>

CAdaptee::CAdaptee()
{
}


CAdaptee::~CAdaptee()
{
}

void CAdaptee::CSpecificRequest()
{
	std::cout << "CAdaptee::CSpecificRequest" << std::endl;
}
