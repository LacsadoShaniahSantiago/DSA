// pointerDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int value1 = 200000;
    int value2;

    int* ptr;
    ptr = &value1; //Assign address of value1 to pointer
    cout << *ptr << endl;
    value2 = *ptr;
    cout << value2 << endl;//It displays the data of value1
    cout << &value1 << endl;
    cout << ptr << endl; //Ptr has the same address as &value1.
    ptr = &value2; //Assign address of value2 to pointer.
    *ptr = *ptr + 2000; //Add 2000 to value pointed by ptr.
    cout << value1 << endl;
    cout << value2 << endl;//value2 was initially assigned a value of 20000. The value was then added 2000. Resulting the value of value2 to be 202000.


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
