#include "Board.h"

General::Board::Board(int columns, int rows)
{
	field = std::vector<std::vector<char>>(rows, std::vector<char>(columns));
	for (int y = 0; y < field.size(); y++)
	{
		for (int x = 0; x < field[y].size(); x++)
			field[y][x] = '-';
	}
}

int General::Board::SetSquare(int x, char c)
{
	int y = field.size() - 1;
	while (field[y][x] != '-')
		y--;
	field[y][x] = c;
	return y;
}

bool General::Board::IsValidMove()
{
	return false;
}
