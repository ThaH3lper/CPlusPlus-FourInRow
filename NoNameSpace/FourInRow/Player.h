#pragma once
#include <string>


/*
* The Player class is an abstract superclass. The other player classes, such as the “Human” subclass inherits from it.
*/
class Player
{
public:

	/* Constructor.
	 */
	Player(std::string name, char symbol);

	/* Deconstructor.
	 */
	virtual ~Player();

	/* Abstract method.
	 * @return the players move.
	 */
	virtual int GetMove();

	//Name of player
	std::string name;

	//The symbol the player has X or O.
	char symbol;

private:

	Player(const Player& that);
	Player& operator = (const Player& that);
};


