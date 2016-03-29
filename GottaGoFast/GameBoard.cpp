#include "GameBoard.h"


// Initializes stuff.
GameBoard::GameBoard():board(19, std::vector<Pebble>(19, Pebble()))
{
	//TODO: Initialize stuff here
}

// Unless you are really pedantic about memory, you need not worry what this does.
GameBoard::~GameBoard()
{
	//TODO: No one ever uses destructors, fuck off.
}

// Returns the instance of the board.
std::vector<std::vector<Pebble>> GameBoard::getBoard()
{
	return this->board;
}

// Never actually use this, it's a stupid method
void GameBoard::setBoard(std::vector<std::vector<Pebble>> newBoard)
{
	this->board = newBoard;
}

// Sets the pebble at the specified place on the board
// Uses unsigned because I don't want to add in more conditionals.
// Returns true if it successfully set the pebble
// Returns false if the specified index is not blank.
bool GameBoard::setPebbleAt(Pebble pebble, unsigned int x, unsigned int y)
{
	if (this->board[y][x].getPebbleType() != PebbleType::Blank || x > this->board[0].size() || y > this->board.size())
		return false;
	this->board[y][x] = pebble;
	return true;
}

std::string GameBoard::getDisplayableBoard()
{
	std::string theBoard = "";
	//std::ostringstream oss;
	/*
	for (auto row : this->board)
	{
		for (auto column : row)
		{
			switch (column.getPebbleType())
			{
			case PebbleType::Black:
				theBoard += "B";
				break;
			case PebbleType::White:
				theBoard += "W";
				break;
			default:
				theBoard += "*";
				break;
			}
			theBoard += " ";
		}
		theBoard += "\n";
	}
	/*/
	// I have to cast to an integer because board.size() is by default unsigned, meaning i can't
	// Actually compare it to -1 (atleast, not meaningfully)
	for (int i = -1; i < (int)this->board.size(); i++)
	{
		// I use the index 0 because otherwise it would try to find the 
		// negative first index and crash.
		for (int j = -1; j < (int)this->board[0].size(); j++)
		{
			if (i == -1 && j == -1)
			{
				theBoard += " ";
			}
			else if (i == -1)
			{
				theBoard += j < 10 ? '0' + j : 'A' + (j - 10);// +" ";
			}
			else if (j == -1)
			{
				theBoard += i < 10 ? '0' + i : 'A' + (i - 10);// +" ";
			}
			else
			{
				switch (this->board[i][j].getPebbleType())
				{
				case PebbleType::Black:
					theBoard += "B";
					break;
				case PebbleType::White:
					theBoard += "W";
					break;
				default:
					theBoard += "*";
					break;
				}
			}
			theBoard += " ";
		}

		theBoard += "\n";
	}
	//*/
	return theBoard;
}
