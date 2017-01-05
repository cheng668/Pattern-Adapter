#include "DerivedOAdaptee.h"
#include <iostream>

DerivedOAdaptee::DerivedOAdaptee()
{
}


DerivedOAdaptee::~DerivedOAdaptee()
{
}

void DerivedOAdaptee::OSpecificRequest()
{
	std::cout << "DerivedOAdaptee::OSpecificRequest" << std::endl;
}
