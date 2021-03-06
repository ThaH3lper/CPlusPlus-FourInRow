#pragma once
#include "Player.h"
#include "Client.h"
#include "Server.h"
#include "Board.h"
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>


/*
* The �Remote� class is a subclass which inherits from the �Player� class. It sends data to the local client which can then be transmitted to a server.
*/
class Remote : public Player
{
public:

	/* Constructor.
	 */
	Remote(std::string name, char symbol, bool createServer);

	/* Deconstructor.
	 */
	~Remote() override;

	/* Gets move from remote.
	 * @return the players move.
	 */
	int GetMove() override;

	/* Send move to server.
	 * @param x: the column in x-axis.
	 */
	void SendMove(int x);

private:

	Server* server;
	Client* client;

	Remote(const Remote& that);
	Remote& operator = (const Remote& that);
};

