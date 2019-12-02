#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node {
	int value;
	//Node* next;
};

class Hash {
public:
	Hash();
	Hash(int num);
	int key();
	void AddItem(int item);
	Node* RemoveItem(int item);
	Node* GetItem(int item);
	int GetLength();
	void PrintTable();
	~Hash();

	
private:

	int maxItem;
	int hash(int key);
	
	vector<Node*>HashTable;
};