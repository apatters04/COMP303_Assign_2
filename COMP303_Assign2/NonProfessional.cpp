#include <iostream>
#include <string>
#include "NonProfessional.h"

using namespace std;

NonProfessional::NonProfessional() {
	name = "NONE";
	ID_num = 0000;
	pay_rate = 0.0;
	health_con = 0.0;
	vacation = 0.0;
}

double NonProfessional::calc_weekly_salary(double hours_worked) const {
	double pay_day;

	pay_day = pay_rate * hours_worked;

	return pay_day;
}

double NonProfessional::calc_health_care(double hours_worked) const {
	double pay_day = calc_weekly_salary(hours_worked);
	double health_care_contributions;

	health_care_contributions = pay_day * health_con;

	return health_care_contributions;
}


double NonProfessional::calc_vacation_days(double hours_worked)const {
	double vacay;
	vacay = (hours_worked / 10) + vacation;
	return vacay;
}