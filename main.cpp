#include <iostream>
#include <vector>
#include <string>

#include "Hash.h"


int main()
{
	Hash x;
	x.AddItem(rand());
	x.AddItem(rand());
	x.AddItem(rand());
	x.AddItem(rand());
	x.AddItem(5);
	x.GetLength();
	x.RemoveItem(5);
	x.AddItem(6);
	x.AddItem(7);
	x.AddItem(8);
	x.AddItem(9);
	x.AddItem(10);
	x.AddItem(rand());
	x.GetLength();
	x.GetItem(9);
	x.GetItem(1212131);
	x.PrintTable();
	return 0;
}