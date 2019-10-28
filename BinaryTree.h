#pragma once
#include <string>
#include "C:\Users\Carl\source\repos\Binary Tree\Binary Tree\Node.h"

using namespace std;



class binaryTree //: public Node
{
public:

	bool operator > (const binaryTree& right)
	{
		return val > right.val;
	}
	
	bool operator < (const binaryTree& right)
	{
		return val < right.val;
	}

	//Constructor
	binaryTree() {
		Node* root = NULL;
		cout << " Tree has been created!" << endl;
	}

	//Destructor
	~binaryTree() {
		cout << " Tree has been destroyed!" << endl;
	}

	void Insert(Node* root, string newVal) {
	//	treeSize++;
		//Checking to see if there is a Tree already, if not initialize tree
		if (root == NULL) {
			root = new Node(newVal);
		}
		else if (newVal < root->val) { //val less than root insert to the left
			if (root->left != NULL) {
				Insert(root->left, newVal);
			}
			else {
				root->left = new Node(newVal);
			}
		}
		else if (newVal > root->val) { //val greater than root insert to the right
			if (root->right != NULL) {
				Insert(root->right, newVal);
			}
			else {
				root->right = new Node(newVal);
			}
		}
	}
	

	Node* Find(Node* root, string newVal) {

	}

	Node* Remove(Node* root, string newVal) {
		//if list is empty let user know nothing to remove
		if (root == NULL) {
			cout << " There is nothing to remove!" << endl;
			return root;
		}
		else if (newVal < root->val) {
			root->left = Remove(root->left, newVal);
		}
		else if (newVal > root->val) {
			root->right = Remove(root->right, newVal);
		}
		else {
			if (root->left == NULL || root->right == NULL) {
				Node* temp = root->left ? root -> left : root->right;

				if (temp == NULL) {
					temp = root;
					root = NULL;
				}
				else {
					*root = *temp;
				}
			}
			else {

			}
		}


	}

	/*int Size() {
		//if root is NULL then tree is empty
		if (root == NULL) {
			return 0;
		}
		else {
			treeSize++;
		}
		return treeSize;
	} */

	void printTree(Node* dataVal, int& id) {
		//if (dataVal != nullptr) {
			cout << "Left side of tree - " << dataVal->val << endl;
			printTree(dataVal->left, id);
		//}
	/*	else {
		//	cout << "Right side of tree - " << dataVal->val << endl;
			printTree(dataVal->right, id);
		}*/
			id++;
			//	cout << id << dataVal->left << ' ' << endl;
			//	cout << id << dataVal->right << ' ' << endl;

				//cout << dataVal->left;
			//printTree(dataVal->right, id);
			//cout << dataVal->right;
		}


	
private:
	int treeSize = 0;
	Node* root;
	Node* val;
};