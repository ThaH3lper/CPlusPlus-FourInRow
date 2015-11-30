#pragma once
#include <string>

class BoardFullException
{
public:
	/*Construktor
	*/
	BoardFullException();

	std::string errorMsg;
};