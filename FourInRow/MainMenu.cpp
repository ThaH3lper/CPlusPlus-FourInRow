#include "MainMenu.h"

GUI::MainMenu::MainMenu()
{
	howto = new HowTo();
	about = new About();
	settingsWindow = new SettingsWindow();
	//controller = new General::Controller();
	ShowMenu();
}

void GUI::MainMenu::ShowMenu()
{	
	int input = 0;
	while (input != 4)
	{
		std::cout << "Menu:" << std::endl << "1. Play" << std::endl << "2. How to play" << std::endl << "3. About" << std::endl << "4. Exit" << std::endl;
		std::cin >> input;
		if (input == 1)
		{

		}
		else if (input == 2)
			howto->PrintHowTo();
		else if (input == 3)
			about->ShowAbout();
		system("cls");
	}
}

void GUI::MainMenu::StartGame()
{
}
