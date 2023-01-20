#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	private:
		string firstName;
		string lastName;
		int monthlySalary;

	public:
		Employee();
		Employee(string, string, int);

		void setfirstName(string);
		string getFirstName();

		void setlastName(string);
		string getLastName();

		void setmonthlySalary();
		int getMonthlySalary();

		void print();

};
