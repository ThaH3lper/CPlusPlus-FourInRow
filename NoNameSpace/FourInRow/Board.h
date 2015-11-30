#pragma once
#include <stdlib.h>
#include <iostream>
#include <vector>

/*
* The “Board” class keeps track of the board and where all pieces have been placed. It also checks whether or not a move is valid.
*/
class Board
{
public:

	/* Construktor.
	 */
	Board(int columns, int rows);

	/* Sets the square to used.
	 * @param x: The x coordinate.
	 * @param c: The symbol to set.
	 */
	int SetSquare(int x, char c);

	/* Checks if received move is valid.
	 * @return True or false depending on received move.
	 */
	bool IsValidMove();

	//2D array for the game filed.
	std::vector<std::vector<char>> field;

private:

	Board(const Board& that);
	Board& operator = (const Board& that);
};


