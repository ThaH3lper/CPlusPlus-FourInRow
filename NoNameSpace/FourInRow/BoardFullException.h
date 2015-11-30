#pragma once
#include <string>

class BoardFullException
{
public:

	/*Construktor
	*/
	BoardFullException();

	//The error message to catch and print!
	std::string errorMsg;
};