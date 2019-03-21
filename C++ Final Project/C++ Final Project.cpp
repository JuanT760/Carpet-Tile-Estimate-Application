// C++ Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Final Project - By Juan Toscano, on 12/08/2018

#include "pch.h"
#include "LoginSys.h"
#include "Room.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Prototype
void groupModules();
void overLoad();
//Class decleration
LoginSys bo;

int main()
{
	overLoad();
	//Input for login.
	string inUSER;
	string inPASS;
	//While condition
	char x = 'x';
	//Estimate Counter
	int numOfEstimates = 1;
	//Print users.
	bo.printUsers();
	//Prompt user for username && password.
	cout << "Who is the user: ";
	cin >> inUSER;
	cout << "What is the password: ";
	cin >> inPASS;
	bo.logicTest(inUSER, inPASS);
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
	cout << "Thanks for making estimates, your record has been saved!";
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

void overLoad()
{
	Room su0;
	su0.setLength(30);
	su0.setWidth(10);
	Room su1;
	su1.setLength(10);
	su1.setWidth(15);
	Room su2;
	su2 = su0 + su1;
	cout << "$" << su2.getSqFtCost();
}