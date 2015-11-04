#pragma once
#include <string>
#include "Settings.h"
#include "Player.h"
#include "Board.h"
#include "BoardPanel.h"
#include "MainMenu.h"

namespace General
{
	/*
	* The “Game” class is the main class which connects the most of the classes. Its main functions is to transfer information between objects.
	*/
	class Controller
	{
	public:
		/*Constructor
		*/
		Controller();

		/*Constructor
		* @param settings you want to use
		*/
		Controller(Settings settings);

		/*Makes played move
		* @param x value of the played move
		*/
		void MakeMove(int x);

		/*Checks if any player have won the game
		* @returns true or false depending on if anyone won
		*/
		bool CalculateWin();

		/*Prints text
		* @param prints received text
		*/
		void PrintText(std::string str);
	private:
		Player* playerA;
		Player* playerB;
		Board* board;
		GUI::BoardPanel* boardPanel;
		GUI::MainMenu* mainMenu;
		Settings* settings;

		Controller(const Controller& that);
		Controller& operator = (const Controller& that);
	};
}

