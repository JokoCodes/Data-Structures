#pragma once
#include <iostream>
#include <array>

using namespace std;


class priorityQueue {

public:

    //Initializes the size of the array to 0
    priorityQueue(){
     capacity = 0;

    }

    ~priorityQueue(){

    }

    void Insert(int data){

    capacity = capacity + 1;

    for(int i=0; i <= capacity; i++;){

        if(queueData.size() == 1){
            queueData[i] = data;
        }
        else if(data > queueData[i]){
            queueData[i+1] == data;

        }

        }
    }


    int Remove();
    void PrintQueue(){

    for(int j=0; j< queueData.size(); j++){

        cout<< queueData[j] << " ";
    }
     cout<< endl;
    }

private:
    int capacity;
    int queueData[capacity];


};
