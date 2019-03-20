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
private:
	string user[3];
	string pass[3];
};

