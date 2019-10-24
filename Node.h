#pragma once
#include <string>

using namespace std;

class Node{
public:
    string val;
    Node *left;
    Node *right;
    Node(int val){
        this->val= val;
        this->left = NULL;
        this->right = NULL;
    }

private:

};
