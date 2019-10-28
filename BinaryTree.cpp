#include <iostream>
#include <cstring>
#include "C:\Users\Carl\source\repos\Binary Tree\Binary Tree\Node.h"
#include "BinaryTree.h"

using namespace std;



int main()
{
	string string1 = "Cars";
	string string2 = "Monster's Inc";
	string string3 = "The Incredibles";
	string string4 = "Wall-E";
	binaryTree tree;
	int id = 0;
	Node* root = new Node(string1);
	tree.Insert(root, string2);
	tree.Insert(root, string3);
	tree.Insert(root, string4);
	//root->left = new Node(string2);
	//root->left->left = new Node(string3);
	//root->left->left->left = new Node(string4);

	tree.printTree(root, id);
	
	return 0;
}