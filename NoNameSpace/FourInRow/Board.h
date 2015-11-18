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
	/*Construktor
	*/
	Board(int columns, int rows);

	std::vector<std::vector<char>> field; //2D Array

	/* Sets the square to used
	* @param x: The x coordinate
	* @param y: The y coordinate
	*/
	int SetSquare(int x, char c);

	/*Checks if received move is valid
	* @return True or false depending on received move
	*/
	bool IsValidMove();

private:
	Board(const Board& that);
	Board& operator = (const Board& that);
};


