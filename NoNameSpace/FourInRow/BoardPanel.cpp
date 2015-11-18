#include "BoardPanel.h"

BoardPanel::BoardPanel()
{

}

void BoardPanel::DrawField(const Board& board)
{
	for (int x = 0; x < board.field[0].size(); x++)
	{
		std::cout << x;
		if (x < 10)
			std::cout << " ";
		std::cout << " ";
	}
	std::cout << std::endl << std::endl;

	for (int y = 0; y <board.field.size(); y++)
	{
		for (int x = 0; x < board.field[y].size(); x++)
		{
			std::cout << board.field[y][x];
			std::cout << "  ";
		}
		std::cout << std::endl;
	}
}

void BoardPanel::DrawLastMove(int x, int y)
{
}
