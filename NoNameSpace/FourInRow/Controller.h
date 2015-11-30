#pragma once
#include <string>
#include "Settings.h"
#include "Player.h"
#include "Board.h"
#include "BoardPanel.h"
#include "Human.h"
#include "Remote.h"
#include "Ai.h"
#include "BoardFullException.h"
#include <stdlib.h>
#include <iostream>

/*
* The “Game” class is the main class which connects the most of the classes. Its main functions is to transfer information between objects.
*/
class Controller
{
public:

	/*Constructor
	*/
	Controller();

	/* Deconstructor
	*/
	~Controller();

	/*Constructor
	* @param settings you want to use
	*/
	Controller(Settings* settings);

	/*Makes played move
	* @param x value of the played move
	* @return true if the move is valid.
	*/
	bool IsValideMove(int x);

	/*Prints text
	* @param prints received text
	*/
	void PrintText(std::string str);

private:

	/* Checks if any player have won the game.
	* @param x: the x-cordinate for the move.
	* @param y: the y-cordinate for the move.
	* @returns true or false depending on if anyone won.
	*/
	bool CalculateWin(int x, int y);

	/* Checks each path that is possible a win, horizontal, vertical, digonal...
	* @param x: the x-cordiante to cheack from.
	* @param y: the y-cordinate to cheack from.
	* @param xDir: the direction in x-axis.
	* @param yDir: the direction in y-axis.
	* @returns amount of symbols in row in that direction
	*/
	int CheckPath(int x, int y, int xDir, int yDir);

	/*Cheacks if the board is full or not. Casts a BoardFullException if it's full.
	*/
	void IsBoardFull();

	Player* playerA;
	Player* playerB;
	Board* board;
	BoardPanel* boardPanel;
	Settings* settings;

	Controller(const Controller& that);
	Controller& operator = (const Controller& that);
};

