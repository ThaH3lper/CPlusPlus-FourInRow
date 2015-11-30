#include "Controller.h"

Controller::Controller()
{
}

Controller::~Controller()
{
	delete playerA;
	delete playerB;
	delete board;
	delete boardPanel;
	delete settings;
	settings = nullptr;
}

Controller::Controller(Settings* settings)
{
	this->settings = settings;
	board = new Board(settings->columns, settings->rows);
	boardPanel = new BoardPanel();
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
		playerB = new Remote(settings->playerB, 'X', true);
		break;
	case 5:
		playerA = new Ai(settings->playerA, 'O', board);
		playerB = new Remote(settings->playerB, 'X', true);
		break;
	default:
		break;
	}
	Player* currentPlayer = playerA;
	if (settings->startingPlayer == 1)
		currentPlayer = playerB;

	int xMove = 0, yMove = 0;
	bool draw = false;
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

		} while (!IsValideMove(xMove));

		yMove = board->SetSquare(xMove, currentPlayer->symbol);

		boardPanel->DrawLastMove(xMove, yMove);
		
		try{
			IsBoardFull();
		}
		catch (BoardFullException exception){
			std::cout << exception.errorMsg << std::endl;
			draw = true;
			break;
		}
	}
	if (!draw)
	{
		system("cls");
		boardPanel->DrawField((*board));
		PrintText("Player " + currentPlayer->name + " Wins!");
	}
	system("pause");
}

void Controller::IsBoardFull()
{
	bool full = true;
	for (int i = 0; i < board->field[0].size(); i++)
	{
		if (IsValideMove(i))
			full = false;
	}
	if (full)
		throw BoardFullException();
}

bool Controller::IsValideMove(int x)
{
	if (x >= 0 && x < board->field[0].size())
	{
		if (board->field[0][x] == '-')
			return true;
	}
	return false;
}

bool Controller::CalculateWin(int x, int y)
{
	if (CheckPath(x, y, 1, 0) + CheckPath(x, y, -1, 0) - 1 >= settings->winAmount) return true;
	if (CheckPath(x, y, 1, 1) + CheckPath(x, y, -1, -1) - 1 >= settings->winAmount) return true;
	if (CheckPath(x, y, 0, 1) + CheckPath(x, y, 0, -1) - 1 >= settings->winAmount) return true;
	if (CheckPath(x, y, -1,1) + CheckPath(x, y, 1, -1) - 1 >= settings->winAmount) return true;
	return false;
}

int Controller::CheckPath(int x, int y, int xDir, int yDir)
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
	return amount;
}

void Controller::PrintText(std::string str)
{
	std::cout << str << std::endl;
}
