#pragma once
#include <string>

namespace General
{
	/*
	* The Player class is an abstract superclass. The other player classes, such as the “Human” subclass inherits from it.
	*/
	class Player
	{
	public:
		/*Constructor
		*/
		Player(std::string name, char symbol);

		/*Abstract method
		* @return the players move
		*/
		virtual int GetMove();

		std::string name;
		char symbol;
	private:
		Player(const Player& that);
		Player& operator = (const Player& that);
	};
}

