#include "Controller.h"


Controller::Controller()
{
	aCalculator = Calculater();
	aUserInterface = UserInterface();
}

void Controller::mainLoop()
{
	do
	{
		integerA.value = aUserInterface.getIntegerA();

		integerB.value = aUserInterface.getIntegerB();

		char operation = aUserInterface.getOperation();

		calculate(operation);

		aUserInterface.setAnswer(integerAnswer.value);


	} while (aUserInterface.getOneMoreTime() == 'y');

}

void Controller::calculate(char operation)
{
	if (operation == '+')
		integerAnswer = aCalculator.add(integerA, integerB);
	else if (operation == '-')
		integerAnswer = aCalculator.subtract(integerA, integerB);
	else if (operation == '*')
		integerAnswer = aCalculator.multiply(integerA, integerB);
	else if (operation == '/')
		integerAnswer = aCalculator.divide(integerA, integerB);
}


Controller::~Controller()
{
}
