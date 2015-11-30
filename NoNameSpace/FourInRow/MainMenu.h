#pragma once
#include "SettingsWindow.h"
#include "About.h"
#include "HowTo.h"
#include "Controller.h"
#include <stdlib.h>
#include <iostream>

/*
* Creates the main menu, with different buttons. From here, players can navigate to a set-up screen and a how-to screen among other.
*/
class MainMenu
{
public:

	/* Constructor.
	 */
	MainMenu();

	/* Deconstructor.
	 */
	~MainMenu();

	/* Shows menu.
	 */
	void ShowMenu();

	/* Starts the game and creates a controller.
	 */
	void StartGame(Settings* settings);

private:

	HowTo* howto;
	About* about;
	SettingsWindow* settingsWindow;
	Controller* controller; 

	MainMenu(const MainMenu& that);
	MainMenu& operator = (const MainMenu& that);
};


