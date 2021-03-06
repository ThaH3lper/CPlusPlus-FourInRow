#include "Ai.h"

Ai::Ai(std::string name, char symbol, Board* board) : Player(name, symbol)
{
	this->board = board;
}

int Ai::GetMove()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(501));
	srand(time(NULL));
	return rand() % board->field[0].size();
}
