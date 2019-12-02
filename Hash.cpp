#include <iostream>
#include <string>
#include "Hash.h"
using namespace std;

Hash::Hash() //Code modified from https://www.youtube.com/watch?v=m6n_rozU8dA
{
	maxItem = 10;
	cout << "Creating a hash table capible of holding " << maxItem << " items..." << endl << endl;	
	HashTable.resize(maxItem);
	for (int i = 0; i < maxItem; i++)
	{
		HashTable.at(i) = new Node;
		HashTable.at(i)->value = NULL;
	//	HashTable.at(i)->next = nullptr;
	}
}

Hash::Hash(int max)
{
	maxItem = max;
	cout << "Creating a hash table capible of holding " << max << " items..." << endl << endl;
	HashTable.resize(maxItem);
	for (int i = 0; i < maxItem; i++)
	{
		HashTable.at(i) = new Node;
		HashTable.at(i)->value = NULL;
	//	HashTable.at(i)->next = nullptr;
	}
}

void Hash::AddItem(int num)
{
	int index = hash(num);
	int index2 = index;

	if (HashTable.at(index)->value == NULL)
	{
		HashTable.at(index)->value = num;
		cout << "The value " << num << " has successfully been added to the table at index " << index << "!" << endl << endl;
	}
	else
	{
		cout << "There is already a value there. Trying somewhere else..." << endl << endl;
		while (HashTable.at(index)->value != NULL && index < maxItem - 1)
		{
			index++;
		}

		if (index >= maxItem - 1) {
			int i = 0;
			while (HashTable.at(i)->value != NULL && i < index2)
			{
				i++;
			}
			if (i >= index2) {
				cout << "The value " << num << " could not be added to the table..." << endl << endl;
			}
			else {
				HashTable.at(i)->value = num;
				cout << "The value " << num << " has been added successfully at index " << i << "!" << endl << endl;
			}
			
		}
		else
		{
			HashTable.at(index)->value = num;
			cout << "The value " << num << " has been added successfully at index " << index << "!" << endl << endl;
		}
	}
}

Node* Hash::RemoveItem(int num)
{
	for (int i = 0; i < maxItem; i++)
	{
		if (HashTable.at(i)->value == num)
		{
			Node* returnPtr = new Node;
		//	returnPtr->next = HashTable.at(i)->next;
			returnPtr->value = HashTable.at(i)->value;
			cout << num << " has been removed from index " << i << "..." << endl << endl;
			HashTable.at(i)->value = NULL;
		//	HashTable.at(i)->next = nullptr;
			return returnPtr;
		}
	}
	cout << "The value " << num << " is not in the table!" << endl << endl;

 }

Node* Hash::GetItem(int num)
{
	for (int i = 0; i < maxItem; i++)
	{
		if (HashTable.at(i)->value == num)
		{
			Node* returnPtr = new Node;
			//	returnPtr->next = HashTable.at(i)->next;
			returnPtr->value = HashTable.at(i)->value;
			cout <<"The value " << num << " is at index " << i << "!" << endl << endl;
		
			return returnPtr;
		}
	}
	cout << "The value " << num << " is not in the table!" << endl << endl;

}

int Hash::GetLength()
{
	int count = 0;
	for (int i = 0; i < maxItem; i++)
	{
		if (HashTable.at(i)->value != NULL)
		{
			count++;
		}
	}
	cout << "There are " << count << " items in the table." << endl << endl;
	return count;
}

void Hash::PrintTable()
{
	cout << "----------------------------" << endl;
	int number;
	for (int i = 0; i < maxItem; i++)
	{
		cout << "Index: " << i << endl;
		cout << "Value: " << HashTable.at(i)->value << endl;
		cout << "----------------------------" << endl;
	}
}

Hash::~Hash()
{
	cout << "Deleting hash table..." << endl;
	for (int i = 0; i < maxItem; i++) {
		delete HashTable.at(i);
	}
	HashTable.clear();
}

int Hash::hash(int key)
{
	int modulus = key % maxItem;
	return modulus;
}
/*
bool Node::operator==(const Node ptr) const
{
	return this->value == ptr.value;
}
*/