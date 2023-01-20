#include <iostream>
#include <string>
#include "Person.h"

Person::Person(){ }
Person::Person(string n, string tNo)
{
	name = n;
	telNo = tNo;
}

void Person::setName(string n) { name = n; }
string Person::getName() { return name; }

void Person::setTelNo(string tNo) { telNo = tNo; }
string Person::getTelNo() { return telNo; }

void Person::display()
{
	cout << "Name: " << getName() << "\t" << "Phone Number: " << getTelNo() << endl;
}
