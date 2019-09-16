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

	//TODO - hint, you can recursively handle this
}

PointerBasedLinkedList::PointerBasedLinkedList() : ILinkedList(), m_head(nullptr)
{

}
/** Returns true  if list is empty, otherwise false */
bool PointerBasedLinkedList::isEmpty() const
{
	if (m_head == nullptr) {
		return true;
	}
	return false;
	/*
	else {
		Node* current = m_head;
		while (current->getNext() != nullptr) {
			if (current->getItem() != NULL) {
				return false;
			}
			else {
				current = current->getNext();
			}
		}
		return false;
	}
	*/
}
/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
bool PointerBasedLinkedList::add(int val)
{
	if (m_head == nullptr) {
		m_head = new Node(val);
		return true;
	}
	else {
		int conditional = 0;
		Node * temp = new Node(val);
		Node * current = m_head;
		while (conditional == 0) {
			if (current->getNext() == nullptr) {
				current->setNext(temp);
				conditional = 1;
				return true;
			}
			else {
				current = current->getNext();
			}
		}
	}
	return false;
	//TODO
}
/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
bool PointerBasedLinkedList::remove(int val)
{
	
	if (m_head == nullptr) {
		return false;
	}
	else {
		Node* current = m_head;
		Node* previous = m_head;
		Node* next = current->getNext();
		while (current != nullptr) {

			if (current->getItem() == val) {
				if (current == m_head) {
					m_head = current->getNext();
					current->setItem(NULL);
					delete current;
					return true;
				}
				//delete m_head;
				current->setItem(NULL);
				delete current;
				previous->setNext(next);
				return true;
			}
			else {
				if (next == nullptr) {
					return false;
				}
				previous = current;
				current = next;
				next = current->getNext();
			}
		}
		return false;
	}
	
	//TODO
}

/** Remove  all elements from LinkedList */
void PointerBasedLinkedList::clear()
{
	m_head = NULL;
	//TODO: Clear Memory Leaks
}
PointerBasedLinkedList::~PointerBasedLinkedList()
{
	//TODO
	delete m_head;
}

std::string PointerBasedLinkedList::toString() const
{
	string str = "";
	Node* current = m_head;
	while (current->getNext() != nullptr) {
		str = str + to_string(current->getItem()) + " ";
		current = current->getNext();
	}
	str = str + to_string(current->getItem()) + " ";
	str = str.substr(0, str.size() - 1);
	return str;
}

ArrayBasedLinkedList::ArrayBasedLinkedList() : ILinkedList()
{
	for (int i = 0; i < 10; ++i) {
		m_values[i] = NULL;
	}
}

bool ArrayBasedLinkedList::isEmpty() const
{
	for (int i = 0; i < 10; i++) {
		if (m_values[i] != NULL) {
			return false;
		}
	}
	return true;
}
bool ArrayBasedLinkedList::add(int val)
{
	for (int i = 0; i < 10; i++) {
		if (m_values[i] != NULL) {
			continue;
		}
		else {
			m_values[i] = val;
			return true;
		}
	}
	return false;
}
bool ArrayBasedLinkedList::remove(int val)
{
	for (int i = 0; i < 10; i++) {
		if (m_values[i] == val) {
			m_values[i] = NULL;
			return true;
		}
	}
	return false;
}
void ArrayBasedLinkedList::clear()
{
	for (int i = 0; i < 10; ++i) {
		m_values[i] = NULL;
	}
}
ArrayBasedLinkedList::~ArrayBasedLinkedList()
{

}

std::string ArrayBasedLinkedList::toString() const
{
	string str = "";

	for (int i = 0; i < 10; i++) {
		if (m_values[i] != NULL) {
			str = str + to_string(m_values[i]) + " ";
		}
	}

	str = str.substr(0, str.size() - 1);
	return str;
}
