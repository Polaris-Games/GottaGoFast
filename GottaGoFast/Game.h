#pragma once
#include "pch.h"
#include "GameBoard.h"
class Game
{
public:
	Game();
	~Game();
	// The main game loop
	void runGame();
	void performTurn();
private:
	GameBoard gameBoard;
	int whiteScore;
	int blackScore;
	bool blacksTurn;
};

