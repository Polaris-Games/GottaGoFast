#include "Pebble.h"


Pebble::~Pebble()
{
}

// Returns this instance's pebble type
PebbleType Pebble::getPebbleType()
{
	return this->pebbleType;
}

void Pebble::setPebbleType(PebbleType p)
{
	this->pebbleType = p;
}
