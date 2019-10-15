#include <iostream>
#include <chrono>
#include <vector>
#include <array>
#include "Sorting.h"

using namespace std;


	typedef std::chrono::high_resolution_clock Clock;

	int main()	{
	//    auto t1 = Clock::now();
	 //   auto t2 = Clock::now();
		Sorting x;
		x.createArray(10);
		x.display();
		x.BubbleSort();
		x.display();
	//std::cout << "Delta t2-t1: "
 //<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
 //<< " nanoseconds" << std::endl;
	}
