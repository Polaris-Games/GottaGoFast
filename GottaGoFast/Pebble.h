#pragma once
#include "pch.h"
enum PebbleType
{
	Blank,
	White,
	Black
};

class Pebble
{
public:
	// Creates an instance of a pebble
	Pebble::Pebble(PebbleType p = PebbleType::Blank){this->pebbleType = p;}
	~Pebble();
	PebbleType getPebbleType();
	void setPebbleType(PebbleType p);
private:
	PebbleType pebbleType;
};

