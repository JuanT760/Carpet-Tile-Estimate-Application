#pragma once
class Estimate
{
public:
	//Constructor
	Estimate();
	//Print, gets, and sets passing var.
	void printMenu();
	int getChoice();
	void setChoice(int passingBY);
	//Modules
	void carpetMenu();
	void tileMenu();
	void otherMenu();
	void recordMenu();

private:
	//Main var.
	int choice;
	//Grand total
	double grandTotal;
	//Prices
	int  cBed, cLiving, cBath;
	int tBed, tLiving, tBath;
};