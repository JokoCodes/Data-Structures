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
	void swap(int* a, int* b) { 
		int x = *a;
		*a = *b;
		*b = x;
	}

	void createArray(int x[], int length) {
		srand(time(0));
		for (int i = 0; i < length; i++) {
			x[i] = rand() % (2 * length) + 1;
		}
	}

	void BubbleSort(int x[], int length) {

		for (int i = 0; i < length - 1; i++) {
			for (int j = 0; j < length - i - 1; j++) {
				if (x[j] > x[j + 1]) {
					std::swap(x[j], x[j + 1]);
				}
			}
		}
	}
	/*
	std::vector <int> mergeSort() {

		int length = x.size();
		int leftSize;
		int rightSize;

		//Determining where to split the array in half at
		if (length % 2 == 0) {
			leftSize = length / 2;
			rightSize = length / 2;
		}
		else {
			leftSize = length / 2 + 1;
			rightSize = length / 2;
		}

		std::vector <int> arrayLeft;
		std::vector <int> arrayRight;

		//Coping the original array into the left half
		for (int j = 0; j < leftSize; j++) {
			arrayLeft.at(j) = x.at(j);
		}
		//Coping the original array into the right half
		for (int j = 0; j < rightSize; j++) {
			arrayRight.at(j) = x.at(j);
		}

		//Sort the Left array
		for (int i = 0; i < leftSize; i++) {

			if (arrayLeft.at(i) < arrayLeft.at(i + 1)) {

			}
			else {
				arrayLeft.at(i) = arrayLeft.at(i + 1);
			}
		}

		//Sort the right array
		for (int i = 0; i < rightSize; i++) {

			if (arrayRight.at(i) < arrayRight.at(i + 1)) {

			}
			else {
				arrayRight.at(i) = arrayRight.at(i + 1);
			}
		}

		//Combining the Arrays
		for (int i = 0; i < length - 1; i++) {
			if (i <= leftSize) {
				x.at(i) = arrayLeft.at(i);
			}
			else {
				x.at(i) = arrayRight.at(i);
			}
		}

		return x;
	}
	*/
	void insertionSort(int x[], int length) {  //Snippit slightly modified from http://www.algolist.net/Algorithms/Sorting/Insertion_sort
		for (int i = 1; i < length; i++) {
			int j = i;
			while (x[j] < x[j-1] && j > 0) {
				std::swap(x[j], x[j - 1]);
				j--;
			}
		}
	}

	int splitArrays(int x[], int beginning, int end) { //Snippit slightly modified from https://www.geeksforgeeks.org/quick-sort/
		int pivot = x[end - 1];
		int i = beginning - 1; 
		for (int j = beginning; j <= end - 1; j++) {
			if (x[j] < pivot) {
				i++;
				swap(&x[i], &x[j]);
			}
		}
		swap(&x[i + 1], &x[end - 1]);
		return (i + 1);
	};

	void quickSort(int x[], int beginning, int end) { //Snippit slightly modified from https://www.geeksforgeeks.org/quick-sort/
		if (beginning < end) {
			int pi = splitArrays(x, beginning, end);
			quickSort(x, beginning, pi - 1);
			quickSort(x, pi + 1, end);
		}
	}

	void display(int x[],int length) {
		for (int i = 0; i < length; i++) {
			cout << x[i] << " ";
		}
		std::cout << std::endl;
	}

private:

};


