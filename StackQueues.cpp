// StackQueues.cpp : Defines the exported functions for the DLL application.
//

#include "header.h"
#include "StackQueues.h"
#include <iostream>

using namespace std;


int ArrayBasedStack::peek()
{
	if (this->isEmpty())
	{
		throw "ADT is emtpy";
	}
	else
	{
		//TODO
	}


}

std::string ArrayBasedQueue::peekFront()
{
	int x;
	if (this->isEmpty())
	{
		throw "ADT is emtpy";
	}
	else
	{
		x = stacArray[index - ];//TODO
		cout << "The front value is: " << x << endl;
	}


}

bool ArrayBasedStack::pop() {
	
	if (this->isEmpty()) {

		cout << "There are no items in the stack!" << endl;
			
		return 0;
	}
	else {
		
		int x = 0;
		index = index -1;
		x = stackArray[index];
		cout << "The last value has been removed from the stack!" << endl;

		return 1;
	}
}

bool ArrayBasedStack::push(int value) {

	if (!this->isEmpty()) {

		cout << "The Stack is Full!" << endl;
	}
	else {
		
		stackArray[index] = value; //adds value based on index and then increments index so next value can be added
		index = index + 1;
	}
}