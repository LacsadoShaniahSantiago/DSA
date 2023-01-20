// calYearlySalary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Employee.h"

int raiseMonthlySalary(Employee employee) 
{
    int newMonthlySalary = employee.getMonthlySalary() * 1.10;
    return newMonthlySalary;
}
int main()
{
    //2 Employee Objects
    Employee emp1("Reyna", "Valorant", -1000);
    Employee emp2("Sage", "Sagattitarius", 1000);

    //Display 2 Employee Object
    emp1.print();
    emp2.print();

    emp1.setmonthlySalary();
    emp2.setmonthlySalary();

    emp1.print();
    emp2.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
