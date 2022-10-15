#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee() {
	name = "NONE";
	ID_num = 0000;
	pay_rate = 0.0;
	health_con = 0.0;
	vacation_days = 0.0;
}

Employee::Employee(string user_name, int user_ID, double user_pay, double user_health, double user_vacation) {
	name = user_name;
	ID_num = user_ID;
	pay_rate = user_pay;
	health_con = user_health;
	vacation_days = user_vacation;
}

void Employee::set_name(string user_name) {
	name = user_name;
}

void Employee::set_ID(int user_ID) {
	ID_num = user_ID;
}

void Employee::set_pay(double user_pay) {
	pay_rate = user_pay;
}

void Employee::set_hc(double user_hc) {
	health_con = user_hc;
}

void set_vd(double user_vd) {
	vacation_days = user_vd;
}

string Employee::get_name() {
	return name;
}

int Employee::get_ID() {
	return ID_num;
}

double Employee::get_pay() {
	return pay_rate;
}

double Employee::get_hc() {
	return health_con;
}

double Employee::get_vd() {
	return vacation_days;
}