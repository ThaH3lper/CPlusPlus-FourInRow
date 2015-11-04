#pragma once
#include "Player.h"
#include "Client.h"
#include "Server.h"

namespace General
{
	/*
	* The “Remote” class is a subclass which inherits from the ”Player” class. It sends data to the local client which can then be transmitted to a server.
	*/
	class Remote :
		public General::Player
	{
	public:
		/*Constructor
		*/
		Remote();

		/*Gets move
		* @return the players move
		*/
		int GetMove() override;

	private:
		Network::Server* server;
		Network::Client* client;

		Remote(const Remote& that);
		Remote& operator = (const Remote& that);
	};
}

