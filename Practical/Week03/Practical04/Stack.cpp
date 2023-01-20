#include "Stack.h"
using namespace std;

//Default constructor
Stack::Stack() {};

//Destructor
Stack::~Stack() 
{
	while (!isEmpty())
	{
		pop();
	}

};

//check if the stack is empty
bool Stack::isEmpty()
{

	if (topNode == NULL)
	{
		return true;
	}
	return false;
};

//push item on top of the stack
bool Stack::push(ItemType item)
{
	//Create a new node
	//Store the item to the node
	//Initialize the next pointer to null
	Node* newNode = new Node{ item, topNode };
	newNode->next = topNode;
	topNode = newNode;
	return true;
};

//pop item from top of stack
bool Stack::pop()
{
	if (!isEmpty())
	{
		Node* newNode = topNode;
		topNode = topNode->next;
		newNode->next = NULL;
		delete newNode;
		return true;
	}
	return false;
};

//retrieve and pop item from top of stack
bool Stack::pop(ItemType& item)
{
	if (!isEmpty())
	{
		Node* deleteItem;
		deleteItem = topNode;
		topNode = topNode->next;
		item = deleteItem->item;
		delete deleteItem;
		return true;
	}
	return false;
};

//retrieve item from top of stack
void Stack::getTop(ItemType& item)
{
	bool success = !isEmpty();
	if (success)
	{
		return topNode->item;
	}
	else
	{
		return NULL;
	}
	/*if (!isEmpty())
	{
		item = topNode->item;
	}*/
		
};

//display items in stack in order
void Stack::displayInOrder()
{
	ItemType item;
	Stack tempStack;

	if (!isEmpty())
	{
		while (!isEmpty())
		{
			getTop(item);
			cout << item << endl;
			tempStack.push(item);
			pop();
		}

		while (!tempStack.isEmpty())
		{
			tempStack.getTop(item);
			push(item);
			tempStack.pop();
		}
	}

	//if (!isEmpty())
	//{
	//	Stack reverseStack;
	//	Node* newNode;
	//	newNode = topNode;

	//	//Putting in reverse. Base of insertion from left to right [1,2,3,4] 
	//	//Rearrange to [4,3,2,1]
	//	while (newNode != NULL)
	//	{
	//		//Retrieve and store item in current stack
	//		int topItem;
	//		getTop(topItem);

	//		//Store item into reverse stack
	//		reverseStack.push(topItem);

	//		//Remove top item
	//		pop();
	//	}

	//	//Display [4,3,2,1] = {1} , {2}, {3}, {4}
	//	while (!reverseStack.isEmpty())
	//	{
	//		int nItem;
	//		reverseStack.getTop(nItem);
	//		cout << nItem << endl;

	//		//restoring the original
	//		push(nItem);

	//		//Moving to next item
	//		reverseStack.pop();

	//	}
	//}
};

//display items in stack in order of insertion
void Stack::displayInOrderOfInsertion()
{
	ItemType item;
	Stack tempStack;

	if (!isEmpty())
	{
		while (!isEmpty())
		{
			getTop(item);
			tempStack.push(item);
			pop();
		}
		while (!tempStack.isEmpty())
		{
			tempStack.getTop(item);
			cout << item << endl;
			push(item);
			tempStack.pop();
		}
	}
	else
	{
		cout << "The stack is empty." << endl;
	}
	////Display [1,2,3,4] = {1},{2},{3},{4}
	//if (!isEmpty())
	//{
	//	Stack tempStack;
	//	while (!isEmpty())
	//	{
	//		ItemType top;
	//		getTop(top);
	//		cout << top << endl;
	//		tempStack.push(top);
	//	}
	//}
};