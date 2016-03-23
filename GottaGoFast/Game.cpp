#include "Game.h"



Game::Game()
{
	whiteScore = 0;
	blackScore = 0;
	blacksTurn = true;
}


Game::~Game()
{
}


// The main game loop
void Game::runGame()
{
	bool exit = false;
	while (!exit)
	{
		system("cls");
		for (auto thing : this->gameBoard.getBoard())
		{
			for (auto foo : thing)
			{
				switch (foo)
				{
				case Pebbles::Black:
					std::cout << "B";
					break;
				case Pebbles::White:
					std::cout << "W";
					break;
				default:
					std::cout << "*";
					break;
				}
			}
			std::cout << std::endl;
		}
		performTurn();
	}
}

void Game::performTurn()
{
	top:
	Pebbles peb = this->blacksTurn ? Pebbles::Black : Pebbles::White;
	std::cout << "Enter Coordinate(ex: 2 3): ";
	int x, y;
	std::cin >> x >> y;
	if (this->gameBoard.setPebbleAt(peb, x, y))
		std::cout << "Next player's turn...\n";
	else {
		std::cout << "Invalid move, try again.\n";
		goto top;
	}
	blacksTurn = !blacksTurn;
}
