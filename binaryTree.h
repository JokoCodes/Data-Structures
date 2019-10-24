#pragma once
#include <string>
#include "C:\Users\Emmanuel Jokotoye\Documents\Coding Files C++\lab07\Node.h"

using namespace std;

class binaryTree : public Node
{
public:
    void binaryTree(){
        Node *root = NULL;
    }

    void ~binaryTree(){

    }

    void Insert(Node* root, string val){
        //Checking to see if there is a Tree already, if not initialize tree

        if(Node* root  == NULL){
            Node *root = new Node(val);
        }
        else if (val <= root->val){ //val less than root insert to the left
            if(root->left != NULL){
                Insert(root->left, val);
            }
            else{
                root->left = new Node(val);
            }
        else if (val > root->val){ //val great than root insert to the right
            if(root->right != NULL){
                Insert(root->right, val);
            }
            else{
                root->right = new Node(val);
            }
        }
    }
 }

    Node* Find(Node* root, string val){

    }

    int Size(){
        //if root is NULL then tree is empty
        if( root == NULL){
            return 0;
        }

    }

private:

};
