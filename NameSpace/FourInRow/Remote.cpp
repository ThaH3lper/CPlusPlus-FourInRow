#include "Remote.h"

General::Remote::Remote(std::string name, char symbol, bool createServer, Board* board) : Player(name, symbol)
{
	if (server)
		server = new Network::Server();
	client = new Network::Client();
	this->board = board;
}

int General::Remote::GetMove()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(501));
	srand(time(NULL));
	return rand() % board->field[0].size();
}
