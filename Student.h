#pragma once
#include <iostream>
#include "University.h"
#include <string>
using namespace std;
class Student : public University
{
public:
	int id;
	std::string name;

	void getName() {
		std::cout << name << endl;
	}

	Student(int id, string name , string name2) {
		this->id = id;
		this->name = name;
		this->uni_name = name2;
	}

private :
	int credit;
};

