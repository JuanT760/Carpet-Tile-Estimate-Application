// C++ Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Final Project - By Juan Toscano, on 12/08/2018

#include "pch.h"
#include "Estimate.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//NUMBER OF USERS
const int numOFusers = 3;
//Prototype
void groupModules();
Estimate bo;

int main()
{
	string user[3] = { { "Juan" }, { "Adrian" }, { "Carlos" } };
	string pass[3] = { {"pass1"}, {"pass2"}, {"pass3"} };

	cout << "\t\t\t" << setfill('=') << setw(30) << "=" << endl;
	//Print users
	for (int i = 0; i < 3; i++)
	{
		cout << "\t\t\tOption " << i << " ";
		cout << "\t\t" << user[i];
		cout << endl;
	}
	cout << "\t\t\t" << setfill('=') << setw(30) << "=" << endl;

	//Input for login.
	string inUSER;
	string inPASS;

	//Loop Var?
	char x = 'x';
	
	//Estimate Counter
	int numOfEstimates = 1;

	//Login
	cout << "Who is the user: ";
	cin >> inUSER;

	cout << "What is the password: ";
	cin >> inPASS;

	//Checks user & pass.
	for (int y = 0; y < numOFusers; y++)
	{
		if (inUSER == user[y] && inPASS == pass[y])
		{
			cout << "Welcome: " << user[y];
			cout << endl;
			groupModules();
			cout << "Do you want to make another estimate? (Y/N): ";
			cin >> x;

			while (x == 'y' || x == 'Y')
			{
				groupModules();
				cout << "Do you want to make another estimate? (Y/N): ";
				numOfEstimates++;
				cin >> x;
				cout << "The estimates made: " << numOfEstimates << endl;
			}
			cout << "\tUser: " << user[y] << "\tMade " << numOfEstimates << " estimates." << "\nFor record purposes ";
			cout << "Thanks for making estimates, your record has been saved!";
			}
		}
	}

void groupModules()
{
	int input01 = 0;
	bo.printMenu();
	cin >> input01;
	bo.setChoice(input01);
	bo.carpetMenu();
	bo.tileMenu();
	bo.otherMenu();
	bo.recordMenu();
}
