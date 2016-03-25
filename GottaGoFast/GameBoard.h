#include "pch.h"
#include "Pebble.h"
class GameBoard
{
public:
	GameBoard();
	~GameBoard();
	std::vector<std::vector<Pebble>> getBoard();
	void setBoard(std::vector<std::vector<Pebble>> newBoard);
	bool setPebbleAt(Pebble pebble, unsigned int x, unsigned int y);
	std::string getDisplayableBoard();
private:
	std::vector<std::vector<Pebble>> board;
};

