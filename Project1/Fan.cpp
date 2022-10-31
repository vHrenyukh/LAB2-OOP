#include "Fan.h"

Fan::Fan(Controller controller)
{
	this->controller = controller;

}

Controller& Fan::getController()
{
	return controller;
}

Fan::Fan()
{
}
