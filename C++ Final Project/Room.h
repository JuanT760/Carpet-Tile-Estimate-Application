#pragma once
class Room
{
public:
	Room();
	double getSqFtCost();
	void setLength(double len);
	void setWidth(double with);
	double getWidth();
	double getLength();
	
	Room operator+(Room& otherRoom);

private:
	double length, width;
};

