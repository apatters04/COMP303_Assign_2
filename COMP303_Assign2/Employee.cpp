#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee() {
	name = "NONE";
	ID_num = 0000;
	//pay_rate = 0.0;
	//health_con = 0.0;
	//vacation = 0.0;
}

Employee::Employee(string user_name, int user_ID) {
	name = user_name;
	ID_num = user_ID;
	/*pay_rate = user_pay;
	health_con = user_health;
	vacation = user_vacation;*/
}
