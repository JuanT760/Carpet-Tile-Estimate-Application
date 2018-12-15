#include "pch.h"
#include "Estimate.h"
#include <iostream>
#include <iomanip>
using namespace std;

Estimate::Estimate()
{
	cout << "Welcome to the estimate program, please choose something from the menu." << endl;
}

void Estimate::printMenu() const
{
	cout << setfill('-') << setw(20) << "-" << endl;
	cout << "Menu selection: " << endl;
	cout << "1: Carpet Bedroom" << endl;
	cout << "2: Carpet Living Room" << endl;
	cout << "3: Carpet Bathroom" << endl << endl;
	//Tile
	cout << "4: Tile Bedroom" << endl;
	cout << "5: Tile Living Room" << endl;
	cout << "6: Tile Bathroom" << endl << endl;
	//End
	cout << "9: Other" << endl;
	cout << "10: End program" << endl;
	cout << setfill('-') << setw(20) << "-" << endl;
}

//int Estimate::getMenu(int choice)
//{
//	cin >> choice;
//	return choice;
//}

void Estimate::selection(int choice)
{
	cin >> choice;

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
		cout << "How many (carpet)livingrooms will be cleaned today?" << endl;
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
	default:
		cout << "Not a valid choice\n" << "Please choose from the menu\n";
		cin >> choice;
		break;

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
		cout << "How many (tile)livingrooms will be cleaned today?" << endl;
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
	//case 9:
	//	cout << "Please input: \n";
	//	cin >> inputOther;

	//	if (inputOther == "cHouse" || inputOther == "chouse" || inputOther == "CarpetHouse" || inputOther == "carpethouse" || inputOther == "CarpetHome" || inputOther == "carpethome")
	//	{
	//		//2 Bedrooms + 1 Living + 1 Bath
	//		int House;
	//		House = (cBed * 2) + cLiving + cBath;

	//		//Display

	//		cout << "You selected: " << "Carpet Home" << endl << "Your grand total will be updated: " << endl;

	//		cout << setfill('*') << setw(25) << "*" << endl << endl;
	//		grandTotal += House;
	//		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
	//		cout << setfill('*') << setw(25) << "*" << endl << endl;
	//		break;
	//	}

	//	else if (inputOther == "tHouse" || inputOther == "thouse" || inputOther == "TileHouse" || inputOther == "tilehouse" || inputOther == "TileHome" || inputOther == "tilehome")
	//	{
	//		//2 Bedrooms + 1 Living + 1 Bath
	//		int House;
	//		House = (tBed * 2) + tLiving + tBath;

	//		//Display

	//		cout << "You selected: " << "Carpet Home" << endl << "Your grand total will be updated: " << endl;

	//		cout << setfill('*') << setw(25) << "*" << endl << endl;
	//		grandTotal += House;
	//		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
	//		cout << setfill('*') << setw(25) << "*" << endl << endl;
	//		break;
	//	}

	//	//Discount

	//	else if (inputOther == "Discount" || inputOther == "discount") 
	//	{
	//		int discount = 0;
	//		cout << "Quick, whats the discount!";
	//		cin >> discount;

	//		cout << setfill('*') << setw(25) << "*" << endl << endl;
	//		grandTotal -= discount;
	//		cout << "Your grand total is: " << "$" << grandTotal << endl << endl;
	//		cout << setfill('*') << setw(25) << "*" << endl << endl;
	//	}
	//	break;
	}
}

