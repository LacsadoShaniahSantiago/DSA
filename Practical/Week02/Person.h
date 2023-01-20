#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person
{
	private:
		string name;
		string telNo;

	public:
		Person();
		Person(string, string);

		void setName(string);
		string getName();

		void setTelNo(string);
		string getTelNo();

		void display();
};
