#include "UserInterface.h"

int UserInterface::getIntegerA()
{
	cout << "Integer A:" << endl;
	return readInt();
}

int UserInterface::getIntegerB()
{
	cout << "Integer B:" << endl;
	return readInt();
}

char UserInterface::getOperation()
{
	cout << "operation:" << endl;
	return readLine();
}

void UserInterface::setAnswer(int result)
{
	cout << result << endl;
}

char UserInterface::getOneMoreTime()
{
	cout << "one more time (y/n)?" << endl;
	return readLine();
}

char UserInterface::readLine()
{
	char aChar;
	cin >> aChar;
	return aChar;
}

int UserInterface::readInt()
{
	int input;
	cin >> input;
	return input;
}

UserInterface::~UserInterface()
{
}
