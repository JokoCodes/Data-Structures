#include <iostream>
#include <chrono>
#include <vector>
#include <array>
#include "Sorting.h"

using namespace std;


	typedef std::chrono::high_resolution_clock Clock;

	int main()	{
	    auto t1 = Clock::now();
		Sorting x;
		int Test1[10] = {};
		//int Test2[100] = {};
		//Sorting y;
		x.createArray(Test1,10);
		x.display(Test1,10);
		//y.createArray(15);
		//x.display();
		//y.display();
		//x.insertionSort(Test1,10);
		//x.quickSort(Test1, 0, 10);
		x.BubbleSort(Test1,10);
		//y.BubbleSort();
		x.display(Test1,10);
		//y.display();
		auto t2 = Clock::now();
	std::cout << "Delta t2-t1: "
 << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
 << " nanoseconds" << std::endl;
 	}
