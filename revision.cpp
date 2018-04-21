// revision.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "Student.h"
#include <string>
#include "User.h"
using namespace std;

#include "stdafx.h"


int main()
{

	Student mystudent(1245,"Khalid Hmoodah" , "Sanaa University");
	mystudent.getName();
	
	User u0("akram458", "Sdc5243", "Super Admin");

	u0.display();


	system("pause");
    return 0;
}

