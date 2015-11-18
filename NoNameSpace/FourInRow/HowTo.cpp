#include "HowTo.h"

HowTo::HowTo()
{
	howtoText = "Press Play and play in the main menu, easy like 1 2 3!";
}

void HowTo::PrintHowTo()
{
	system("cls");
	std::cout << howtoText << std::endl << std::endl;
	system("pause");
}
