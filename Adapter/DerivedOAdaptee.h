#pragma once
#include "OAdaptee.h"
class DerivedOAdaptee :
	public OAdaptee
{
public:
	DerivedOAdaptee();
	virtual ~DerivedOAdaptee();
	virtual void OSpecificRequest();
};

