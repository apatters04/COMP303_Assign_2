
#include <iostream>
#include <string>
#include <vector>
#include "Professional.h"
#include "NonProfessional.h"

using namespace std;

int main()
{	
	char user_input = ' ';
	string user_employee;
	int user_ID;
	double user_pay;
	double user_hc;
	double user_vd;
	int user_hours;
	

	while (user_input != 'Q') {
		cout << "Enter (P) to enter a Professional Employee" << endl;
		cout << "Enter (N) to enter a Nonprofessional Empployee" << endl;
		cout << "Enter (Q) to Quit" << endl;
		cout << endl;

		cin >> user_input;
		cout << endl;

		if (toupper(user_input) == 'Q') {
			break;
		}
		else if (toupper(user_input) == 'P') {
			cin.ignore();
			cout << "Enter Employee Name: ";
			getline(cin, user_employee);
			cout << endl;

			cout << "Enter Employee ID Number: ";
			cin >> user_ID;
			cout << endl;

			cout << "Enter Professional Employee Monthly Salary: ";
			cin >> user_pay;
			cout << endl;

			cout << "Enter Professional Employee Monthly Health Care Contributions (0.05 - 0.10): ";
			cin >> user_hc;
			cout << endl;

			Employee* new_employee = new Professional(user_employee, user_ID, user_pay, user_hc); //storing as pointer, can be used to store each employee into a vector at later time

			cout << "Enter hours worked per week: ";
			cin >> user_hours;
			cout << endl;

			cout << user_employee << "'s weekly salary: " << new_employee->calc_weekly_salary(user_hours) << endl;
			cout << user_employee << "'s monthly health care contribution: "  << new_employee->calc_health_care(user_hours) << endl;
			cout << user_employee << "'s yearly vacation days: " << new_employee->calc_vacation_days(user_hours) << endl;
			cout << endl;
		}

		else if (toupper(user_input) == 'N') {
			cin.ignore();
			cout << "Enter Employee Name: ";
			getline(cin, user_employee);
			cout << endl;

			cout << "Enter Employee ID Number: ";
			cin >> user_ID;
			cout << endl;

			cout << "Enter Non-Professional Employee Hourly Pay Rate: ";
			cin >> user_pay;
			cout << endl;

			cout << "Enter Non-Professional Employee Current Accrued Vacation Days: ";
			cin >> user_vd;
			cout << endl;
			
			Employee* new_employee = new NonProfessional(user_employee, user_ID, user_pay, user_vd); //storing as pointer, can be used to store each employee into a vector at later time

			cout << "Enter hours worked this week: ";
			cin >> user_hours;
			cout << endl;

			cout << user_employee << "'s weekly salary: " << new_employee->calc_weekly_salary(user_hours) << endl;
			cout << user_employee << "'s weekly health care contribution: " << new_employee->calc_health_care(user_hours) << endl;
			cout << user_employee << "'s accrued vacation days: " << new_employee->calc_vacation_days(user_hours) << endl;
			cout << endl;
		}

	};
	
	
}
