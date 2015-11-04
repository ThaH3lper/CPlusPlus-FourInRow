#pragma once
#include <string>

/*
 * The “Settings”-class is used when setting up a new game. Things such as offline vs. online, winning conditions, amount of columns and more. It contains all the data necessary to make a new game.
 */

namespace General
{
	class Settings
	{
	public:
		/*Constructor
		*/
		Settings();

		std::string playerA;
		std::string playerB;
		int gameType;
		int columns;
		int rows;
		int winAmount;
		int startingPlayer;
	};
}

