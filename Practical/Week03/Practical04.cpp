// Practical04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s;
    s.push(3);
    s.push(4);
    int topItem;
    s.getTop(topItem);
    cout << topItem << endl;
    s.displayInOrderOfInsertion();
    s.pop();
    s.displayInOrderOfInsertion();
}
