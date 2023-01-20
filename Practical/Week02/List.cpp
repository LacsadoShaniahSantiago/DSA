// List.cpp - Implementation of List ADT using Array
#include "List.h" 
#include "Person.h"// header file

// constructor
List::List() { size = 0; }

// add an item to the back of the list (append)
bool List::add(ItemType item)
{
	bool success = size < MAX_SIZE;
	if (success)
	{
		items[size] = item;    // add to the end of the list
		size++;                // increase the size by 1
	}
	return success;
}

// add an item at a specified position in the list (insert)
bool List::add(int index, ItemType item)
{
	bool success = (index >= 0) && (index <= size) && (size < MAX_SIZE);
	if (success)
	{  // make room for the item by shifting all items at
	   // positions >= index toward the end of the
	   // List (no shift if index == size + 1)
		for (int pos = size; pos >= index; pos--)
			items[pos] = items[pos - 1];
		// insert the item
		items[index] = item;
		size++;  // increase the size by 1
	}
	return success;
}

// remove an item at a specified position in the list
void List::remove(int index)
{
	bool success = (index >= 0) && (index < size);
	if (success)
	{  // delete item by shifting all items at positions >
	   // index toward the beginning of the list
	   // (no shift if index == size)
		for (int pos = index; pos < size; pos++)
			items[pos] = items[pos + 1];
		size--;  // decrease the size by 1
	}

}

// get an item at a specified position of the list (retrieve)
ItemType List::get(int index)
{
	bool success = (index >= 0) && (index < size);
	ItemType dataItem;
	if (success)
		dataItem = items[index];

	return dataItem;
}

// check if the list is empty
bool List::isEmpty() { return size == 0; }

// check the size of the list
int List::getLength() { return size; }

// display the items in the list
void List::print()
{
	cout << "Index\tName\t\t\tTelephone Number" << endl;
	for (int i = 0; i < size; i++)
	{
		Person person = items[i];

		//[i]	Name			TelephoneNumber
		cout << "[" << i << "]" << "\t" << person.getName() << "\t" << person.getTelNo() << endl;
	}
}

// replace the  item in the specified index in the list
void List::replace(int index, ItemType item)
{

}