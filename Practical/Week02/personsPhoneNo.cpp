// personsPhoneNo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "List.h"
#include "Person.h"
using namespace std;

//funtions
//By adding "&", it references the list created in the main program
//Without "&", it is being stored in lOfPerson list. Instead of the main List (listOfPersons
void option1(List &lOfPerson)
{
    if (lOfPerson.isEmpty() == true)
    {
        cout << "\nNo saved telephone numbers" << endl;
    }
    else
    {
        lOfPerson.print();
    }
}

void option2(List &lOfPerson, string newName, string newNumber)
{
    //Create Person object
    Person newPerson;
    newPerson.setName(newName);
    newPerson.setTelNo(newNumber);

    //Add Peroson Object to list
    lOfPerson.add(newPerson);
      
}
void option3(List &lOfPerson, int index)
{
    Person p = lOfPerson.get(index);
    cout << "\nRemoving contact number:" << endl;
    p.display();
    lOfPerson.remove(index-1);

}
void option4(List &lOfPerson, string number)
{
    for (int i = 0; i < lOfPerson.getLength(); i++)
    {
        Person item = lOfPerson.get(i);
        if (number == item.getTelNo())
        {
            cout << "Name: " << item.getName() << ", TelNo : " << item.getTelNo() << endl;
        }
    }
}

//main programme
int main()
{
    List listOfPersons;
    int phase = 0;
    int option;

    do {
        cout << "----------------Main Menu------------------" << endl;
        cout << "[1] List the phone numbers" << endl;
        cout << "[2] Add a new contact" << endl;
        cout << "[3] Remove a contact" << endl;
        cout << "[4] Search for a phone number" << endl;
        cout << "[0] Exit" << endl;
        cout << "----------------------------------------------" << endl;

        cout << "Enter your option: ";
        cin >> option;

        if (option == 1)
        {
            option1(listOfPersons);
        }
        else if (option == 2) 
        {
            string newName;
            string newNumber;
            cout << "\nAdding new contact" << endl;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter person's name: ";
            getline(cin, newName);

            cout << "Enter person's number: ";
            cin >> newNumber;

            //Adding new contact number
            option2(listOfPersons, newName, newNumber);

            listOfPersons.print();
        }
        else if (option == 3)
        {
            int index;
            listOfPersons.print();
            cout << "Enter index of contact number to remove from the list: ";
            cin >> index;
            option3(listOfPersons, index);

            listOfPersons.print();
        }
        else if (option == 4)
        {
            string findNumber;
            cout << "Enter a phone number to search: ";
            cin >> findNumber;
            option4(listOfPersons, findNumber);
        }
        else if (option == 0)
        {
            cout << "\nExiting program";
            phase++;
            
        }
        else
        {
            cout << "Please enter option available." << endl;
            continue;
        }

    } while (phase == 0);
}

