#pragma once
#include <string>
#include <thread>
#include "Client.h"


/*
* The �Server� class is used when the game mode is set to multiplayer online. It�s function is to send packages between clients.
*/
class Server
{
public:

	/* Constructor.
	 */
	Server();

	/* Listens for packages from clients and send them back to clients.
	 */
	void PackageListener();

private:

	std::string ip;
	int port;
	std::string ipClientA;
	std::string ipClientB;

	Server(const Server& that);
	Server& operator = (const Server& that);
};

