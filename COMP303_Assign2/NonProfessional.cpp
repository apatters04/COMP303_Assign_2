#include <iostream>
#include <string>
#include "NonProfessional.h"

using namespace std;

NonProfessional::NonProfessional() { //default constructor, no args implementation
	name = "NONE";
	ID_num = 0000;
	pay_rate = 0.0;
	health_con = 0.0;
	vacation = 0.0;
}

double NonProfessional::calc_weekly_salary(double hours_worked) const {
	double pay_day;

	pay_day = pay_rate * hours_worked; //multiplying hourly rate by hours worked to find weekly salary

	return pay_day;
}

double NonProfessional::calc_health_care(double hours_worked) const {
	double pay_day = calc_weekly_salary(hours_worked); //calc weekly salary
	double health_care_contributions;

	health_care_contributions = pay_day * 0.05; //multiply weekly salary by health care contribution (set at 5%) to find weekly contribution

	return health_care_contributions;
}


double NonProfessional::calc_vacation_days(double hours_worked) const {
	double vacay;
	vacay = (hours_worked / 50) + vacation; //RULE: 1 vacation day is accrued per 50 hours worked, add to existing vacation time
	return vacay;
}