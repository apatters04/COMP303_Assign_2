#pragma once
#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

/*
	nonprofessional;
	weekly/hourly salary, vacation hours based on worked hours

	healthcare contribution - my rule - 5%
	vacation - for every 20 hours worked, 1 hour of vacation time is accrued
*/

class NonProfessional : public Employee {
private:
	string name;
	int ID_num;
	double pay_rate, health_con, vacation;

public:
	NonProfessional();
	NonProfessional(string user_name, int user_ID, double user_pay, double user_health, double user_vacation) : Employee(user_name, user_ID) {
		pay_rate = user_pay;
		health_con = user_health;
		vacation = user_vacation;
	}

	void set_pay(double user_pay) { pay_rate = user_pay; };
	void set_hc(double user_hc) { health_con = user_hc; };
	void set_vd(double user_vd) { vacation = user_vd; };

	double get_pay() { return pay_rate; };
	double get_hc() { return health_con; };
	double get_vd() { return vacation; };

	double calc_weekly_salary(double hours_worked) const;
	double calc_health_care(double hours_worked) const;
	double calc_vacation_days(double hours_worked) const;

};


#endif