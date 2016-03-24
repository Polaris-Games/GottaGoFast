#include "pch.h"
#include "Pebbles.h"
class GameBoard
{
public:
	GameBoard();
	~GameBoard();
	std::vector<std::vector<Pebbles>> getBoard();
	void setBoard(std::vector<std::vector<Pebbles>> newBoard);
	bool setPebbleAt(Pebbles pebble, unsigned int x, unsigned int y);
	std::string getDisplayableBoard();
private:
	std::vector<std::vector<Pebbles>> board;
};

