#include "Human.h"

Human::Human(std::string name, char symbol):Player(name, symbol)
{
}

int Human::GetMove()
{
	std::cout << "Type column " << name << ": ";
	int i; 
	std::cin >> i;
	return i;
}
