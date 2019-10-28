#pragma once
#include <string>
//#include "C:\Users\Emmanuel Jokotoye\Documents\Coding Files C++\lab07\Node.h"

using namespace std;

class Node{
public:
    string val;
    Node *left;
    Node *right;
    Node(string val){
        this->val= val;
        this->left = NULL;
        this->right = NULL;
    }

private:

};

class binaryTree //: public Node
{
public:
    //Constructor
    binaryTree(){
        Node *root = NULL;
        cout<< " Tree has been created!" << endl;
    }

    //destructor
    ~binaryTree(){
        cout<< " Tree has been destroyed!" << endl;
    }

    void Insert(Node* root, string newVal){
        //Checking to see if there is a Tree already, if not initialize tree
        if(Node* root  == NULL){
            Node *root = new Node(val);
        }
        else if (val <= root->newVal){ //val less than root insert to the left
            if(root->left != NULL){
                Insert(root->left, newVal);
            }
            else{
                root->left = new Node(newVal);
            }
        else if (val > root->newVal){ //val great than root insert to the right
            if(root->right != NULL){
                Insert(root->right, newVal);
            }
            else{
                root->right = new Node(newVal);
            }
        }
    }
 }

    Node* Find(Node* root, string newVal){

    }

    Node* Remove(Node* root, string newVal){
        //if list is empty let user know nothing to remove
        if(root == NULL){
            cout<<" There is nothing to remove!" <<endl;
            return root;
        }
        else if (newVal < root->val){
            root->left = Remove(root->left, newVal);
        }
        else if(newVal > root->val){
            root->right == Remove(root->right, newVal);
        }
        else{
            if(root->left == NULL || root->right == NULL){
                Node *temp = root->left ? root-left: root->;

                if(temp ==NULL){
                    temp = root;
                    root == NULL;
                }else (
                     *root = *temp;
                )
            }
            else{

            }
        }


    }

    int Size(){
        //if root is NULL then tree is empty
        if( root == NULL){
            return 0;
        }else{
            treeSize++;
        }
    return treeSize;
    }

    void printTree(Node *dataVal){
        if(dataVal != nullptr){
            cout<< dataVal->val << " ";
            print(dataVal->left);
            print(dataVal->right);
        }

    }

private:
    int treeSize = 0;
};
