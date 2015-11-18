#pragma once
#include "Player.h"
#include "Controller.h"
#include "BoardPanel.h"

/*
 * The “Human” class is a Subclass to the “Player” Superclass, which it inherits from. It’s used to track which column the player clicked on.
 */

namespace General
{
	class Human :
		public Player
	{
	public:
		/*Constructor
		*/
		Human(std::string name, char symbol);

		/*Gets move from boardpanel that player clicked
		* @return int value for move
		*/
		int GetMove() override;
	private:
		GUI::BoardPanel* boardPanel;

		Human(const Human& that);
		Human& operator = (const Human& that);
	};
}

