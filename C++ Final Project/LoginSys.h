#pragma once
#include "Estimate.h"
#include <string>
using namespace std;
class LoginSys : public Estimate
{
public:
	LoginSys();
	void setUser(string userN[3]);
	void setPass(string passP[3]);
	string getUser();
	string getPass();
	void printUsers();
	bool logicTest(string test_userN, string test_userP);
private:
	string user[3];
	string pass[3];
	int amountUsers;
	int *userPtr;
};

