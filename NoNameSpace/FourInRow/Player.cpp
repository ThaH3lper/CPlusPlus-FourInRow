#include "Player.h"

Player::Player(std::string name, char symbol)
{
	this->name = name;
	this->symbol = symbol;
}

Player::~Player()
{

}

int Player::GetMove()
{
	return 0;
}
