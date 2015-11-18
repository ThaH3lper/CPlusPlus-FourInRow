#include "Player.h"

General::Player::Player(std::string name, char symbol)
{
	this->name = name;
	this->symbol = symbol;
}

int General::Player::GetMove()
{
	return 0;
}
