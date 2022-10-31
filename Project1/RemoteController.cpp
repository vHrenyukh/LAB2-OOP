#include "RemoteController.h"


RemoteController::RemoteController()
{
	Engine engine = Engine();
	Controller controller = Controller(engine, 0);
	this->fan = Fan(controller);
}

void RemoteController::setRotatingSpeed()
{
	string enteredSpeed;
	cout << "Enter engine speed: ";
	getline(cin, enteredSpeed);
	fan.getController().setRotatingSpeed(stoi(enteredSpeed));

}

void RemoteController::setTimeBeforeOff()
{
	string enteredTime;
	cout << "Enter time of work (in seconds): ";
	getline(cin, enteredTime);
	fan.getController().setTimeBeforeOff(stoi(enteredTime));

}

void RemoteController::startFan()
{
	setRotatingSpeed();
	setTimeBeforeOff();
	fan.getController().run();
}
