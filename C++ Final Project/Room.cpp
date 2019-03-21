#include "pch.h"
#include "Room.h"

Room::Room()
{
	length = 0, width = 0;
}

void Room::setLength(double len)
{
	length = len;
}

void Room::setWidth(double with)
{
	width = with;
}

double Room::getWidth()
{
	return width;
}

double Room::getLength()
{
	return length;
}

Room Room::operator+(Room& otherRoom)
{
	Room otherRoom01;
	otherRoom01.length = this->length + otherRoom.length;
	otherRoom01.width = this->width + otherRoom.width;

	return otherRoom01;
}

double Room::getSqFtCost()
{
	return length * width * .20;
}
