// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "header.h"
#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

ILinkedList::ILinkedList() : m_count(0)
{

}

Node::Node() : m_value(-1), m_next(nullptr)
{

}
Node::Node(int val) : m_value(val), m_next(nullptr)
{

}
Node::Node(int val, Node * nextNode) : m_value(val), m_next(nextNode)
{

}
void Node::setItem(const int& val)
{
	m_value = val;
}
void Node::setNext(Node* nextNodePtr)
{
	m_next = nextNodePtr;
}
int Node::getItem() const
{
	return m_value;
}
Node * Node::getNext() const
{
	return m_next;
}
Node::~Node()
{
	std::cout << "Deleting node with value " << m_value << std::endl;
	Node::setItem(NULL); // This will delete the m_value item of the node by setting it to NULL
	Node::getNext(); // This will return the next node to be deconstructed

}

PointerBasedLinkedList::PointerBasedLinkedList() : ILinkedList(), m_head(nullptr)
{

}
/** Returns true if list is empty, otherwise false */
bool PointerBasedLinkedList::isEmpty() const
{
	if (m_head == nullptr) { // Linked list is empty if the head pointer is equal to nullptr
		return true;
	}
	else {
		return false;
	}
}
/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
bool PointerBasedLinkedList::add(int val)
{
	if (m_head == nullptr) { // This if statement will execute if the head pointer is null, meaning that the linked list is currently empty
		m_head = new Node(val); // Creates new node that head pointer points to
		m_count = m_count + 1; // Increments m_count, which keeps track of the number of nodes in the linked list
		return true;
	}
	else { // This else statement will execute if the linked list is not currently empty (m_head != nullptr)
		Node* temp = new Node(val); // This will make a new node that contains the value trying to be added
		Node * current = m_head;
		while (true) { // Loop will be set to run until either true or false is returned
			if (current->getNext() == nullptr) { // This if statement will execute once the linked list has reached the end, where the new node will be added
				current->setNext(temp); // This will set the next node (the last node) to be equal to temp, which points to the newly created node
				m_count = m_count + 1;
				return true;
			}
			else {
				current = current->getNext(); // If the end of the linked list has not been reached yet, then current will move on to the next pointer in the linked list until current's getNext() value is nullptr
			}
		}
	}
	return false;
}
/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
bool PointerBasedLinkedList::remove(int val)
{
	if (m_head == nullptr) { // This if statement will check if the linked list is empty, which will mean that nothing can be removed from the linked list
		return false;
	}
	else { // This else statement will execute if the linked list is not empty
		Node* current = m_head; // These next three definitions will create three new pointers all equal to m_head so that the linked list can be iterated through
		Node* previous = m_head;
		Node* next = m_head;
		while (current != nullptr) { // If current has reached nullptr (end of the linked list) and nothing has been removed, then the function will return false
			if (current->getItem() == val) { // This if statement checks if the item at which current is pointing matches the value to be removed from the linked list
				if (current == m_head) { // This if statement will execute if the item to be removed is at the front of the linked list
					m_head = current->getNext(); // Sets m_head equal to current's next value so that the head still points to the front of the linked list
					current->setItem(NULL); // Deletes node value to be removed by setting it equal to NULL
					delete current; // Will delete current so that there is no floating pointer
					m_count = m_count - 1;
					return true;
				}
				current->setItem(NULL); // Deletes node value to be removed by setting it equal to NULL
				delete current; // Will delete current so that there is no floating pointer
				previous->setNext(next); // This sets previous to point at the next node so that the linked list is still connected after current is deleted
				m_count = m_count - 1;
				return true;
			}
			else { // This else statement will execute if the item that the current pointer is pointing at is not equal to the value to be removed
				if (next == nullptr) { // This if statement checks to see if the end of the list has been reached, which will return false if we have reached the end of the linked list without finding the value to be removed
					return false;
				}
				previous = current; // These next three statements will push all of the pointers forward one node, which will help iterate through the linked list if the end of the list has not yet been reached
				current = next;
				next = current->getNext();

			}
		}
		return false;
	}
}

/** Remove  all elements from LinkedList */
void PointerBasedLinkedList::clear()
{
	if (m_head == nullptr) { // This if statement will check if the linked list is empty.  If it is, the function will do nothing, as the linked list has already been cleared

	}
	else { // This else statement will execute if the linked list is not emtpy and items need to be removed to clear the list
		Node* current = m_head; // These two pointers are created to iterate through the linked list and delete all of the nodes in the list by setting their values equal to NULL
		Node* next = m_head;
		next = current->getNext(); // This initializes next to be one node in front of the current node
		while (next != nullptr) { // This loop will execute until the last node has been reached
			current->setItem(NULL); // Deletes node value by setting its value equal to NULL
			current = next; // These next two statements help iterate through the linked list
			next = current->getNext();
		}
		current->setItem(NULL); // Deletes last node value by settings its value equal to NULL
		delete current; // Deletes current node so that there are no floating pointers
		delete next; // Deletes next node so that there are no floating pointers
		m_head = nullptr; // Sets m_head equal to nullptr so that it now points to nothing, after the linked list has been cleared
		m_count = 0;
	}
}
PointerBasedLinkedList::~PointerBasedLinkedList()
{
	clear(); // Calls clear function to deconstruct the pointer-based linked list
	delete m_head; // Deletes m_head after the linked list has been cleared to fully deconstruct the pointer-based linked list
}

std::string PointerBasedLinkedList::toString() const
{
	string str = ""; // Initializes the output string to be blank
	Node* current = m_head;
	if (m_head == nullptr) { // This if statement will execute if the linked list is blank, otherwise causing the final str value to be blank ("")
		str = "";
		return str;
	}
	else { // This else statement will execute if the linked list is not empty, as m_head points to a node with a value
		while (current->getNext() != nullptr) { // This loop will iterate until the end of the linked list has been reached
			if (current->getItem() != NULL) { // This if statement will execute if there is a value to the node being pointed at, so that there is not a NULL value trying to be added to the output string
				str = str + to_string(current->getItem()) + " "; // This statement will add the current node value to the output string, followed by a space
				current = current->getNext(); // Iterates onto the next node in the linked list
			}
		}
		str = str + to_string(current->getItem()) + " "; // This will add the last node value to the output string, followed by a space
		str = str.substr(0, str.size() - 1); // This substr function will be used to remove the last space of the output string
		return str;
	}
}

ArrayBasedLinkedList::ArrayBasedLinkedList() : ILinkedList()
{
	for (int i = 0; i < 10; ++i) { // For loop used to iterate through all 10 indices of the array
		m_values[i] = NULL; // Initializes each value in the newly constructed array-based linked list to be equal to NULL
	}
}

bool ArrayBasedLinkedList::isEmpty() const
{
	for (int i = 0; i < 10; i++) { // For loop used to iterate through all 10 indices of the array
		if (m_values[i] != NULL) { // If, at any point during the iteration through the linked list, a non-NULL value is found, the function will return false (not empty)
			return false;
		}
	}
	return true; // Function will return true if the end of the array is reached and no non-NULL values have been found, meaning the array is empty
}
bool ArrayBasedLinkedList::add(int val)
{
	for (int i = 0; i < 10; i++) { // For loop used to iterate through all 10 indices of the array
		if (m_values[i] != NULL) { // This if statement ensures that an already placed value in the array is not overwritten by the value trying to be added
			continue;
		}
		else { // This else statement will execute if a NULL value in the array has been found, where "val" can be added to the linked list
			m_values[i] = val; // This sets the value at the NULL index of the array to be equal to the "val" trying to be added
			return true;
		}
	}
	return false; // This function will return false if the entire array has been iterated thorugh and no NULL inputs have been found to add the new value to the array
}
bool ArrayBasedLinkedList::remove(int val)
{
	for (int i = 0; i < 10; i++) { // For loop used to iterate through all 10 indices of the array
		if (m_values[i] == val) { // If the value at the current index of the array is equal to the value trying to be removed, this if statement will execute
			m_values[i] = NULL; // Sets the current index of the array equal to NULL to remove it
			return true;
		}
	}
	return false; // This function will return false if the entire array has been iterated through and the "val" trying to be removed has not been found
}
void ArrayBasedLinkedList::clear()
{
	for (int i = 0; i < 10; ++i) { // For loop used to iterate through all 10 indices of the array
		m_values[i] = NULL; // This sets every value in the array equal to NULL to clear the array
	}
}
ArrayBasedLinkedList::~ArrayBasedLinkedList()
{

}

std::string ArrayBasedLinkedList::toString() const
{
	string str = ""; // Initializes the output string to be blank

	for (int i = 0; i < 10; i++) { // For loop used to iterate through all 10 indices of the array
		if (m_values[i] != NULL) { // If the value at the current index is not NULL, then that value plus a space will be added to the output string
			str = str + to_string(m_values[i]) + " ";
		}
	}

	str = str.substr(0, str.size() - 1); // This substr function will be used to remove the last space of the output string
	return str;
}

/*

Names: Emmanuel Jokotoye, Carl Williams, Ryan Winterhalter
Class Name: EECE2080C - Engineering Data Structures
Section: 001

Program Description:
- This program contains functions that are called on two different linked lists: one based on arrays and the other based on
pointers.  Each function will try to add, remove, clear, or recognize items within each list.  The goal of the lab is to
develop code that will allow each function to run properly, allowing for all 20 unit tests to pass, ensuring their correctness

Team Report:
- All three of our teammates worked evenly on the lab.  We spent two different lab classes working on this lab together
to eliminate all error codes, clear all memory leaks, and get all 20 unit tests to pass with our code.  We also kept in
constant communication outside of class to ensure that we were all playing our part to help complete the lab.  Each group
member adequately contributed to the completion of this lab, each working together to complete each function.

Help received:
- Online notes from Stack Exchange were used to implement the to_string and substr string functions
- Some pseudo code was discussed with other classmates on how to implement the remove and clear functions in the pointer-based linked list
- Emails were exchanged with the class TA regarding how to implement the remove and clear functions in the pointer-based linked list
- Help was received from the professor on how to eliminate error code C0000005
- Online notes from Stack Exchange were used to eliminate error code C0000005

*/