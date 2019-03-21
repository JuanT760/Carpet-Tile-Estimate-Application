#include "pch.h"
#include "Estimate.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int input;

Estimate::Estimate()
{
	choice = 0;
	grandTotal = 0;
	cBed = 40, cLiving = 70, cBath = 10;
	tBed = 70, tLiving = 120, tBath = 15;
}

void Estimate::printMenu()
{
	system("CLS");
	cout << setfill('-') << setw(20) << "-" << endl;
	cout << "Menu selection: " << endl;
	//Carpet Module
	cout << "1: Carpet Bedroom" << endl;
	cout << "2: Carpet Living Room" << endl;
	cout << "3: Carpet Bathroom" << endl << endl;
	//Tile Module
	cout << "4: Tile Bedroom" << endl;
	cout << "5: Tile Living Room" << endl;
	cout << "6: Tile Bathroom" << endl << endl;
	//Other Module
	cout << "9: Other" << endl;
	//Record Module
	cout << "10: Job Scheduled" << endl;
	cout << setfill('-') << setw(20) << "-" << endl;
}


int Estimate::getChoice()
{
	return choice;
}

void Estimate::setChoice(int passingBY)
{
	string errorMsg = "Please select something from the menu";
	try
	{
	choice = passingBY;
	if (choice > 10)
		throw errorMsg;
	else if (!cin)
		throw string("Invalid input was made.");
	}
	catch (string s)
	{
		cout << s << endl;
	}
}

void Estimate::carpetMenu()
{
	switch (choice)
	{
	case 1:
		cout << "How many (carpet)bedrooms will be cleaned today?" << endl;
		cin >> input;
		cout << "The total will be: ";
		cout << "$" << input * cBed << endl << endl;
		grandTotal += input * cBed;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;

		break;
	case 2:
		cout << "How many (carpet)living rooms will be cleaned today?" << endl;
		cin >> input;
		cout << "The total will be: ";
		cout << "$" << input * cLiving << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		grandTotal += input * cLiving;
		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		break;
	case 3:
		cout << "How many (carpet)bathrooms will be cleaned today?" << endl;
		cin >> input;
		cout << "The total will be: ";
		cout << "$" << input * cBath << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		grandTotal += input * cBath;
		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		break;
	}
}

void Estimate::tileMenu()
{
	switch (choice)
	{
	case 4:
		cout << "How many (tile) bedrooms will be cleaned today?" << endl;
		cin >> input;
		cout << "The total will be: ";
		cout << "$" << input * tBed << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		grandTotal += input * tBed;
		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		break;
	case 5:
		cout << "How many (tile)living rooms will be cleaned today?" << endl;
		cin >> input;
		cout << "The total will be: ";
		cout << "$" << input * cLiving << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		grandTotal += input * tLiving;
		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		break;
	case 6:
		cout << "How many (tile)bath will be cleaned today?" << endl;
		cin >> input;
		cout << "The total will be: ";
		cout << "$" << input * tBath << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		grandTotal += input * cLiving;
		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
		cout << setfill('*') << setw(25) << "*" << endl << endl;
		break;
	}
}

void Estimate::otherMenu()
{
	string inputOther;
	switch (choice)
	{
	case 9:
		cout << "Please input: \n";
		cin >> inputOther;
		if (inputOther == "cHouse" || inputOther == "chouse" || inputOther == "CarpetHouse" || inputOther == "carpethouse" || inputOther == "CarpetHome" || inputOther == "carpethome")
		{
			//2 Bedrooms + 1 Living + 1 Bath
			int House;
			House = (cBed * 2) + cLiving + cBath;
			//Display
			cout << "You selected: " << "Carpet Home" << endl << "Your grand total will be updated: " << endl;
			cout << setfill('*') << setw(25) << "*" << endl << endl;
			grandTotal += House;
			cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
			cout << setfill('*') << setw(25) << "*" << endl << endl;
			break;
		}

		else if (inputOther == "tHouse" || inputOther == "thouse" || inputOther == "TileHouse" || inputOther == "tilehouse" || inputOther == "TileHome" || inputOther == "tilehome")
		{
			//2 Bedrooms + 1 Living + 1 Bath
			int House;
			House = (tBed * 2) + tLiving + tBath;
			//Display
			cout << "You selected: " << "Carpet Home" << endl << "Your grand total will be updated: " << endl;
			cout << setfill('*') << setw(25) << "*" << endl << endl;
			grandTotal += House;
			cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
			cout << setfill('*') << setw(25) << "*" << endl << endl;
			break;
		}
		//Discount
		else if (inputOther == "Discount" || inputOther == "discount")
		{
			int discount = 0;
			cout << "Quick, whats the discount!";
			cin >> discount;
			cout << setfill('*') << setw(25) << "*" << endl << endl;
			grandTotal -= discount;
			cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
			cout << setfill('*') << setw(25) << "*" << endl << endl;
		}
		break;
	}
}

void Estimate::recordMenu()
{
	switch (choice)
	{
	case 10:

		int day;
		string month, user, time;
		int year;

		cout << "Please tell me who you are: ";
		cin >> user;
		cout << "Great job getting a job scheduled!";
		cout <<  "\nPlease enter the date the job was scheduled for(ex. Dec 8 2018): ";
		cin >> month >> day >> year;
		cout << "Also, please enter the agreed upon time(ex. 1:00 PM): ";
		cin >> time;
		ofstream jobsScheduled("Scheduled_Jobs.txt", ios_base::app);
		jobsScheduled << "The job was scheduled for " << month << " " << day << " " << year << " at " << time;
	}
}