#pragma once
#include <string>

/*
* The “Client” class is used for online multiplayer. It’s primary use is to send packages to the server.
*/
class Client
{
public:

	/* Constructor.
	 */
	Client();

	/* Sends move to server.
	 * @param x: sent x value.
	 */
	void SendMove(int x);

	/* Gets move from server.
	 * @Return move from server.
	 */
	int GetMove();

private:

	Client(const Client& that);
	Client& operator = (const Client& that);
};

