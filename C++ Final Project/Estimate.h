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
	//default
	void repeatMsg();

private:
	//Main var.
	int choice;
	//Grand total
	double grandTotal = 0;
	//Prices
	const int  cBed = 40, cLiving = 70, cBath = 10;
	const int tBed = 70, tLiving = 120, tBath = 15;
};

