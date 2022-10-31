#pragma once
#include "Controller.h"
class Fan
{
	Controller controller;
public:
	Fan(Controller controller);
	Controller& getController();
	Fan();
	
};

