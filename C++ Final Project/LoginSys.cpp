#include "pch.h"
#include "LoginSys.h"
#include <iostream>
#include <iomanip>

LoginSys::LoginSys()
{
	user[0] = "Juan";
	user[1] = "Carlos";
	user[2] = "Adrian";

	pass[0] = "pass1";
	pass[1] = "pass2";
	pass[2] = "pass3";
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
		cout << "\t\t\tOption " << i << endl;
		cout << user[i] << endl;
		cout << endl;
	}
	cout << "\t\t\t" << setfill('=') << setw(30) << "=" << endl;

}

