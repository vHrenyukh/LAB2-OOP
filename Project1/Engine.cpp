#include "Engine.h"

bool Engine::isTurnedOn()
{
	return turnedOn;
}

void Engine::changeSpeed(int speed)
{
	this->speed = speed;
}

void Engine::setState(bool state)
{
	this->turnedOn = state;
}

Engine::Engine()
{
	turnedOn = false;
	speed = 0;
}

int Engine::getSpeed()
{
	return speed;
}
