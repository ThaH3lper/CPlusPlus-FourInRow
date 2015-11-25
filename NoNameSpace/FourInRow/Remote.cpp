#include "Remote.h"

Remote::Remote(std::string name, char symbol, bool createServer) : Player(name, symbol)
{
	if (createServer)
		server = new Server();
	client = new Client();
}

int Remote::GetMove()
{
	return client->GetMove();
}

void Remote::SendMove(int x)
{
	client->SendMove(x);
}
