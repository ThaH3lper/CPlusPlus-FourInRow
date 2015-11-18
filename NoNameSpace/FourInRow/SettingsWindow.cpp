#include "SettingsWindow.h"

SettingsWindow::SettingsWindow()
{
	settings = new Settings();
}

Settings* SettingsWindow::ShowSetting()
{
	system("cls");
	std::cout << "PlayerA name: " << std::endl;
	std::cin >> settings->playerA;
	std::cout << "PlayerB name: " << std::endl;
	std::cin >> settings->playerB;

	system("cls");
	std::cout << "GameType:" << std::endl;
	std::cout << "1. Human vs Human" << std::endl << "2. Human vs AI" << std::endl;
	std::cout << "3. AI vs AI" << std::endl << "4. Human vs Remote" << std::endl;
	std::cout << "5. AI vs Remote" << std::endl;
	std::cin >> settings->gameType;

	system("cls");
	std::cout << "Amount of Columns:" << std::endl;
	std::cin >> settings->columns;
	std::cout << "Anount of Rows:" << std::endl;
	std::cin >> settings->rows;
	std::cout << "Amount in row to win:" << std::endl;
	std::cin >> settings->winAmount;

	system("cls");
	std::cout << "Who starts?" << std::endl;
	std::cout << "1. " << settings->playerA << std::endl << "2. " << settings->playerB << std::endl;
	std::cin >> settings->startingPlayer;
	return settings;
}
