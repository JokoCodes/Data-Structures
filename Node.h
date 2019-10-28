#pragma once
#include <string>

using namespace std;

class Node {
public:
	string val;
	Node* left;
	Node* right;
	Node(string val) { //changed from int to string
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

private:

};