#include "pch.h"
#include "LoginSys.h"
#include <iostream>
#include <iomanip>
#include <cassert>

LoginSys::LoginSys()
{
	user[0] = "Juan";
	user[1] = "Carlos";
	user[2] = "Adrian";

	pass[0] = "pass1";
	pass[1] = "pass2";
	pass[2] = "pass3";

	amountUsers = 3;
	userPtr = &amountUsers;
}

void LoginSys::setUser(string userN[3])
{
	userN[3] = user[3];
}

void LoginSys::setPass(string passP[3])
{
	passP[3] = pass[3];
}

string LoginSys::getUser()
{
	return user[3];
}

string LoginSys::getPass()
{
	return pass[3];
}

void LoginSys::printUsers()
{
	cout << "\t\t\t" << setfill('=') << setw(30) << "=" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "\t\t\tUser " << i << ":" << endl;
		cout << "\t\t\t\t" << user[i] << endl;
		cout << endl;
	}
	cout << "\t\t\t" << setfill('=') << setw(30) << "=" << endl;
}

bool LoginSys::logicTest(string test_userN, string test_passP)
{
	for (int i = 0; i < amountUsers; i++)
	{
		if (test_userN == user[i] && test_passP == pass[i])
		{
			system("CLS");
			cout << "Login succesfull. ";
			system("PAUSE");
			return true;
		}
		else
			system("CLS");
			cout << "[ERROR]: Invalid username, or password. Please try again.";
			abort();
	}
}
