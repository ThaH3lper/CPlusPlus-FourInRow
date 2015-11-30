#include "MainMenu.h"

MainMenu* mainMenu;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	mainMenu = new MainMenu();
	delete mainMenu;
	return 0;
}