#include <iostream>
#include <cstring>
#include "C:\Users\Emmanuel Jokotoye\Documents\Coding Files C++\lab07\binaryTree.h"

using namespace std;


int main()
{
    string string1 = "Star Wars";
    string string2 = "Star Trek";
    string string3 = "Space Balls";
    string string4 = "Galaxy Quest";

    Node *root = new Node(string1);
    root->left = new Node(string2);
    root->left->left = new Node(string3);
    root->left->left = new Node(string4);

    printTree(root);

    return 0;
}
