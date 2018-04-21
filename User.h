#pragma once
#include <iostream>
#include "Admin.h"
#include <string>
using namespace std;
class User
{
public:
	string username;
	string password;
	Admin Type;

	User(string name1, string name2, string name3) {
		this->username = name1;
		this->password = name2;
		this->Type.adminType = name3;
	}
	void display() {
		cout << username << "   " << password << "  " << Type.adminType << endl;
	}
};

