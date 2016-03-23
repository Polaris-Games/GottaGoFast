#include "GameBoard.h"



GameBoard::GameBoard():board(19, std::vector<Pebbles>(19, Pebbles::Blank))
{
	//TODO: Initialize stuff here
}


GameBoard::~GameBoard()
{
	//TODO: No one ever uses destructors, fuck off.
}

std::vector<std::vector<Pebbles>> GameBoard::getBoard()
{
	return this->board;
}

void GameBoard::setBoard(std::vector<std::vector<Pebbles>> newBoard)
{
	this->board = newBoard;
}

// Sets the pebble at the specified place on the board
// Returns true if it successfully set the pebble
// Returns false if the specified index is not blank.
bool GameBoard::setPebbleAt(Pebbles pebble, unsigned int x, unsigned int y)
{
	if (this->board[y][x] != Pebbles::Blank || x > this->board[0].size() || y > this->board.size())
		return false;
	this->board[y][x] = pebble;
	return true;
}
