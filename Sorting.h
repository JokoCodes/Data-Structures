#pragma once
#include <vector>
#include <array>

class Sorting {
public:
	std::vector <int> createArray(int size) {
		srand(time(0));
		x.resize(size + 1);
		for (int i = 0; i < size; i++) {
			x.at(i) = rand() % (2 * size) + 1;
		}
		return x;
	}

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
	
	void display() {
		for (int i = 0; i < x.size() - 1; i++) {
			std::cout << x.at(i) << " ";
		}
		std::cout << std::endl;
	}

private: 
	std::vector <int> x;
	
	bool sorted = false;
};