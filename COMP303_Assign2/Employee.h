#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

/*
	common to all employees;
	name, ID num, health care contribution, vacation days
	functions:
	calc weekly salary, hc contributions, vacation days
*/

class Employee {
protected:
	string name;
	int ID_num;
	double pay_rate, health_con, vacation;

public:
	Employee(); //default constructor
	Employee(string user_name, int user_ID); //constructor with user inputs

	void set_name(string user_name) { name = user_name; }; //setters and getters
	void set_ID(int user_ID) { ID_num = user_ID; };
	string get_name() { return name; };
	int get_ID() { return ID_num; };

	virtual double calc_weekly_salary(double hours_worked) const = 0;
	virtual double calc_health_care(double hours_worked) const = 0;
	virtual double calc_vacation_days(double hours_worked) const = 0;

};

#endif