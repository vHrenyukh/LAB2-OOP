#include "Controller.h"

Controller::Controller(Engine engine, int timeBeforeOff)
{
	this->engine = engine;
	this->timeBeforeOff = timeBeforeOff;
}

void Controller::turnOn()
{
	cout << "Engine has started with " << engine.getSpeed() << " speed."<< endl;
	
	engine.setState(true);
}

void Controller::turnOff()
{
	cout << "Engine has stoped!" << endl;
	engine.setState(false);
}

void Controller::run()
{
	turnOn();
	while (timeBeforeOff > 0) {
		std::this_thread::sleep_for(1s);
		timeBeforeOff--;
	}
	turnOff();

}

void Controller::setRotatingSpeed(int speed)
{
	engine.changeSpeed(speed);
}

void Controller::setTimeBeforeOff(int timeBeforeOff)
{
	this->timeBeforeOff = timeBeforeOff;
}

Controller::Controller()
{

}

