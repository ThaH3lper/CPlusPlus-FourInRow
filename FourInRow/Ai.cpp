#include "Ai.h"

General::Ai::Ai(std::string name, char symbol, Board* board) : Player(name, symbol)
{
	this->board = board;
}

int General::Ai::GetMove()
{
	srand(time(NULL));
	return rand() % board->field[0].size();
}
