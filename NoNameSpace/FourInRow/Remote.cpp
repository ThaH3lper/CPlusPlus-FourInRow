#include "Remote.h"

Remote::Remote(std::string name, char symbol, bool createServer) : Player(name, symbol)
{
	if (createServer)
		server = new Server();
	client = new Client();
}
Remote::~Remote()
{
	if (server != nullptr)
		delete server;
	delete client;
}

int Remote::GetMove()
{
	return client->GetMove();
}

void Remote::SendMove(int x)
{
	client->SendMove(x);
}
