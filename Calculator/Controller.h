#pragma once
#include "IntegerNumber.h"
#include "Calculater.h"
#include "UserInterface.h"

class Controller
{
private:
	IntegerNumber integerA;
	IntegerNumber integerB;
	IntegerNumber integerAnswer;
	Calculater aCalculator;
	UserInterface aUserInterface;

	void calculate(char operation);
public:
	Controller();
	void mainLoop();
	~Controller();
};

