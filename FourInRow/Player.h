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
		Player();

		/*Abstract method
		* @return the players move
		*/
		virtual int GetMove();

	protected:
		std::string name;

	private:
		Player(const Player& that);
		Player& operator = (const Player& that);
	};
}

