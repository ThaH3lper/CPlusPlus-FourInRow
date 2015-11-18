#pragma once
#include <string>

namespace Network
{
	/*
	* The “Client” class is used for online multiplayer. It’s primary use is to send packages to the server.
	*/
	class Client
	{
	public:
		/*Constructor
		*/
		Client();

		/*Sends move to server
		* @param x: sent x value
		* @param y: sent y value
		*/
		void SendMove(int x, int y);

		/*Gets move from server
		* @Return move from server
		*/
		int GetMove();

		/*Makes the game wait for an opponent
		* @return true or false depending on state of other player
		*/
		bool WaitForOpponent();

		/*Connects client to server
		* @param Server IP
		* @param Server port
		*/
		void Connect(std::string ip, int port);

	private:
		Client(const Client& that);
		Client& operator = (const Client& that);
	};
}

