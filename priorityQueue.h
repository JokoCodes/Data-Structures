#pragma once
#include <iostream>
#include <array>

using namespace std;

#define Size 10

class priorityQueue {

public:

    //Initializes the size of the array to 0
    priorityQueue(){

    }

    ~priorityQueue(){

    }

    void Insert(){

    int ele;
    int priority;
    if(top == 0 && rear == Size-1){
        cout<< "\n List is full";
    }
    else{
    cout<<"\n What would you like to insert? : ";
    cin>>ele;
    cout<<"\t What is the priority of the item? : ";
    cin>>priority;

    if(top == -1){
        top = 0;
        rear = 0;
        queueData[rear] = ele;
        queuePriority[rear] = priority;
    }
    else if( rear == Size-1){
        for(int i= top; i <= rear; i++){
            queueData[i-top] = queueData[i];
            queuePriority[i-top] = queuePriority[i];
            rear = rear-top;
            top = 0;

        for(int i = rear; i>=top; i--){
            if(priority > queuePriority[i]){
                queueData[i+1] = queueData[i];
                queuePriority[i+1] = queuePriority[i];
            }
            else{
                break;
            }
            queueData[i+1] = ele;
            queuePriority[i+1] = priority;
            rear++;
        }

        }


    }
    else{
        for(int i = rear; i>= top; i--){
            if(priority > queuePriority[i]){
                queueData[i+1] = queueData[i];
                queuePriority[i+1] = queuePriority[i];
            }
            else{
                break;
            }
            queueData[i+1] = ele;
            queuePriority[i+1] = priority;
            rear++;
        }
    }
    }


    /*
    for(int i=0; i <= 500; i++){

        if(queueData[i] == 0){
            queueData[i] = data;
        }
        else if(data > queueData[i]){
            queueData[i+1] == data;

        }

        }*/
    }


    void Remove(){

    if(top == -1){
        cout<<"\n List is empty";
    }
    else{
        if(top == rear){
            top = rear = -1;
        }
        else{
            top++;
        }
        cout<<queueData[top] << "\t has been removed from the Queue" << endl;

    }

    };

    void PrintQueue(){

    cout<< "\n Priority Queue: ";
    for(int j=0; j< Size-1; j++){
        cout<< queueData[j] << " ";
    }
     cout<< endl;
    }

private:
    int queueData[Size];
    int queuePriority[Size];
    int top = -1;
    int rear = -1;

};
