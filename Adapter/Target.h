#pragma once

class Target
{
public:
	Target(){}
	virtual ~Target(){}
	virtual void Request() = 0;
private:

};

