
// StackQueues.cpp : Defines the exported functions for the DLL application.
//

#include "header.h"
#include "StackQueues.h"
#include <iostream>
#include <string>

using namespace std;


int ArrayBasedStack::peek()
{
	if (this->isEmpty())
	{
		throw "ADT is empty";
	}
	else
	{
		
	}


}


bool ArrayBasedStack::pop() {

	if (this->isEmpty()) {

		cout << "There are no items in the stack!" << endl;

		return 0;
	}
	else {

		int x = 0;
		index = index - 1;
		x = stackArray[index];
		cout << "The last value has been removed from the stack!" << endl;

		return 1;
	}
}

bool ArrayBasedStack::push(int value) {

	if (!this->isEmpty()) {

		cout << "The Stack is Full!" << endl;
		return 0;
	}
	else {

		stackArray[index] = value; //adds value based on index and then increments index so next value can be added
		index = index + 1;
	}
	return 1;
}

bool ArrayBasedQueue::enQueue(std::string val) {
	string queueArray[10];
	if (!this->isEmpty()) {
		throw "The queue is full";
		return 0;
	}
	else {
		queueArray[qIndex] = val;
		qIndex = qIndex + 1;
		return 1;
	}
}

bool ArrayBasedQueue::deQueue() {
	if (this->isEmpty()) {
		throw "The queue is empty";
		return 0;
	}
	else {
		for (int i = 0; i < 8; i++) {
			queueArray[i] = queueArray[i + 1];
		}
		queueArray[9] = '0';
		return 1;
	}
}

std::string ArrayBasedQueue::peekFront()
{
	string x;
	string queueArray[10];
	if (this->isEmpty())
	{
		throw "ADT is empty";
	}
	else
	{
		x = queueArray[0];//TODO
		cout << "The front value is: " << x << endl;
	}
}

