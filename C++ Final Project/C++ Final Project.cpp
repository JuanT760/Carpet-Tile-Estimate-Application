// C++ Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Final Project - By Juan Toscano, on 12/08/2018

#include "pch.h"
#include "LoginSys.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//NUMBER OF USERS
const int numOFusers = 3;
//Prototype
void groupModules();
//Class decleration
LoginSys bo;

int main()
{
	//Input for login.
	string inUSER;
	string inPASS;
	//While condition
	char x = 'x';
	//Estimate Counter
	int numOfEstimates = 1;
	//Login
	cout << "Who is the user: ";
	cin >> inUSER;
	cout << "What is the password: ";
	cin >> inPASS;
	bo.printUsers();
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
