#include <iostream>
#include <string>
#include "Professional.h"

using namespace std;

Professional::Professional() { //default constructor, no args implementation
	name = "NONE";
	ID_num = 0000;
	pay_rate = 0.0;
	health_con = 0.0;
	vacation = 0.0;
}

double Professional::calc_weekly_salary(double hours_worked) const {
	double pay_day;

	pay_day = pay_rate / hours_worked; //divide monthy pay by # of hours worked in a week

	return pay_day;
}

double Professional::calc_health_care(double hours_worked) const {
	double health_care_contributions; 

	health_care_contributions = pay_rate * health_con; //multiplying health contribution percent by monthly salary to determine monthly contribution

	return health_care_contributions;
}


double Professional::calc_vacation_days(double hours_worked) const {
	double vacay_days = vacation;

	if (pay_rate > 5000) {  //checking the monthly salary of employee to determine vacation days
		vacay_days = 56;
	}
	else if (pay_rate == 5000) {
		vacay_days = 42;
	}
	else {
		vacay_days = 28;
	}

	return vacay_days;
}