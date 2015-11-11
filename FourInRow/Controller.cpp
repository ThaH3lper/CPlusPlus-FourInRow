#include "Controller.h"

General::Controller::Controller()
{
}

General::Controller::Controller(Settings* settings)
{
	this->settings = settings;
	board = new Board(settings->columns, settings->rows);
	boardPanel = new GUI::BoardPanel();
	switch (settings->gameType)
	{
	case 1:
		playerA = new Human(settings->playerA, 'O');
		playerB = new Human(settings->playerB, 'X');
		break;
	case 2:
		playerA = new Human(settings->playerA, 'O');
		playerB = new Ai(settings->playerB, 'X', board);
		break;
	case 3:
		playerA = new Ai(settings->playerA, 'O', board);
		playerB = new Ai(settings->playerB, 'X', board);
		break;
	case 4:
		playerA = new Human(settings->playerA, 'O');
		playerB = new Remote(settings->playerB, 'X');
		break;
	case 5:
		playerA = new Ai(settings->playerA, 'O', board);
		playerB = new Remote(settings->playerB, 'X');
		break;
	default:
		break;
	}
	Player* currentPlayer = playerA;
	if (settings->startingPlayer == 1)
		currentPlayer = playerB;

	int xMove = 0, yMove = 0;
	while (!CalculateWin(xMove, yMove))
	{
		if (currentPlayer == playerA)
			currentPlayer = playerB;
		else
			currentPlayer = playerA;

		do {
			system("cls");
			boardPanel->DrawField((*board));
			xMove = currentPlayer->GetMove();
		} while (!MakeMove(xMove, (*currentPlayer)));

		yMove = board->SetSquare(xMove, currentPlayer->symbol);
	}
	system("cls");
	boardPanel->DrawField((*board));
	system("pause");
}

bool General::Controller::MakeMove(int x, Player& player)
{
	if (x >= 0 && x < board->field[0].size())
	{
		if (board->field[0][x] == '-')
			return true;
	}
	return false;
}

bool General::Controller::CalculateWin(int x, int y)
{
	if (CheckPath(x, y, 1, 0)) return true;
	if (CheckPath(x, y, 1, 1)) return true;
	if (CheckPath(x, y, 0, 1)) return true;
	if (CheckPath(x, y, -1, 1)) return true;
	if (CheckPath(x, y, -1, 0)) return true;
	if (CheckPath(x, y, -1, -1)) return true;
	if (CheckPath(x, y, 0, -1)) return true;
	if (CheckPath(x, y, 1, -1)) return true;
	return false;
}

bool General::Controller::CheckPath(int x, int y, int xDir, int yDir)
{
	char symbol = board->field[y][x];
	int amount = 0;
	while (board->field[y][x] == symbol)
	{
		amount++;
		x += xDir;
		y += yDir;
		if (y < 0 || y >= settings->rows || x < 0 || x >= settings->columns)
			break;
		if (symbol == '-')
			break;
	}
	if (amount >= settings->winAmount)
		return true;
	return false;
}

void General::Controller::PrintText(std::string str)
{
}
