#include <iostream>
#include "Controller.h"
using namespace std;

Controller* aController;

int main()
{
	aController = new Controller();
	aController->mainLoop();
	system("pause");
	return 0;
}