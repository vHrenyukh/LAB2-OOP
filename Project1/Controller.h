#pragma once
#include "Engine.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

using namespace std;
using namespace chrono_literals;
class Controller
{
	int timeBeforeOff;
	Engine engine;

public:
	Controller(Engine engine, int timeBeforeOff);
	void turnOn();
	void turnOff();
	void run();
	void setRotatingSpeed(int speed);
	void setTimeBeforeOff(int timeBeforeOff);
	
	Controller();

};

