#include <iostream>
#include <string>
#include "Hash.h"

using namespace std;

Hash::Hash()
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

int Hash::key()
{
	return 0;
}



void Hash::AddItem(int num)
{
	int index = hash(num);
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
			cout << "The value " << num << " could not be added to the table..." << endl << endl;
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
			cout << "The value " << num << " is at index " << i << "!" << endl << endl;

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
}

int Hash::hash(int key)
{
	int modulus = key % maxItem;
	return modulus;
}

int main()
{
	Hash table;
	int userchoice = 0;
	int ex = 0;
	int userNum;
	cout << "Welcome!" << endl;
	//while user does not want to quit
	while (ex == 0)
	{
		//user selects what they want to do
		while (userchoice < 1 || userchoice>5)
		{
			cout << "Please use the menu below to navigate this program:" << endl;
			cout << "Press 1 - Add Item" << endl << "Press 2 - Remove Item" << endl <<
				"Press 3 - Get Item" << endl << "Press 4 - Get Length" << endl
				<< "Press 5 - Exit Program" << endl;
			cin >> userchoice;
		}
		//user's choice is executed
		switch (userchoice)
		{
		case 1://add item
			cout << "\n What would you like to add to the table? : " << endl;
			cin >> userNum;
			table.AddItem(userNum);
			break;
		case 2://Remove Item
			cout << "\n What would you like to remove the table? : " << endl;
			cin >> userNum;
			table.RemoveItem(userNum);
			break;
		case 3://Get Item
			cout << "\n What would you like to  get from table? : " << endl;
			cin >> userNum;
			table.GetItem(userNum);
			break;
		case 4://Get Length
			table.GetLength();
			break;
		case 5://Exit Program
			ex = 1;
			break;
		}
		userchoice = 0;
	}
	return 0;
}