// Practical03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <list>
#include "List.h"
using namespace std;

int main()
{
    List nameList;
    ItemType item;
    nameList.add("Annie");
    nameList.add("Jacky");
    nameList.add("Wendy");
    cout << "\nDisplay:" << endl;
    nameList.print();
    nameList.add(1, "Brenda");
    cout << "\nDisplay:" << endl;
    nameList.print();
    nameList.remove(2);
    cout << "\nDisplay:" << endl;
    nameList.print();
    nameList.remove(0);
    cout << "\nDisplay:" << endl;
    nameList.print();
}
