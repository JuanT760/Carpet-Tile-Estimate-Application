#pragma once
class Estimate
{
public:
	Estimate();
	void printMenu() const;
	//int getMenu(int);

	void selection(int);

private:
	int choice;

	//Selection variables.
	int input = 0;
	double grandTotal = 0;
	const int  cBed = 40, cLiving = 70, cBath = 10;
	const int tBed = 70, tLiving = 120, tBath = 15;
	//string inputOther;
};

