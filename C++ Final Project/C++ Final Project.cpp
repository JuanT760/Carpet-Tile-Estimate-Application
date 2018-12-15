// C++ Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Final Project - By Juan Toscano, on 12/08/2018

#include "pch.h"
#include "Estimate.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//NUMBER OF USERS
const int numOFusers = 3;

struct date {
	int day;
	string month;
	int year;
};

//PROTOTYPE
date input();

int main()
{
	string user[3] = { { "Juan" }, { "Adrian" }, { "Carlos" } };
	string pass[3] = { {"pass1"}, {"pass2"}, {"pass3"} };

	//Print users
	for (int i = 0; i < 3; i++)
	{
		cout << "Option " << i << " ";
		cout << user[i];
		cout << endl;
	}

	//Input for login.
	string inUSER;
	string inPASS;

	//**CHECK IF ID WAS USED**
	int ID = 0;
	int choice = 0;

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
			ID = 0;
			cout << "Welcome: " << user[y];
			cout << endl;

			Estimate m;
			m.printMenu();
			/*m.getMenu(choice);*/

			//Repeat selection
			m.selection(choice);

			cout << "Do you want to make another estimate? (Y/N): ";
			cin >> x;

			while (x == 'y' || x == 'Y')
			{
				m.printMenu();
				m.selection(choice);
				
				cout << "Do you want to make another estimate? (Y/N): ";
				numOfEstimates++;
				cin >> x;

				//Display the counter **DELETE?**
				cout << "The estimates made: " << numOfEstimates << endl;
			}
			//END
			cout << "\tUser: " << user[y] << "\tMade " << numOfEstimates << " estimates."
				<< "\nFor record purposes ";

			date d;

			d = input();
			
			//Write to file.
			ofstream counter_record("records.txt", ios_base::app);
			counter_record << "\tUser: " << user[y] << "\tMade " << numOfEstimates << " estimates on " << d.day << " " << d.month << " " << d.year << endl;
			counter_record.close();

			cout << "Thanks for making estimates, your record has been saved!";
			}
		}
	}

date input()
{
	date newDate;
	cout << "Please enter the current day: ";
	cin >> newDate.day;
	cout << endl;

	cout << "Please enter the current month: ";
	cin >> newDate.month;
	cout << endl;

	cout << "Please enter the current year: ";
	cin >> newDate.year;
	cout << endl;

	return newDate;

}