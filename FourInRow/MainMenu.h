#pragma once
#include "SettingsWindow.h"
#include "About.h"
#include "HowTo.h"
#include "Controller.h"
#include <stdlib.h>
#include <iostream>

//namespace General {
//	class Controller;
//}

namespace GUI
{
	/*
	* Creates the main menu, with different buttons. From here, players can navigate to a set-up screen and a how-to screen among other.
	*/
	class MainMenu
	{
	public:
		/*Constructor
		*/
		MainMenu();

		/*Shows menu
		*/
		void ShowMenu();

		/*starts the game and creates a controller
		*/
		void StartGame();

	private:
		HowTo* howto;
		About* about;
		SettingsWindow* settingsWindow;
		General::Controller* controller; 

		MainMenu(const MainMenu& that);
		MainMenu& operator = (const MainMenu& that);
	};
}

