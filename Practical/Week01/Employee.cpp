#include "Employee.h"

Employee:: Employee(){ }//Non-parameterized constructor
Employee:: Employee(string fN, string lN, int mS) : firstName(fN), lastName(lN), monthlySalary(mS){ }

void Employee::setfirstName(string fN) 
{
	firstName = fN;
}
string Employee::getFirstName() 
{
	return firstName;
}

void Employee::setlastName(string lN)
{
	lastName = lN;
}
string Employee::getLastName()
{
	return lastName;
}

void Employee::setmonthlySalary() 
{
	if (monthlySalary < 0) {
		monthlySalary = 0;
	}
}
int Employee::getMonthlySalary() 
{
	return monthlySalary;
}

void Employee::print() 
{
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Yearly Salarly:$ " << getMonthlySalary() * 12 << endl;
}
