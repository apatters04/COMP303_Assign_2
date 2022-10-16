
#include <iostream>
#include <string>
#include "Professional.h"
#include "NonProfessional.h"

using namespace std;

int main()
{	
	NonProfessional mike("Mike Wright", 1234, 25.0, 0);
	Professional doug("Douglas Allen", 5678, 6500, 0.02);
	double hours;
	cout << mike.get_name() << endl;
	cout << mike.get_pay() << endl;

	cout << "Enter hours worked: ";
	cin >> hours;
	cout << endl;

	cout << "Info for Mike Wright" << endl;
	cout << "Vacation Days Available: " << mike.calc_vacation_days(hours) << endl;
	cout << "Health Care Contributions: " << mike.calc_health_care(hours) << endl;
	cout << "Weekly Salary: " << mike.calc_weekly_salary(hours) << endl;
	cout << endl;

	cout << "Info for Doug Allen" << endl;
	cout << "Vacation Days Available: " << doug.calc_vacation_days(hours) << endl;
	cout << "Health Care Contributions: " << doug.calc_health_care(hours) << endl;
	cout << "Weekly Salary: " << doug.calc_weekly_salary(hours) << endl;
	
	
}
