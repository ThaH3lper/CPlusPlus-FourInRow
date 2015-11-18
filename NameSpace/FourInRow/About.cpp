#include "About.h"

GUI::About::About()
{
}

void GUI::About::ShowAbout()
{
	system("cls");
	std::cout << "Four In Row!" << std::endl << "A school project by:" << std::endl << "Patrik Nilsson & Tim Lindstam" << std::endl << std::endl;
	system("pause");
}

