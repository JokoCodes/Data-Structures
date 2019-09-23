// StackQueues.cpp : Defines the exported functions for the DLL application.
//

#include "header.h"
#include "StackQueues.h"

ArrayBasedStack::ArrayBasedStack() 
{
	// int stack[0];  // May or may not need these
}

bool ArrayBasedStack::isEmpty(void)
{
	if (stack.length() == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool ArrayBasedStack::push(int val)
{
	if (this->isEmpty()) {
		int size = stack.length();
		size = size + 1;
		int* newStack = new int[size];
		newStack[0] = val;
		delete[] stack;
		stack = newStack;
		return true;
	}
	else {
		int size = stack.length();
		size = size + 1;
		int* newStack = new int[size];
		for (int i = 0; i <= stack.length(); i++) {
			if (i == stack.size()) {
				newStack[i] = val;
			}
			else {
				newStack[i] = stack[i];
			}
		}
		delete[] stack;
		stack = newStack;
	}
	return false;
}

bool ArrayBasedStack::pop()
{
	if (this->isEmpty()) {
		throw "ADT is empty";
		return false;
	}
	else {
		int size = stack.length();
		size = size - 1;
		int* newStack = new int[size];
		for (int i = 0; i < stack.length() - 1; i++) {
			newStack[i] = stack[i];
		}
		delete[] stack;
		stack = newStack;
		return true;
	}
}

int ArrayBasedStack::peek()
{
	if (this->isEmpty())
	{
		throw "ADT is emtpy";
	}
	else
	{
		int topValue = stack[0];
		for (int i = 0; i < stack.length(); i++) {
			topValue = stack[i];
		}
		return topValue;
	}


}

ArrayBasedQueue::ArrayBasedQueue() 
{
	// std::string queue[0];  // May or may not need these
}

std::string ArrayBasedQueue::peekFront()
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
