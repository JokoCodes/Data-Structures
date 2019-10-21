#pragma once
#include <vector>
#include <array>
#include <iostream>
#include <cmath>
#include <ctime>
#include<cstring>
#include<cstdlib>

using namespace std;

class Sorting {
public:
	/*
	std::vector <int> createArray(int size) {
		srand(time(0));
		x.resize(size + 1);
		for (int i = 0; i < size; i++) {
			x.at(i) = rand() % (2 * size) + 1;
		}
		return x;
	}
*/
	std::vector <int> BubbleSort() {
		//while (sorted == false) {
			int i = 0;
			while (i < x.size() - 1) {
				if (x.at(i) > x.at(i + 1)) {
					std::swap(x.at(i), x.at(i + 1));
					i++;
				}
				else {
					i++;
				}
			}
		//	sorted = true;
		//}
			return x;
		}
	std::vector <int> mergeSort(){

    int length = x.size();
    int leftSize;
    int rightSize;

    //Determining where to split the array in half at
    if(length % 2 == 0){
        leftSize = length/2;
        rightSize = length/2;
    }
    else{
        leftSize = length/2 + 1;
        rightSize = length/2;
    }

    std::vector <int> arrayLeft;
    std::vector <int> arrayRight;

    //Coping the original array into the left half
    for(int j = 0; j < leftSize; j++){
        arrayLeft.at(j) = x.at(j);
    }
    //Coping the original array into the right half
    for(int j = 0; j < rightSize; j++){
        arrayRight.at(j) = x.at(j);
    }

    //Sort the Left array
    for(int i = 0; i < leftSize; i++){

        if( arrayLeft.at(i) < arrayLeft.at(i+1)){

        }
        else{
            arrayLeft.at(i) = arrayLeft.at(i+1);
        }
    }

    //Sort the right array
    for(int i = 0; i < rightSize; i++){

        if( arrayRight.at(i) < arrayRight.at(i+1)){

        }
        else{
            arrayRight.at(i) = arrayRight.at(i+1);
        }
    }

    //Combining the Arrays
    for(int i= 0; i < length-1; i++){
        if (i <= leftSize){
        x.at(i) = arrayLeft.at(i);
        }
        else{
            x.at(i) = arrayRight.at(i);
        }
    }

    return x;
}

    std::vector<int> insertionSort(){

    int i = 0;
    while(i < x.size()-1){
    for(; i < x.size()-1; i++ ){

        if(x.at(i+1) < x.at(i)){

            x.at(i) = x.at(i+1);
            i++;
        }
        else{

        }
    }
    }

    return x;
    }

	void display() {
		for (int i = 0; i < x.size() - 1; i++) {
			std::cout << x.at(i) << " ";
		}
		std::cout << std::endl;
	}

private:
	std::vector <int> x = {9, 20, 40 ,2, 7, 15, 10, 3, 18, 13};

	bool sorted = false;
};



