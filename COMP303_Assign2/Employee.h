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
	double pay_rate, health_con, vacation_days;

public:
	Employee(); //default constructor
	Employee(string user_name, int user_ID, double user_pay, double user_health, double user_vacation); //constructor with user inputs
	void set_name(string user_name); //setters and getters
	void set_ID(int user_ID);
	void set_pay(double user_pay);
	void set_hc(double user_hc);
	void set_vd(double user_vd);
	string get_name();
	int get_ID();
	double get_pay();
	double get_hc();
	double get_vd();

};

#endif