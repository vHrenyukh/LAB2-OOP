#pragma once
class Engine
{
	bool turnedOn;
	int speed;
	
public:
	bool isTurnedOn();
	void changeSpeed(int speed);
	void setState(bool state);
	Engine();
	int getSpeed();
};

