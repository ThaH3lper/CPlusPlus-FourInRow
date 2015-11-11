#include "Human.h"

General::Human::Human(std::string name, char symbol):Player(name, symbol)
{
}

int General::Human::GetMove()
{
	std::cout << "Type column " << name << ": ";
	int i; 
	std::cin >> i;
	return i;
}
