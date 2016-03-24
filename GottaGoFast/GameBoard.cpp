#include "GameBoard.h"


// Initializes stuff.
GameBoard::GameBoard():board(19, std::vector<Pebbles>(19, Pebbles::Blank))
{
	//TODO: Initialize stuff here
}

// Unless you are really pedantic about memory, you need not worry what this does.
GameBoard::~GameBoard()
{
	//TODO: No one ever uses destructors, fuck off.
}

// Returns the instance of the board.
std::vector<std::vector<Pebbles>> GameBoard::getBoard()
{
	return this->board;
}

// Never actually use this, it's a stupid method
void GameBoard::setBoard(std::vector<std::vector<Pebbles>> newBoard)
{
	this->board = newBoard;
}

// Sets the pebble at the specified place on the board
// Uses unsigned because I don't want to add in more conditionals.
// Returns true if it successfully set the pebble
// Returns false if the specified index is not blank.
bool GameBoard::setPebbleAt(Pebbles pebble, unsigned int x, unsigned int y)
{
	if (this->board[y][x] != Pebbles::Blank || x > this->board[0].size() || y > this->board.size())
		return false;
	this->board[y][x] = pebble;
	return true;
}

std::string GameBoard::getDisplayableBoard()
{
	std::string theBoard = "";
	for (auto row : this->board)
	{
		for (auto column : row)
		{
			switch (column)
			{
			case Pebbles::Black:
				theBoard += "B";
				break;
			case Pebbles::White:
				theBoard += "W";
				break;
			default:
				theBoard += "*";
				break;
			}
		}
		theBoard += "\n";
	}
	return theBoard;
}
