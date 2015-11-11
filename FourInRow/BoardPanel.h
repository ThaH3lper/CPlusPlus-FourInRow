#pragma once
#include "Board.h"
#include <stdlib.h>
#include <iostream>
#include <string>

namespace GUI
{
	/*
	* The “Boardpanel” class is the class which draws the board, the pieces on it, as well as marking the last move.
	*/
	class BoardPanel
	{
	public:
		/*Constructor
		*/
		BoardPanel();

		/*Draws the field
		* @param Input the board you want to draw.
		*/
		void DrawField(const General::Board& board);

		/*Draws the last move made with a different icon
		* @param x: the X coordinate
		* @param y: the Y coordinate
		*/
		void DrawLastMove(int x, int y);

		/*Returns the column which a user pressed
		* @returns X value for column.
		*/
		int GetClickedColumn();

	private:
		BoardPanel(const BoardPanel& that);
		BoardPanel& operator = (const BoardPanel& that);
	};
}

