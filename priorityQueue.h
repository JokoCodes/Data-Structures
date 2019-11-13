#pragma once
#include <iostream>
#include <array>

using namespace std;

#define Size 10

class priorityQueue {

public:


    priorityQueue(){
    //Do something
    }

    ~priorityQueue(){
    //Do something
    }

    void Insert(){

    int ele;
    int priority;
    if(top == 0 && rear == Size-1){ //if there is no overflow then proceed to add item
        cout<< "\n List is full";
    }
    else{
    cout<<"\n What would you like to insert? : ";
    cin>>ele;
    cout<<"\t What is the priority of the item? : ";
    cin>>priority;

    if(top == -1){ //initializes the first item being added
        top = 0;
        rear = 0;
        queueData[rear] = ele;
        queuePriority[rear] = priority;
    }
    else if( rear == Size-1){
        for(int i= top; i <= rear; i++){
            queueData[i-top] = queueData[i];
            queuePriority[i-top] = queuePriority[i];
        }
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
    else{
            int i;
        for(i = rear; i>= top; i--){
            if(priority > queuePriority[i]){ //checks item if priority is higher than the previous item
                queueData[i+1] = queueData[i];
                queuePriority[i+1] = queuePriority[i];
            }
            else{
                break; //leaves loop after confirming that the item will still be at the right spot based on its priority
            }
        }
    //adding the item to the correct location
        queueData[i+1] = ele;
        queuePriority[i+1] = priority;
        rear++;
    }
    }

    }


    void Remove(){

    if(top == -1){ //checks to see that there is no underflow
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
    for(int j=0; j< Size; j++){ //prints each item in the list
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
