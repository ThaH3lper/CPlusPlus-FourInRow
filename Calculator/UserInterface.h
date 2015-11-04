#pragma once
#include <iostream>
#include <string>

using namespace std;

class UserInterface
{
private:
	char readLine();
	int readInt();
public:
	UserInterface() = default;
	int getIntegerA();
	int getIntegerB();
	char getOperation();
	void setAnswer(int result);
	char getOneMoreTime();

	~UserInterface();
};

