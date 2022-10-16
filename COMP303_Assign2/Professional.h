#pragma once
#ifndef PROFESSIONAL_H
#define PROFESSIONAL_h

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

/*
	professional;
	monthly salary, vacation days are dependent on monthly pay

	health insurance contribtion - can be 5% - 10% of salary: MUST be greater than 5% and no greater than 10%
*/

class Professional : public Employee {
private:
	string name;
	int ID_num;
	double pay_rate, health_con;

public:
	Professional();
	Professional(string user_name, int user_ID, double user_pay, double user_health) : Employee(user_name, user_ID) {
		pay_rate = user_pay;
		health_con = user_health;
	}  //default constructor building off of base class Employee name/ID num - health care contrib. can be changed - vacation days are determined by monthly salary and do not carry over year to year

	void set_pay(double user_pay) { pay_rate = user_pay; }; //setters
	void set_hc(double user_hc) { health_con = user_hc; };

	double get_pay() { return pay_rate; }; //getters
	double get_hc() { return health_con; };

	double calc_weekly_salary(double hours_worked) const; //functions from base class modified to suit needs
	double calc_health_care(double hours_worked) const;
	double calc_vacation_days(double hours_worked) const;

};


#endif