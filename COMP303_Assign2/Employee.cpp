#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee() { //default constructor
	name = "NONE";
	ID_num = 0000;
}

Employee::Employee(string user_name, int user_ID) { //constructor with parameters passed through building class object
	name = user_name;
	ID_num = user_ID;
}
