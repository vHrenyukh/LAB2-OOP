#pragma once
#include "Fan.h"


class RemoteController
{
	Fan fan;
	
public:
	RemoteController();
	void setRotatingSpeed();
	void setTimeBeforeOff();
	void startFan();
};

