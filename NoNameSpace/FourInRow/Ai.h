#pragma once
#include "Player.h"
#include "Board.h"
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>


/*
*The “AI” class is a subclass from the “Player” which it inherits from. It’s used to generate moves for an A.I. Player.
*/
class Ai : public Player
{
public:

	/* Constructor.
	 */
	Ai(std::string name, char symbol, Board* board);

	/* Gets move that ai made.
	 * @return the move that the AI calculated.
	 */
	int GetMove() override;

private:

	Board* board;

	Ai(const Ai& that);
	Ai& operator = (const Ai& that);
};

