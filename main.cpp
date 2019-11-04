#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generateNum(){

    srand(time(NULL));
    return (rand()%15) + 1;
    }

int main()
{
    int userChoice;

    cout<< "Welcome to Doungens and Dragons!" << endl;
    cout<< "Menu: " << "\n 1.Start Game \n 2.Exit" << endl;
    cin>>userChoice;

    switch (userChoice){

    case 1:
    int gameChoice;
    cout<<"Party 1: What would you like to do?"<< endl;
    cout<<"\n 1.Select Character \n 2.Attack Party \n 3.Heal" << endl;
    cin>>gameChoice;

    switch(gameChoice){

    case 1: //310 - 620 - 9822

    break;

    case 2:

    break;

    }

    break;

    case 2:
        return 0;
        break;
    }

    return 0;
}
