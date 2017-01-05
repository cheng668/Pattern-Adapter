#pragma once
class CAdaptee
{
public:
	CAdaptee();
	~CAdaptee();
	void CSpecificRequest();
	virtual void VirRequest() = 0;
};

