#include <iostream>
#include <vector>
#include <string>

#include "Hash.h"


int main()
{
	Hash table(500);
	for (int i = 0; i < 500; i++)
	{
		table.AddItem(rand());
	}
	table.GetLength();
	/*int userchoice = 0;
	int ex = 0;
	int userNum;
	cout << "Welcome!" << endl;
	//while user does not want to quit
	while (ex == 0)
	{
		//user selects what they want to do
		while (userchoice < 1 || userchoice > 5)
		{
			cout << "Please use the menu below to navigate this program:" << endl;
			cout << "Press 1 - Add Item" << endl << "Press 2 - Remove Item" << endl <<
				"Press 3 - Get Item" << endl << "Press 4 - Get Length" << endl
				<< "Press 5 - Exit Program" << endl;
			cin >> userchoice;
		}
		//user's choice is executed
		switch (userchoice)
		{
		case 1://add item
			cout << "\n What would you like to add to the table? : " << endl;
			cin >> userNum;
			table.AddItem(userNum);
			break;
		case 2://Remove Item
			cout << "\n What would you like to remove the table? : " << endl;
			cin >> userNum;
			table.RemoveItem(userNum);
			break;
		case 3://Get Item
			cout << "\n What would you like to  get from table? : " << endl;
			cin >> userNum;
			table.GetItem(userNum);
			break;
		case 4://Get Length
			table.GetLength();
			break;
		case 5://Exit Program
			ex = 1;
			break;
		}
		userchoice = 0;
	}*/
	return 0;
}
